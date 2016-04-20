#include<iostream>

using namespace std;

int result(string a, string b, int m, int n){
    if(m == 0)
        return n;
    if(n == 0)
        return m;
    if(a[m-1] == b[n-1])
        return result(a, b, m-1, n-1);
    if(a[m-1] != b[n-1]){
        int x = min(result(a, b, m-1, n), result(a, b, m, n-1));
        return 1 + min(x, result(a, b, m-1, n-1));
    }
}

int main()
{
    string a;
    string b;
    cin >> a >> b;
    cout << result(a, b, a.size(), b.size());
    return 0;
}
