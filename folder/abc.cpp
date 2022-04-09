#include<iostream>
using namespace std;
void fun(int n, string str[])
{
     if(n==0)
       return ;
       fun(n/2,str);
       cout<<str[n%10]<<"";

}
int main()
{ 
    //  print 234 like in string two three four;
    string str[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    fun(234,str);
    return 0;
}