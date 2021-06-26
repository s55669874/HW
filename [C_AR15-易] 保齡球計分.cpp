#include <iostream>
#include <sstream>
#include <memory.h>
using namespace std;

int change(char score) {
    if (score == '/')
        return 10;
    else if (score == 'X')
        return 10;
    else if (score == '-')
        return 10;
    else
        return score-'0';
}

int main()
{
    string str;
    getline(cin, str);
    istringstream delim(str);
    char score[21];
    memset(score, '0', sizeof(score));
    int cnt = 0;
    while (getline(delim, str, ',')) 
    {
        score[cnt++] = str[0];
    }
    
    for (int i = 0; i < cnt; i++)
        if (score[i] == '-' && (score[i-1] != 'X' || i == 0))
            score[i] = '0';
    int total = 0;
    for (int i = 0; i < 10; i++) 
    {
        if(score[i*2+1] == '/')
            total += 10 + change(score[i*2+2]);
        else if(score[i*2+1] == '-') 
        {
            if(score[i*2+3] == '/')
                total += 10 + change(score[i*2+3]);
            else if (score[i*2+3] == '-') 
            {
                total += 10 + change(score[i*2+3]) + change(score[i*2+4]);
            }
            else
                total += 10 + change(score[i*2+2]) + change(score[i*2+3]);
        }
        else if (score[i*2] == 'X')
         {
            if(score[i*2+2] == '/')
                total += 10 + change(score[i*2+2]);
            else
                total += 10 + change(score[i*2+1]) + change(score[i*2+2]);
        }
        else
            total += change(score[i*2]) + change(score[i*2+1]);
        if (i != 0)
            cout << ",";
        cout << total;
    }
    cout << endl;
    return 0;
}