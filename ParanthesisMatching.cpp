#include<bits/stdc++.h>

using namespace std;

bool paranthesisBalance(int n){
    char *ch = new char[n];
    cin >> ch;
    stack<char> p;
    for(int i = 0; i < n; i++){
        if(ch[i] == '(')
            p.push(ch[i]);
        else if(ch[i] == ')'){
            if(p.empty())
                return false;
            else
                p.pop();
        }
    }
    if(p.empty())
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    if(paranthesisBalance(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
