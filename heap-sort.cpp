#include<bits/stdc++.h>

using namespace std;

void _swap(int *p, int *b)
{
    int temp = *p;
    *p = *b;
    *b = temp;
}

void max_heapify(int a[], int n, int i)
{
    int largest;
    int left = 2*i + 1, right = 2*i + 2;
    if(left < n && a[left] > a[i])
        largest = left;
    else
        largest = i;
    if(right < n && a[right] > a[largest])
        largest = right;
    if(largest != i)
    {
        _swap(&a[i], &a[largest]);
        max_heapify(a, n, largest);
    }
}

void build_max_heap(int a[], int n)
{
    for(int i = n/2; i >= 0; i--)
        max_heapify(a, n, i);
}

void heap_sort(int a[], int n)
{
    build_max_heap(a, n);
    for(int i = n-1; i > 0; i--)
    {
        _swap(&a[0], &a[i]);
        max_heapify(a, i, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    heap_sort(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
