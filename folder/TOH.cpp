#include<iostream>
using namespace std;
void TOH(int n, char s, char h, char d)
{
    if(n==0)
     return;
     if(n==1){
     cout<<s<<" to "<<d<<endl;
      return;
     }
     TOH(n-1,'s','d','h');
     cout<<s<<" to "<<d<<endl;
     TOH(n-1,'h','s','d');
}
int main()
{  
    int n;
    cin>>n;
    TOH(n,'s','h','d');
    return 0;
}
