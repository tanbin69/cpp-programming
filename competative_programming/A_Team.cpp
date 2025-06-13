#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int p1,p2,p3;
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        cin >> p1>>p2>>p3;
        if(p1+p2+p3>=2)
        {
            count++;
        }
    }
    cout<< count;
    return 0;
}