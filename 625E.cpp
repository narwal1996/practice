//******************************************************
//This program count occurrences of '!=' in a data file.
//******************************************************
#include <iostream>
#include<fstream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int n, m, i=0, temp, counter;
    cin >> n >>m;
    int p[n], a[n];
    for(int i=0; i < n; i++)
        cin >> p[i] >> a[i];
    for(int i=0; i < n; i++){
        temp = p[i];
        p[i] = (a[i]+p[i] < n) ? ((a[i]+p[i])%n) : (a[i]+p[i]);
        counter = 0;
        for(int j=1; j <= a[i]; j++){
            p[i] = (p[i]+j < n) ? ((p[i]+j)%n) : (p[i]+j);
            if(p[i] == )
        }
    }
}
