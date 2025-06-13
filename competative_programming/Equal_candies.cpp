#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n];
        for(int i =0;i<n;i++)
        {
            cin >>a[i];
        }
        sort(a,a+n);
        int result = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[i]>a[0])
            {
                result += a[i]-a[0];
            }
        }
        cout << result<<endl;
    }
    return 0;
}