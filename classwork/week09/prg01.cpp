#include<iostream>
#include<fstream>
#include<vector>
#include<thread>
#include<string>
#include<chrono>
#include<mutex>
#include<sstream>

using namespace std;

//struct com { string Partner, Cellcom, Jio, 012, Airtel; };

class Signup
{
protected:
	int companyid;
	string companyname;
	int custid;
public:
	Signup(int cmpid, string name, int custid) : companyid(cmpid), companyname(name), custid(custid) {}
};

class  Service : public Signup
{
	int MOC;
	int MTC;
	int SMO;
	int SMT;
	int GPRS;
public:
	Service(int MOC, int MTC, int SMO, int SMT, int GPRS) : MOC(MOC), MTC(MTC), SMO(SMO), SMT(SMT), GPRS(GPRS), Telecom(companyid, companyname, custid) {}
};

class login
{
	vector<Service>ser;

	int custmer_bill(vector<Service>&ser)
	{

	}

	int interpator_bill(vector<Service>& ser)
	{

	}
	
};

int menu(vector<Service>&ser)
{


}