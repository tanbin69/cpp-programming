#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int countA = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] == 'A')
            {
                countA++;
            }
        }
        if(countA>2)
        {
            cout << 'A'<<endl;
        }
        else
        {
            cout<<'B'<<endl;
        }
    }
    return 0;
}