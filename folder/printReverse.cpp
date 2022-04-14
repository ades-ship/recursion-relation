#include<iostream>
using namespace std;
void prtReverse(string st, int index)
{  
    if(index==0) {
        cout<<st[index];
        return ;
    }
  cout<<st[index];
   prtReverse(st,index-1);
}
int main()
{  
    string st;
    cin>>st;
    prtReverse(st,st.length()-1);
    return 0;
}