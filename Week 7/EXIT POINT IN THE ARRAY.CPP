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
    //------------------------exit point in the array------------
    int dir=0;
    int i=0,j=0;
    while(1)
    {
        dir=dir+arr[i][j];
        if(dir==0)               //  east
        j++;
        else if(dir==1)          //  south

        i++;
        else if(dir==2)          // west
        j--;
        else if(dir==3)          // north
        i--;

        if(i<0)
        {
            i++;
            break;
        }
        else if(j<0)
        {
            j++;
            break;
        }
        else if(i==row)
        {
            i--;
            break;
        }
        else if(j==col)
        {
            j--;
            break;
        }


    }
    cout<<"the row th index is"<<i<<"the col index"<<j<<endl;
    getch();
    return 0;
}