#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n];
    for(int i =0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++){
        int counter = 0;
        for(int j = 0; j < n; j++){
            if(s[i]%s[j] != 0){
                counter++;
            }
        }
        if(counter == n-1)
            cout << s[i] << " ";
    }
    return 0;
}
