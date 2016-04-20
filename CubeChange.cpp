#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	long long int n;
	cin >> n;
	long long int cases[n];
	for(long long int i = 0; i < n; i++)
		cin >> cases[i];
	for(long long int i = 0; i < n; i++){
		long long int a = cases[i], b = cases[i] -2;
		if(cases[i] == 1)
			cout << 1 << endl;
		else if(cases[i] == 2)
			cout << 8 << endl;
		else{
			cout << (a - b)*(a*a + a*b + b*b) << endl;
	}
	}
    return 0;
}
