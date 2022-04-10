#include<iostream>
#include<vector>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;
void subset(vector<int> input , vector<int> output, int index)
{    
       
     if(index>=input.size())
     {
         for(auto i: output)
         {
             cout<<i<<" ";
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
     int n,value;
     cin>>n;
    vector<int> vrr(n),output;
    for(int i=0 ; i<n ; i++)
    {
        cin>>value;
        vrr.push_back(value);
    }
    cout<<"power set of a set is :";
    subset(vrr,output,0);
    return 0;
}