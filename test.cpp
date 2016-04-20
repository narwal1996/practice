// Codechef --> EASY - "PCYCLE".
#include<bits/stdc++.h>
#define for(a) for(int j = 0; j < a; j++)

using namespace std;

int a[1005], n, visited[1005];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
        cin >> a[i];
	int i = 1;
	visited[i] = true;
	vector<int> ans;
	ans.push_back(1);
	while(1)
    {
		i = a[i];
		ans.push_back(i);
		if (visited[i])
            {
			ans.push_back(-1);
			int temp = -1;
			for(n)
                if(!visited[j])
                {
                    temp = j;
                    break;
                }
			if(temp ==  -1)
                break;
			else
            {
				i = temp;
				ans.push_back(i);
			}
		}
		visited[i]=true;
	}
	int counter = 0;
    for(ans.size())
        if(ans[i] == -1)
            counter++;
	cout << counter;
    for(ans.size())
    {
		if (ans[i] == -1)
            cout << endl;
		else
            cout << ans[i];
	}
	return 0;
}
