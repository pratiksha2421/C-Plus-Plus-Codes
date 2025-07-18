#include<iostream>
using namespace std;
int main()
{
    int num1,num2,result;
    char op;
    cout<<"Enter first number:\n";
    cin>>num1;
    cout<<"Enter operator:\n";
    cin>>op;
    cout<<"Enter second number:\n";
    cin>>num2;
if(op == '+')
{
    num1+num2;
    cout<<"num1+num2";
    result = num1+num2;
    cout<<"Result:"<<result;
}
else if(op == '-')
{
    num1-num2;
    cout<<"num1-num2";
    result = num1-num2;
    cout<<"Result:"<<result;
}
else if (op == '*')
{
    num1*num2;
    cout<<"num1*num2";
    result = num1*num2;
    cout<<"Result:"<<result;
}
else if (op == '/')
{
    num1/num2;
    cout<<"num1/num2";
    result = num1/num2;
    cout<<"Result:"<<result;
}
return(0);
}
