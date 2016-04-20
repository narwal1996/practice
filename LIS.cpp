#include<iostream>

using namespace std;

void LIS(int D[], int n)
{

    int lis[n];
    for(int i = 0; i < n; i++)
        lis[i] = 1;
    for(int i = 1; i < n; i++)
        for(int j = 0; j < i; j++)
            if(D[i] > D[j])
                ;

}

int main()
{


    return 0;

}
