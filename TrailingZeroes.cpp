#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int counter = 0, i = 1;
    if(n > 5){
        while(pow(5, i) < n){
            counter += n / pow(5, i);
            i++;
        }
        cout << counter;
    }
    else if(n == 5)
        cout << 1;
    else
        cout << 0;
    return 0;
}
