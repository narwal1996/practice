#include<iostream>

using namespace std;

int fibonacci(int n);

int main(){
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans;
    return 0;
}

int fibonacci(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}