#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin >> str1>>str2;
    int s= str1.length();
    for(int i = 0;i<s;i++)
    {
        str1[i]= tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    if(str1==str2)
    {
        cout<<"0";
    }
    else
    {
        for(int i = 0;i<s;i++)
        {
            if(str1[i]<str2[i])
            {
                cout <<"-1";
                break;
            }
            if(str1[i]>str2[i])
            {
                cout<<"1";
                break;
            }



        }
    }
    return 0;
    
}