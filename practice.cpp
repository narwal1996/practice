#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int factorial = 1;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        factorial *= i;
        if(factorial%5 == 0)
            ans++;
    }
    cout << ans;
    return 0;
}
