#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i = 0;i<3;i++)
        {
           cin >> a[i];
        }
        sort(a,a+3);
        if(a[0] !=a[1])
        {
            cout <<a[0]<<endl;
        }
        else
        {
            cout << a[2]<<endl;
        }
    }
    return 0;
}