#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int row, col, row1, col1;
    cout << "enter the value of the row of the first array" << endl;
    cin >> row;
    cout << "enter the value of the column of the first column" << endl;
    cin >> col;
    cout << "enter the value of the row of the second array" << endl;
    cin >> row1;
    cout << "enter the value of the column of the second array" << endl;
    cin >> col1;

    if (col == row1)
    {
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

        //-----------------------creating second 2 d array--------------------------
        int **arr1 = new int *[row1];
        for (int i = 0; i < row1; i++)
        {
            arr1[i] = new int[col1];
        }
        cout << "enter the values of the second  array" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cin >> arr1[i][j];
            }
        }

        //-----------------------creating resultant 2 d array--------------------------
        int **arr2 = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr2[i] = new int[col1];
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                arr2[i][j] = (arr[i][j]) * (arr1[i][j]);
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << arr2[i][j] << " ";
            }

            cout << endl;
        }
        //----------------------deleting the heap memory-----------
        for(int i=0;i<row;i++)
        {
            delete [] arr[i];
        }
        delete [] arr;

        for(int i=0;i<row;i++)
        {
            delete [] arr1[i];
        }
        delete [] arr1;
    }
    else
    {
        cout << "invalid input" << endl;
    }

    getch();
    return 0;
}