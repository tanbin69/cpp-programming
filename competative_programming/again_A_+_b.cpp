#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         int result =0;
        while(n!=0)
        {
             result = result + n%10;
             n= n/10;
        }
        cout << result<<endl;
    }
    return 0;
}