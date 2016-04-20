#include <iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main(){
    long long int n, a, b, c, x=1;
    cin >> n >> a >> b >> c;
    long long int counter;
    if(n>=b && a > (b-c)){
        counter = (n-b)/(b-c);
        n -= n - b
        counter += max(b/a, x);
    }
    else
        counter = n/a;
    cout << counter;
}
