/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void recursion(int n){
   if(n==0) return ;
    cout<<n<<" ";
    recursion(n-1);
    cout<<"\n";
     cout<<n<<" "; 
}
int main(){
      recursion(5);
    return 0;
} */

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s(int n, int sum, int i){
   if(i==n) {
       sum+=i;
       cout<<sum<<endl;
   return 0 ;
   }
       sum+=i;
     
   
    cout<<sum<<"\n";
    return n+s(n,sum,i+1);
}
int main(){
      cout<<s(5,0,1);
    return 0;
} */

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
   if(n==1 || n==0) {
        return n;
   }
      int n1=factorial(n-1);
      int res=n*n1;
      return res;
}
int main(){
      cout<<factorial(5);
    return 0;
} */

/*
#include<bits/stdc++.h>
using namespace std;
void fibonacci(int a,int b,int n){

    if(n==0)  return ;
    int c=a+b;
    cout<<c<<endl;
    fibonacci(b,c,n-1);
}
int main(){
    int n;
    cin>>n;
    int a=0, b=1;
      cout<<a<<"\n"<<b<<endl;
     fibonacci(0,1,n-2);
    return 0;

}
*/

#include<bits/stdc++.h>
using namespace std;
int exponential(int x,int n)
{  
    if(x==0)  return x;
    if(n==0)  return 1;
      return x*exponential(x,n-1);
}

int main()
{  
     int x,n;
     cin>>x>>n;
       cout<<exponential(x,n);
    return 0;
}
