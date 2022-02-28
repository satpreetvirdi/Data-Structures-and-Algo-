#include <iostream>
#include "bits/stdc++.h"
using namespace std;

// Matrix Search in 2d Matrix

int main()
{
    int row, col;
    cin >> row >> col;
    int target ;
    cout<< "Enter the target ";
    cin >>target; 

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int r = 0 , c = col-1 ;
    bool found = false ; 

    while (r<row & c >=0){
        if(matrix[r][c] == target){
            found = true; 
        }
        if(matrix[r][c] > target ){
            c--;
        }else{
            r++;
        }

    }
    if(found)
        cout<<"Element found";
    else{
        cout<< "Element is not present";
    };

    return 0;
}