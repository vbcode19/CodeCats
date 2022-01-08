#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int row, col, value, count = 0;
    cout << "enter the value of the row of the first array" << endl;
    cin >> row;
    cout << "enter the value of the column of the first column" << endl;
    cin >> col;

    //-----------------------creating first 2 d array--------------------------
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
    cout << "enter the value you want to search" << endl;
    cin >> value;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == value)
            {
                count++;
                cout << "the value is at row index" << i << "the value is at column index" << j << endl;
            }
        }
    }
    if(count==0)
    {
        cout<<"Element is not found"<<endl;
    }

    getch();
    return 0;
}