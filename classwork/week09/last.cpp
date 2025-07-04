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
	int vl;
	int companyid1;
		int cid1;

public:
	Signup(int cmpid, string name, int custid, string str, int vl, int MBup, int MBdown, int cmpid1, int custid1) : companyid(cmpid), companyname(name), cid(custid), str(str), vl(vl), MBup(MBup), MBdown(MBdown), companyid1(cmpid), cid1(custid) {}
};


class login
{
public:
	mutex mtx;

	int custmer_bill(vector<Signup>& sig)
	{
		int cid;
		//vector<opr>o;
		int v = 0, p = 0, val = 0;
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
	//ifstream ss("data.cdr");
	//vector<opr>o;

	string line, str, companyname;
	int cid, custid, val, MBup, MBdown, custid1, companyid1, s;
	vector<Signup>sig;
	
	//Signup line(1522840, "Jio", 42502, "MOC", 312, 0, 0, 1697783, 42501);
	string s = "1522840, "Jio", 42502, "MOC", 312, 0, 0, 1697783, 42501";

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
	return 0;
}

int main()
{

	cout << "welcome " << endl;
	vector<Signup>sig {}
	login l;
	menu(sig);

	return 0;
}