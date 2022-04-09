#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int exponential(int n){
   if(n==0)
    return 1;
    return 2*exponential(pow(2,n-1));
    
}

int main()
{ 
    int n;
    cin>>n;
    cout<<exponential(n);
    return 0;
}