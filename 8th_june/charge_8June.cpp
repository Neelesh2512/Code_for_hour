#include<bits/stdc++.h>
using namespace std;

int main(){

    string v;
    cin>>v;
    string s;
    cin>>s;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='P')
        {
            sum += v[i]-'0';
        }
        else if(s[i]=='N')
        {
            sum -= (v[i])-'0';
        }
    }

    cout<<abs(sum)*100;
    return 0;
}