#include <iostream>
#include <math.h>
#include <memory.h>
using namespace std;

int main()
{
    bool isprime[100005];
    memset(isprime, true, sizeof(isprime));
    isprime[0] = false;
    isprime[1] = false;
    for (int i = 2; i < 100005; i++) 
    {
        if (isprime[i] == true) 
        {
            bool not_prime = false;
            for (int j = 2; j <= sqrt(i); j++) 
            {
                if (i % j == 0) 
                {
                    not_prime = true;
                    isprime[j] = false;
                    break;
                }
            }
            if (not_prime == false) 
            {
                for (int j = 2; i*j < 100005; j++)
                    isprime[i*j] = false;
            }
            else 
            {
                isprime[i] = false;
            }
        }
    }
    string str;
    cin >> str;
    int max_prime = 0;
    for (unsigned int i = 0; i < str.length(); i++) 
    {
        string num = "";
        for (unsigned int j = 0; i+j < str.length(); j++) 
        {
            num += str[i+j];
            cout << num << endl;
            int temp = stoi(num);
            if (temp >= 2 && temp <= 100000 && temp > max_prime && isprime[temp] == true) 
            {
                max_prime = temp;
            }
        }
    }
    if (max_prime != 0)
        cout << max_prime << endl;
    else 
    {
        cout << "No prime found" << endl;
    }
    return 0;
}