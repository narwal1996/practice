#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    for(int k = 0 ; k < n; k++){
        string a;
        cin >> a;
        char *ch = new char[10];
        for(int j = 0; j < 10; j++)
            ch[j] = 0;
        string::iterator i;
        i = a.begin() + 1;
        int temp = (int)a.at(0)-(int)'0', counter = 1;
        while(i != a.end()){
            cout << (int)*i-(int)'0' << endl;
            if((int)*i-(int)'0' == temp){
                counter++;
            }
            else{
                cout << counter << temp;
                counter = 1;
                temp = (int)*i - (int)'0';
            }
        }
        cout << endl;
    }
    return 0;
}
