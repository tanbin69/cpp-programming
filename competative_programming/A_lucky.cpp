#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    
    while(n--)
    {
        
        string s;
        cin >> s;
        int s1 = 0;
        int  s2 = 0;
        for(int i = 0;i <3;i++)
        {
            s1 += s[i]-'0';
        }
         for(int i = 3;i <6;i++)
        {
            s2 += s[i]-'0';
        }
        if(s1 == s2)
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