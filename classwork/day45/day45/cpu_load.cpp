/*
Your program should simulate the CPUs picking and completing tasks. Each CPU can execute only 1 task a time,
but all CPUs operate in parallel.
The output should indicate:
* Which CPU picked which task 
* When the CPU finishes that task
Each task's simulated load should be treated as seconds of processing time (use sleep/delay).
The order of task assignment may vary across executions due to thread scheduling.
*/

#include<iostream>
#include<thread>
#include<mutex>
#include<sstream>
#include<string>
#include<queue>
#include<fstream>
#include<vector>

using namespace std;

class simulate
{
public:
	string task;
	int load;
public:
	simulate(string t, int l) : task(""), load(0) {}

};

class operation
{
private:
	queue<simulate>op;
	mutex mtx;
public:
	operation(const vector<simulate>& t)
	{
		for (const auto& i : t)
			op.push(i);

	}
	bool assign(simulate& s)
	{
		lock_guard<mutex>lock(mtx);
		if (op.empty())
			return false;
		op.front();
		op.pop();
		return true;
	}
	
};

void execution(int c, operation& o)
{
	simulate s;
	while (o.assign(s))
	{
		cout << "cpu " << c << " picked task " << s.task << " load: " << s.load << endl;
		this_thread::sleep_for(std::chrono::seconds(s.load));
		cout << "cpu " << c << " finished " << s.load << endl;
	}
}


int main()
{   
	ifstream ss("input.txt");
	vector<simulate>t;
	string task;
	
	int l;
	while (getline(ss, task ))
	{
		if (task.find("CPU") != string::npos)
		{
			l = stoi(task.substr(5));
		}
		else if (task.find(":load") != string::npos)
		{
			size_t c = task.find(':');
			string tk = task.substr(0,c);
			int ld = stoi(task.substr(c + 7));
			t.emplace_back( task, l );
		}
	}
	ss.close();

	operation os(t);
	vector<thread>thrd;
	for (int i = 1;i <= l;i++)
		thrd.push_back(thread(execution, i, ref(os)));

	//thread p(task);

	for (auto& i : thrd)
	{
		i.join();
	}


}