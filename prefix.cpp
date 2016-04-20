#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> p;
    int n;
    cin >> n;
    char *ch = new char[n];
    cin >> ch;
    for(int i = n-1; i >= 0; i--){
        if(ch[i] != '+' && ch[i] != '-' && ch[i] != '*' && ch[i] != '/'){
            p.push((int)ch[i] - (int)'0');
        }
        else{
            int a = p.top();
            p.pop();
            int b = p.top();
            p.pop();
            if(ch[i] == '+')
                p.push(a+b);
            else if(ch[i] == '-')
                p.push(a-b);
            else if(ch[i] == '*')
                p.push(a*b);
            else if(ch[i] == '/')
                p.push(a/b);
        }
    }
    cout << p.top();
    return 0;
}
