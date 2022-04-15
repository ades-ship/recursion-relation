// move all x to end of string
#include<bits/stdc++.h>
using namespace std;
void moveAllx(string st, int index, string str,int count){
      int n=st.length();
      
      if(index==st.length()){
          for(int i=0; i<count; i++)
            str+='x';
            cout<<str;
           return ;
      }
      if(st[index]=='x')  count++;
      else
        str+=st[index];

          moveAllx(st,index+1,str,count);
}
int main()
{   
    string st="abxdxxd",str=" ";
    int count =0;
    moveAllx(st,0,str,0);
    //   for(auto it:st)
    //  cout<<it;
    return 0;
}