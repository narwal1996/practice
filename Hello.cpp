#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int input, counter=0;
    cin >> input;
    if(input==1)
        cout << "not a prime";
    else if(input==2)
        cout << "prime";
    else{
        for(int i=2; i <= sqrt(input); i++){
            if(input%i==0){
                counter++;
            }
        }
        if(counter > 0)
            cout << "not a prime";
        else
            cout << "prime";

    }
}










