//******************************************************
//This program count occurrences of '!=' in a data file.
//******************************************************
#include <iostream>
#include<fstream>

using namespace std;

int main() {
    int count = 0; // No. of occurrences of '!='.
    char prevchar;
    char currentchar;
    ifstream inFile ("practice.txt");
    ofstream outFile ("output.txt");
    if (!inFile)
    {
        cout << "Can't open the file.";
        return 1; //terminate the program.
    }
    inFile.get(prevchar);
    inFile.get(currentchar);
    while (inFile) // input from file succeeds ...
    {
        if (prevchar == '!' && currentchar == '=')
            count++;
        prevchar = currentchar;
        inFile.get(currentchar);
    }
    cout << count << " occurrences of '!=' were found.";
    inFile.close();
	return 0;
}
