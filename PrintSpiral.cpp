#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int m, n;
    cout << "No. of rows: ";
    cin >> m;
    cout << "No. of columns: ";
    cin >> n;
    int matrix[m][n];
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix you entered is: " << endl;
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

