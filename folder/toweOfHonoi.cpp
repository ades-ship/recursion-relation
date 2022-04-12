#include<iostream>
using namespace std;
void TOH(int n, char source, char destination, char helper,int &count)
{  
    count++;
    if(n==1)
    {
        cout<<source<<"to"<<destination<<endl;
        return ;

    }
    TOH(n-1,source,helper,destination,count);
        cout<<source<<"to"<<destination<<endl;
     TOH(n-1,helper,destination,source,count);
  return ;
}
int main(){
  int n,count=0;
     cin>>n;
   TOH(n,'s','d','h',count);
   cout<<"number of count"<<count;
    return 0;
}