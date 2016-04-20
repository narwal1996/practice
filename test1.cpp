#include <iostream>

using namespace std;

int main()
{
    int t;
    for(int i = 0; i < t; i++){
    	int n, k;
    	cin >> n >> k;
    	cout << n << " " << k;
    	if(k <= 81){
			for(int j=0; j < n; j++){
				if(i%2 == 0)
					cout << k/9 + 1;
				else{
					if(k/9 == k%9)
						cout << k%9 + 2;
					else
						cout << k%9 +1;
				}
			}
    	}
    	else
    		cout << -1;
    	cout << endl;
    }
    return 0;
}
