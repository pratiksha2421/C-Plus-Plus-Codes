/* WAP to take user name , marks of five subjects and calculate percentage and print them */

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string name;
int m1,m2,m3,m4,m5;
float per;
cout<<"Enter Student's Name :";
cin>>name;
cout<<"Enter Student's Marks of five subjects :";
cin>>m1>>m2>>m3>>m4>>m5;
int total = m1+m2+m3+m4+m5;
per=(total/500.0)*100;
cout<<"Student's Name:"<<name<<endl;
cout<<"Student's marks of five subject :"<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5<<endl;
cout<<"Student's Percentage :"<<per;
return(0);
}
