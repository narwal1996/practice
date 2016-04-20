#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long int b;
        cin >> b;
        long long int temp = 0;
        long long int sum;
        while(1){
            sum = temp*(pow(temp, 2)+1)*(temp+1);
            if(sum <= b)
                temp++;
            else{
                temp--;
                break;
            }
        }
        cout << temp << endl;
    }
    return 0;
}
