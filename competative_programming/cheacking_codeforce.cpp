#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "codeforces";
    int t;
    cin >>t;
    while(t--)
    {
        char c;
        cin >>c;
        bool found = false;
        for(int i = 0;i<str.length();i++)
        {
            if(str[i] == c)
            {
                found = true;
                break;
            }
        }
        if(found)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}