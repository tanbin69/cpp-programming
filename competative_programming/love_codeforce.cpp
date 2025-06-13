#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    string str = "codeforces";
    while(t--)
    {
        string s;
        cin>>s;
        int count = 0;
        for(int i = 0;i<str.length();i++)
        {
            if(str[i]!=s[i])
            {
                count++;
                
            }
        }
        cout << count<<endl;
    }
    return 0;
}