#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
         int a,b,c;
        cin >> a>>b>>c;
        if(a+b==c||a+c==b||b+a==c||b+c==a||c+b==a||c+a==b)
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    }
    return 0;
}