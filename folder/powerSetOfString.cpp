#include<iostream>
#include<vector>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;
void subset(vector<char> input , vector<char> output, int index)
{    
       
     if(index>=input.size())
     {  
         for(auto i: output)
         {
             cout<<" "<<i;
         }
          cout<<endl;
         return ;
     }
    // nahi lena h
     subset(input,output,index+1);
     output.push_back(input[index]);

     //lena h
     subset(input,output,index+1);

}
int main()
{
     char value;
     int n;
     cin>>n;
    vector<char> vrr(n),output;
    for(int i=0 ; i<n ; i++)
    {
        cin>>value;
        vrr.push_back(value);
    }
    cout<<"power set of a set is :"<<endl;
    subset(vrr,output,0);
    return 0;
}