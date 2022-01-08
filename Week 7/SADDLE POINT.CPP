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
    //--------------------------SADDLE POINT--------------------//
    int mini[row];
    int maxi[col];
    for (int i = 0; i < row; i++)
    {
        int temp = INT_MAX;
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < temp)
                temp = arr[i][j];
        }
        mini[i] = temp;
    }

    for (int i = 0; i < col; i++)
    {
        int temp = INT_MIN;
        for (int j = 0; j < row; j++)
        {
            if (arr[j][i] > temp)
                temp = arr[j][i];
        }
        maxi[i] = temp;
    }

    int value, count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mini[i] == maxi[j])
            {
                count++;
                value = mini[i];
            }
        }
    }
    if (count == 1)
    {
        cout << "the saddle point in the array is " << value;
    }
    else

        cout << "the saddle point is not found" << endl;

    getch();
    return 0;
}