#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

class CDRRecord {
public:
    string msisdn;
    string operatorBrand;
    string operatorMNC;
    string callType;
    int duration;
    double download;
    double upload;
    string newMSISDN;
    string newOperatorMNC;

    CDRRecord(const string& msisdn, const string& operatorBrand, const string& operatorMNC,
        const string& callType, int duration, double download, double upload,
        const string& newMSISDN, const string& newOperatorMNC)
        : msisdn(msisdn), operatorBrand(operatorBrand), operatorMNC(operatorMNC),
        callType(callType), duration(duration), download(download), upload(upload),
        newMSISDN(newMSISDN), newOperatorMNC(newOperatorMNC) {}
};

class CDRProcessor
{
private:
    vector<CDRRecord> records;

public:
    void parseCDRFile(const string& filename) {
        ifstream file(filename);
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string msisdn, operatorBrand, operatorMNC, callType, newMSISDN, newOperatorMNC;
            int duration;
            double download, upload;

            getline(ss, msisdn, '|');
            getline(ss, operatorBrand, '|');
            getline(ss, operatorMNC, '|');
            getline(ss, callType, '|');
            ss >> duration;
            ss.ignore(1, '|');
            ss >> download;
            ss.ignore(1, '|');
            ss >> upload;
            ss.ignore(1, '|');
            getline(ss, newMSISDN, '|');
            getline(ss, newOperatorMNC);

            records.emplace_back(msisdn, operatorBrand, operatorMNC, callType, duration, download, upload,
                newMSISDN, newOperatorMNC);
        }
    }
};


int main()
{

}

