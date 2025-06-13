void logActivity(const string& message)
{
	int p = 0, v = 0;
	lock_guard<mutex> lock(mtx);
	ofstream file("Customer.txt", ios::app);
	if (!file) {
		cerr << "Error opening log file.\n";
		return;
	}
	file << "*Services outside the mobile operator *" << endl;
	file << "Incoming voice call durations: " << sig.str << endl;
	file << "Outgoing voice call durations: " << sig.str << endl;
	file << "Incoming SMS messages: " << sig.str << endl;
	file << "Outgoing SMS messages: " << sig.str << endl;
	file << "* Internet use *" << endl;
	file << "MB downloaded : " << p;
	file << "MB updated : " << p;

	file.close();
}

////////////////void logActivity(const string& message) {
lock_guard<mutex> lock(mtx);
ofstream file("operator.txt", ios::app);
if (!file) {
	cerr << "Error opening log file.\n";
	return;
}
file << "*Services outside the mobile operator *" << endl;
file << "Incoming voice call durations: " << sig.str << endl;
file << "Outgoing voice call durations: " << sig.str << endl;
file << "Incoming SMS messages: " << sig.str << endl;
file << "Outgoing SMS messages: " << sig.str << endl;
file.close();
	}
	/////////////////////
	class opr
	{
	public:
		int companyid;
		string companyname;
		int cid;
		opr(int cmpid = 0, string name = "", int custid = 0) : companyid(cmpid), companyname(name), cid(custid) {}

	};