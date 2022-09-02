#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin>>n;
    while(n--)
    {
        int a = 0,b = 0,c = 0;
        cin>>a>>b>>c;
        if(a&&b || b&&c || c&&a)
        count++;
    }
    cout<<count;
    return 0;
}
