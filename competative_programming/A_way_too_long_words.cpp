#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    // string str;
    // for(int cas = 0;cas<test;cas++)
    // {
    //     string str;
    //     cin >> str;
    // }
    for(int cas = 0;cas<test;cas++)
    {
        
        string str;
        cin >> str;
        if(str.length()>10)
        {
            cout << str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }
        else
        {
            cout << str<< endl;
        }
    }

      return 0;
}