#include<iostream>
#include<fstream>
#include<vector>
#include<thread>
#include<string>
#include<chrono>
#include <condition_variable>
#include<mutex>
#include<sstream>

using namespace std;

/*enum com {
	MOC, MTC, SMO-MO, SMS-MT
};  */

class Signup
{
public:
	int companyid;
	string companyname;
	int cid;
	string str;	
	int MBdown;
	int MBup;
public:
	//Signup(int cmpid, string name, int custid, string str, int MBup, int MBdown) : companyid(cmpid), companyname(name), cid(custid), str(str), MBup(MBup), MBdown(MBdown) {}
};


class login
{
public:
	mutex mtx;

	int custmer_bill(vector<Signup>& sig)
	{
		int cid;
		string companyname;
		vector<Signup>sig;
		int v = 0, p = 0, val = 0;
		lock_guard<std::mutex> lock(mtx);
		cout << " Customers Data Base : " << endl;
		cout << "Customer ID : " << cid << sig.companyname << endl;		
	
		ofstream file("Customer.txt", ios::app);
		if (!file) {
			cerr << "Error opening log file.\n";
			return;
		}
		else
		{
			if (sig.companyname == sig.companyid1)
			{
				file << "*Services outside the mobile operator *" << endl;
				val = sig.str == "MOC" ? sig.s : p;
				file << "Incoming voice call durations: " << val << endl;
				val = sig.str == "MTC" ? sig.s : p;
				file << "Outgoing voice call durations: " << val << endl;
				val = sig.str == "SMS-MT" ? sig.s : p;
				file << "Incoming SMS messages: " << val << endl;
				val = sig.str == "SMS-MO" ? sig.s : p;
				file << "Outgoing SMS messages: " << val << endl;
			}
			else
			{
				file << "* Services within the mobile operator *" << endl;
				val = sig.str == "MOC" ? sig.s : p;
				file << "Incoming voice call durations: " << val << endl;
				val = sig.str == "MTC" ? sig.s : p;
				file << "Outgoing voice call durations: " << val << endl;
				val = sig.str == "SMS-MT" ? sig.s : p;
				file << "Incoming SMS messages: " << val << endl;
				val = sig.str == "SMS-MO" ? sig.s : p;
				file << "Outgoing SMS messages: " << val << endl;
			}
			file << "* Internet use *" << endl;
			file << "MB downloaded : " << p;
			file << "MB updated : " << p;
		}
	}

	

	int interpator_bill(vector<Signup>& sig)
	{
		static int v = 0, p = 0, val = 0;
		lock_guard<std::mutex> lock(mtx);
		ofstream file("operator.txt", ios::app);
		if (!file) {
			cerr << "Error opening log file.\n";
			return;
		}
		else
		file << "*Services outside the mobile operator *" << endl;
		val = sig.str == "MOC" ? sig.s : p;
		file << "Incoming voice call durations: " << val << endl;
		val = sig.str == "MTC" ? sig.s : p;
		file << "Outgoing voice call durations: " << val << endl;
		val = sig.str == "SMS-MT" ? sig.s : p;
		file << "Incoming SMS messages: " << val << endl;
		val = sig.str == "SMS-MO" ? sig.s : p;
		file << "Outgoing SMS messages: " << val << endl;
	}
	
};

int menu(vector<Signup>& sig)
{
	ifstream ss("data.cdr");
	//vector<opr>o;
	if (ss.is_open()) {
		std::cerr << "Failed to open data.cdr file." << std::endl;
		return 1;
	}

	string line, str, companyname;
	int cid, custid, val, MBup, MBdown, custid1, companyid1, s;
	vector<Signup>sig;
	while (getline(ss, line))
	{
		ss >> custid;
		if (line.find("|") != string::npos)
			ss >> companyname;
		else if (line.find("|") != string::npos)
			ss >> cid;
		else if (line.find("|") != string::npos)
			ss >> str;
		else if (line.find("|") != string::npos)
			ss >> s;
		else if (line.find("|") != string::npos)
			ss >> MBdown;
		else if (line.find("|") != string::npos)
			ss >> MBup;
		else if (line.find("|") != string::npos)
			ss >> custid1;
		else if (line.find("|") != string::npos)
			ss >> companyid1;
		sig.emplace_back(custid, companyname, cid, str, MBdown, MBup, custid1, companyid1);
	}
	ss.close();

	int ch = 0;
	cin >> ch;
	login l;

	while (true)
	{
		switch (ch)
		{
		case 1:
			l.custmer_bill(sig);
			break;
		case 2:
			l.interpator_bill(sig);
			break;
		case 3:
			cout << "bcak ";
			break;
		}
	}

	//vector<thread>t;

	thread t1(&Signup::custmer_bill, &sig, ref(sig));
	thread t2(&Signup::interpator_bill, &sig, ref(sig));
	
	t1.join();
	t2.join();

	return 0;
}

int main()
{ 
	
	cout << "welcome " << endl;
	vector<Signup>sig;
    login l;
	menu(sig);
	
	return 0;
}