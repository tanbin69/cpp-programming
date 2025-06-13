#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,X=0;
    cin>>n;
    string str;
    while(n--)
    {
        cin >> str;
        if(str == "++X"||str == "X++")
        {
             X++;
        }
        else
        {
            X--;
        }
    }
    cout << X;
    return 0;
}