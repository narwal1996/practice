#include <iostream>
#include <math.h>
#include<string.h>
#include<fstream> // for file I/O.
#include<cctype>

using namespace std;

int main() {
    char c;
    string str;
    ifstream inFile ("practice.txt"); // attempt to open the file.
    ofstream outFile ("output.txt");
    if (!inFile)
    { // if file would not open, print message, terminate the program!
        cout << "Can't open the file.";
        return 1; //terminate the program.
    }
    while (inFile)  // while input succeeds ....
    {
        getline(inFile, str);  // streams the whole line to str.
        cout << str << endl;
    }
    inFile.close(); // attempt to close the file.
	return 0;
}
