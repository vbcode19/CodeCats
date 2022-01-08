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
    //-----------------------diagonal traversal------------------------//
    cout << "after diagonal traversal" << endl;
    for (int gap = 0; gap < row; gap++)
    {
        for (int i = 0, j = gap; j < col; i++, j++)
        {

            cout << arr[i][j] << endl;
            ;
        }
    }
    getch();
    return 0;
}