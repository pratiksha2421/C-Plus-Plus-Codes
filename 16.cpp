/* WAP to take input from user name, age, percentage and display the output prroperly */

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    int age;
    float per;
    cout<<"Enter the student's Name : "<<endl;
    cin>>name;
    cout<<"Enter the student's Age : "<<endl;
    cin>>age;
    cout<<"Enter the student's Percentage : "<<endl;
    cin>>per;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Percentage : "<<per<<endl;
    return(0);
}