/* WAP to take user name , marks of five subjects and calculate percentage and print them */

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string name;
int marks[5],per=0;
float per;
cout<<"Enter Student's Name :";
cin>>name;
cout<<"Enter Student's Marks of five subjects :";
for(int i=1; i<=5; i++)
{
cin>>marks[i];
}
cout<<"Enter Student's Percentage :";
cin>>per; 
per= per%marks[i];
cout<<""