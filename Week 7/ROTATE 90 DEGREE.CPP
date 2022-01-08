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
    //---------------------- before rotation-------------//
    cout << "Before Rotation of the matrix " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //-------------------------transpose of matrix--------------//
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i >= j)
                swap(arr[i][j], arr[j][i]);
        }
    }
    //-------------------------reverse the no of the rows--------------//
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = row - 1;
        for (int j = 0; j < col; j++)
        {
            while (start <= end)
            {
                swap(arr[i][start], arr[i][end]);
                start++;
                end--;
            }
        }
    }
    //--------------------after rotation---------------------------//
    cout << "After Rotation of the matrix " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}