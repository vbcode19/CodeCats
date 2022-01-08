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
    //---------------------------largest row sum-------------------------------//
    int sum=0,num=-1,maxi=INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>maxi)
        {
            maxi=sum;
            num=row;
        }
    }
    cout<<"the maximum sum of the row is "<<sum<<"at the row"<<row+1<<endl;

    getch();
    return 0;
}