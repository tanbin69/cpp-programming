#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c = -a+b;
        cout << abs(c)<<endl;
    }
    return 0;
}