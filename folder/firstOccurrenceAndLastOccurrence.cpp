#include<iostream>
using namespace std;
void findoccurrence(string st, int index, char ch)
{
    static int first=-1;
    static int last=-1;
    if(st.length()==index)
    {
        cout<<first<<endl;
        cout<<last<<endl;
        return ;
    }
    char ch1=st[index];
    if(ch1==ch)
    {
        if(first==-1){
          first=index;
          last=index;
        }
          else
          last=index;

    }
    findoccurrence(st,index+1,ch);
}
int main()
{  
    string st="aaaaa";
    cin>>st;
    findoccurrence(st,0,'a');
    return 0;
}