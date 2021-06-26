#include <iostream>

using namespace std;

class coor {
public:
    int x;
    int y;
};

int main()
{
    string target;
    cin >> target;
    string element[25];
    int cnt = 0;

    while (cin >> element[cnt++]) {}
    int len = element[0].length();
    if (target.length() > 10) 
    {
        cout << "Target Overflow" << endl;
        return 0;
    }
    else if (len*cnt > 400) 
    {
        cout << "Array Overflow" << endl;
    }
    else 
    {
        coor check[8] = {{0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}}; //(y, x)
        for (int i = 0; i < cnt; i++)
         {
            for (int j = 0; j < len; j++) 
            {
                if (element[i][j] == target[0]) 
                {
                    for (int k = 0; k < 8; k++) 
                    {
                        coor temp = {i, j};
                        bool exist = true;
                        for (unsigned int l = 1; l < target.length(); l++) 
                        {
                            if (exist == false)
                                break;
                            if (temp.x + check[k].x < 0 || temp.x + check[k].x >= len || temp.y + check[k].y < 0 || temp.y + check[k].y >= cnt) 
                            {
                                exist = false;
                                break;
                            }
                            if (element[temp.x + check[k].x][temp.y + check[k].y] == target[l]) 
                            {
                                temp = {temp.x + check[k].x, temp.y + check[k].y};
                            }
                            else
                                exist = false;
                        }
                        if (exist == true)
                            cout << i << ", " << j << " To " << temp.x << ", " << temp.y << endl;
                    }
                }
            }
        }
    }
    return 0;
}
