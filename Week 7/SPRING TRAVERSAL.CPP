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
    cout << "the spring traversal in the array" << endl;
    //--------------------------spring traversal------------------------------
    int start_row = 0, start_col = 0, ending_row = row - 1, ending_col = col - 1;
    int count = 0, total = row * col;

    while (count < total)
    {
        for (int index = start_col; index <= ending_col; index++)
        {
            cout << arr[start_row][index] << endl;
            count++;
        }
        start_row++;
        for (int index = start_row; index <= ending_row; index++)
        {
            cout << arr[index][ending_col] << endl;
            count++;
        }
        ending_col--;
        for (int index = ending_col; index >= start_col; index--)
        {
            cout << arr[ending_row][index] << endl;
            count++;
        }
        ending_row--;
        for (int index = ending_row; index >= start_row; index--)
        {
            cout << arr[index][start_col] << endl;
            count++;
        }
        start_col++;
    }

    getch();
    return 0;
}