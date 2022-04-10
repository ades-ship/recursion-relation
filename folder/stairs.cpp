#include<bits/stdc++.h>
using namespace std;
int upstairs(int n)
{
    if(n==1 || n==0 )
     return 1;
     else if(n<0)
     return 0;
    return upstairs(n-1)+upstairs(n-2)+upstairs(n-3);
}

int main()
{
    int n;
    cin>>n;
    cout<<"possible number to reach destination stair "<<upstairs(n);
}