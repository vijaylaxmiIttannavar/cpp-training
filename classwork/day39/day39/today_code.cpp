#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include<list>

using namespace std;

enum assembly
{
	MOV,
	ADD,
	SUB,
	MUL,
	DIV,
	HLT
};

struct Data
{
	string inst;
	string adress;
	string AX, BX, CX, DX;
	int value;
	Data(string inst, string adress, string  AX, string BX, string CX, string DX, int value) : inst(inst), adress(adress), AX(AX), BX(BX), CX(CX), DX(DX), value(value) {}
};

class Program_Counter
{
protected:
	Program_Counter()
	{
		int mem = { 65535 };
	}
public:
	ofstream logFile;
	Program_Counter(const string& filename) {
		logFile.open("instruction.txt", ios::app);
	}

	~Program_Counter()
	{
		if (logFile.is_open())
			logFile.close();
	}
};
//64kb= 64k int
//1 byte= 1 int
//64*1024=65535

vector<Data> move_operation(vector<Data>& d, const string& filename)
{
	vector<Data>d;
	string ip;
	if (ip == d->adress && ip == d->value)
		d->adress = d->value;
	else if (ip == d->r && ip == d->value)
		d.r = d->value;
	else if (ip == d > -r && ip == d->adress)
		d->r = d->adress;
	else if (ip == d->adress && ip == d->r)
		d->adress = d->r;
}

void arithmatic_operation(vector<Data>& d, const string& filename)
{

	ifstream file(filename);
	string str;
	if (str == "ADD")
	{
		d->AX = d.AX + d.BX;
	}
	else if (str == "SUB")
	{
		d.AX = d.AX - d.BX;
	}
	else if (str == "MUL")
	{
		d.AX = d.AX * d.BX;
	}
	else if (str == "DIV")
	{
		d.AX = d.AX / d.BX;
	}
	return AX;
}

void stoping(vector<Data>& d, const string& filename)
{
	cout << "Recevied Interrupt" << endl;
	cout << "Snapshot of the processor" << endl;
	cout << "AX: " << endl;
	cout << "BX: " << endl;
	cout << "CX: " << endl;
	cout << "DX: " << endl;
}

void print()
{
	cout << "FIrst 16 Memory Contents" << endl;
	int i = 0;
	while (true)
	{
		cout << "0" << i++ << AX << endl;
	}
}

int main()
{
	Program_Counter pc();
	Program_Counter poc("instruction.txt");
	vector<Data>d;
	void (*scheduleFunc)(vector<Data>&d, Program_Counter & pc) = nullptr;
	//string cmd;
	while (true)
	{
		//getline(cin, cmd);
		istringstream iss("instruction.txt");
		string action;
		iss >> action;

		if (action == "MOV")
		{
			int value;
			string r, adress;
			iss >> adress >> r >> value;
			move_operation(d, "instruction.txt");
		}
		else if (action == "ADD" || action == "SUB" || action == "div" || action == "mul")
		{
			int value;
			string r, adress;
			iss >> adress >> r >> value;
			arithmatic_operation(d, "instruction.txt");
		}
		else if (action == "HLT")
		{
			stoping(d, "instruction.txt");
		}
	}
	print();
	return 0;
}
