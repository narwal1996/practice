#include <iostream>
#include <math.h>
#include<string.h>
#include<fstream>

using namespace std;

int main() {
    string firstname;
    string middlename;
    string lastname;
    string security;
	ifstream inFile("name.dat.txt");
	ofstream outFile("name.out.txt");
	inFile >> security >> firstname >> middlename >> lastname;
	inFile.close();
	outFile << security << " " << firstname << " " << middlename << " " << lastname << endl;
	outFile << lastname << ", " << firstname << " " << middlename << " " << security << endl;
	outFile << lastname << ", " << firstname << " "  << middlename.at(0) << " " << security << endl;
	outFile << firstname << " " << middlename.at(0) << " " << lastname << endl;
	return 0;
}
