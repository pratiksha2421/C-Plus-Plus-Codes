/* WAP to take 2 integers from user and print their sum and check if both are equal or not */

#include<iostream>
using namespace std;
int main()
{
int a,b;
int sum=0;
cout<<"enter the value of a:\n";
cin>>a;
cout<<"enter the value of b:\n";
cin>>b;
sum=a+b;
cout<<"sum:"<<sum;
if(a==b)
{
    cout<<"\nboth are equal";
}
else 
{
    cout<<"both are not equal";
}
return(0);
}

