#include<iostream>

using namespace std;

int lcs(int *A, int *B, int m, int n)
{

    if(m == 0 || n == 0)
        return 0;
    if(A[m-1] == B[n-1])
        return 1 + lcs(A, B, m-1, n-1);
    else
        return max(lcs(A, B, m-1, n), lcs(A, B, m, n-1));

}

int main()
{

    return 0;

}
