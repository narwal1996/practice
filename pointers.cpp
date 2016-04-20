#include<iostream>

using namespace std;

int funcOne(int n);

int main()
{
    int n = 310;
    n = funcOne(n);
    cout << "n = " << n << endl;
    return 0;
}

int funcOne(int n) {
    n = 240;
    return n;
}
