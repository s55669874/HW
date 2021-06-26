#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class element 
{
public:
    int num;
    int cnt;
};

int main()
{

    string str;
    while (getline(cin,str)) 
    {
        int num;
        int cnt = 0;
        int _max = 0;
        int _max_num;
        string word;
        vector<element> vec;
        istringstream delim(str);
        while (getline(delim, word, ' ')) 
        {
            num = stoi(word);
            cnt++;
            bool same = false;
            for (unsigned int i = 0; i < vec.size(); i++)
             {
                if (vec[i].num == num)
                 {
                    vec[i].cnt++;
                    same = true;
                    if (vec[i].cnt > _max) 
                    {
                        _max_num = vec[i].num;
                        _max = vec[i].cnt;
                    }
                    break;
                }
            }
            if (same == false) 
            {
                element temp;
                temp.num = num;
                temp.cnt = 1;
                if (_max < 1) 
                {
                    _max_num = num;
                    _max = 1;
                }
                vec.push_back(temp);
            }
        }
        if (_max > cnt/2)
            cout << _max_num << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
