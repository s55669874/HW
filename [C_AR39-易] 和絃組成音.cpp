#include <iostream>

using namespace std;

int main()
{
    string sound[24] = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B","C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
    int testcase;
    cin >> testcase;
    while (testcase--)
     {
        string str;
        cin >> str;
        for (int i = 0; i < 12; i++) 
        {
            if (str[0] == sound[i][0]) 
            {
                if (str.size() == 1)
                    cout << sound[i] << " " << sound[i+4] << " " << sound[i+7] << endl;
                else
                    cout << sound[i] << " " << sound[i+3] << " " << sound[i+7] << endl;
                break;
            }
        }
    }
    return 0;
}