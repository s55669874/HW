#include <iostream>  
#include <sstream>  
#include <vector>  
#include <algorithm>  
using namespace std;  
  
int main()  
{  
    string str;  
    getline(cin, str);  
    vector<int> num;  
    string token;  
    stringstream delim(str);  
    while (getline(delim, token, ',')) 
    {  
        num.push_back(stoi(token));  
    }  
    sort(num.begin(), num.end());  
    long int _min = 0, _max = 0;  
    for (int i = 0, j = num.size()-1; i < num.size(); i++, j--) 
    {  
        if (i != 0) 
        {  
            _min *= 10;  
            _max *= 10;  
        }  
        _min += num[i];  
        _max += num[j];  
    }  
    cout << _max-_min << endl;  
    return 0;  
}  