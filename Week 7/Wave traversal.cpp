#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{

    int row, col;
    cout << "enter the value of the row of the first array" << endl;
    cin >> row;
    cout << "enter the value of the column of the first column" << endl;
    cin >> col;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    cout << "enter the values of the first array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

  
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < col; j++)
    {
        if ((j % 2) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << endl;
            }
        }
        if ((j % 2) != 0)
         {   for (int i = row-1 ; i >= 0; i--)
            {
                cout << arr[i][j] << endl;
            }
         }

    }

    getch();
    return 0;
}