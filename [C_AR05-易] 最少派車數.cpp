#include <iostream>
using namespace std;

int main()
{
    int mission;
    cin >> mission;
    int car_time[mission][2];
    for (int i = 0; i < mission; i++)
        cin >> car_time[i][0] >> car_time[i][1];
    int time_map[25] = {0};
    for(int i = 0; i < mission; i++)
    {
        for(int j = car_time[i][0]; j < car_time[i][1]; j++)
        {
            time_map[j]++;
        }
    }
    int max = 0;
    for(int i = 0; i < 25; i++)
    {
        if(time_map[i] > max)
            max = time_map[i];
    }
    cout << max << endl;
}