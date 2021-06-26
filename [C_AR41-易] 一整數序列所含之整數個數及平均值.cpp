#include <iostream>
#include <sstream>
#include <stdio.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str)) 
    {
        int total = 0;
        int _size = 0;
        string token;
        istringstream delim(str);
        while (getline(delim, token, ' ')) 
        {
            int num;
            num = stoi(token);
            total += num;
            _size++;
        }
        printf("Size: %d\nAverage: %.3f\n", _size, (float)((float)total/(float)_size));
    }
    return 0;
}
