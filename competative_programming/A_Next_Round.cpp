#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[102],count = 0;
    cin >>n>>k;
    for(int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
     for(int i = 0;i<n;i++)
        {
            if(a[i]>=a[k-1]&&a[i]>0)
            {
                count++;
            }
        }
    cout << count<<endl;
    return 0;
}