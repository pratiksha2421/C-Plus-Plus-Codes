/* WAP to take 1 number from user and check if it is even or odd using if else */

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The number is even";
    }
    else{
        cout<<"The number id odd";
    }
    return(0);
}