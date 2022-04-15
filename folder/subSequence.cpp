// all subsequence in a string.

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void subsequence(string st, int index , string newstr){
         
         if(index==st.length())
         {
             cout<<newstr<<endl;
            
             return ;

         }
       char currele=st[index];
     // to be added
       subsequence(st,index+1,newstr+currele);
       // not to be added
       subsequence(st,index+1,newstr);

}
int main()
{    
    string str;
    cin>>str;
    subsequence(str,0,"");
    return 0;
}  


// print only unique subsequence in a string.
/*
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void subsequence(string st, int index , string newstr,Hashset<string> set) {
         
         if(index==st.length())
         {   if(set.contain(newstr))
                return ;
           else {
               
             cout<<newstr<<endl;
               set.add(newstr);
             }
             return ;

         }
       char currele=st[index];
     // to be added
       subsequence(st,index+1,newstr+currele);
       // not to be added
       subsequence(st,index+1,newstr);

}
int main()
{    
    string str;
    cin>>str;
    HashSet<string>set = new HashSet<>();
    subsequence(str,0,"",0,set);
    return 0;
}
 */
