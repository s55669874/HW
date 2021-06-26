#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for(int round = 0 ; round < num ; round ++)
    {
        int x, y;
        cin >> x >> y;
        int ini_map[120][120];
        for(int i = 0 ; i < x ; i ++)
            for(int j = 0 ; j < y ; j++)
                cin >>ini_map[i][j];
        if(round > 0)  
            cout << endl;

        for(int i = 0 ; i < x ; i ++)
        {
            for(int j = 0 ; j < y ; j++)
            {
                if(ini_map[i][j] == 0)
                    cout <<"_ ";
                if(ini_map[i][j] == 1)
                    if(ini_map[i-1][j] == 0 ||ini_map[i+1][j] == 0 ||ini_map[i][j-1] == 0 ||ini_map[i][j+1] == 0)
                        cout << 0 << " ";
                else
                    cout <<"_ ";
            }
            if(round != num )  
                cout << endl;
        }
    }
}