#include <iostream>
#include <memory.h>
#include <iomanip>
using namespace std;

int main()
{
    int _size, direction;
    char ch;
    cin >> _size >> ch >> direction;
    int matrix[_size][_size];
    memset(matrix, 0, sizeof(matrix));
    switch (direction) 
    {
    case 1:
        for (int i = 0, j = 0, dir_i = 0, dir_j = 0, dir = 0, k = 1; k <= _size*_size; k++, i+= dir_i, j +=dir_j) 
        {
            matrix[i][j] = k;
            if (dir == 0) 
            {
                dir_i = 0;
                dir_j = 1;
                dir = 1;
            }
            else if (((j+1 >= _size)||(matrix[i][j+1] != 0)) && dir == 1)
            {
                dir_i = 1;
                dir_j = 0;
                dir = 2;
            }
            else if (((i+1 >= _size)||(matrix[i+1][j] != 0)) && dir == 2) 
            {
                dir_i = 0;
                dir_j = -1;
                dir = 3;
            }
            else if (((j-1 < 0)||(matrix[i][j-1] != 0)) && dir == 3) 
            {
                dir_i = -1;
                dir_j = 0;
                dir = 4;
            }
            else if (((i-1 < 0)||(matrix[i-1][j] != 0)) && dir == 4) 
            {
                dir_i = 0;
                dir_j = 1;
                dir = 1;
            }
        }
        break;
    case 2:
        for (int i = 0, j = 0, dir_i = 0, dir_j = 0, dir = 0, k = 1; k <= _size*_size; k++, i+= dir_i, j +=dir_j) 
        {
            matrix[i][j] = k;
            if (dir == 0) 
            {
                dir_i = 1;
                dir_j = 0;
                dir = 1;
            }
            else if (((i+1 >= _size)||(matrix[i+1][j] != 0)) && dir == 1) 
            {
                dir_i = 0;
                dir_j = 1;
                dir = 2;
            }
            else if (((j+1 >= _size)||(matrix[i][j+1] != 0)) && dir == 2) 
            {
                dir_i = -1;
                dir_j = 0;
                dir = 3;
            }
            else if (((i-1 < 0)||(matrix[i-1][j] != 0)) && dir == 3)
            {
                dir_i = 0;
                dir_j = -1;
                dir = 4;
            }
            else if (((j-1 < 0)||(matrix[i][j-1] != 0)) && dir == 4) 
            {
                dir_i = 1;
                dir_j = 0;
                dir = 1;
            }
        }
        break;
    default:
        break;
    }
    for (int i = 0; i < _size; i++) 
    {
        for (int j = 0; j < _size; j++) 
        {
            if (j != 0)
                cout << ",";
            cout << setw(3) << setfill('0') << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}