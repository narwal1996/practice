#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0, counter = 0;
    while(i < s1.size()){
        if(s1.find(s2) != string::npos){
            counter++;
            i = s1.find(s2);
            s1 = s1.substr(i + s2.size(), string::npos);
        }
        else
            break;
    }
    cout << counter;
}
