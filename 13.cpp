/* WAP to to take a number from user between 1 to 7 and print the weekday using switch case */

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number between 1 to 7:";
    cin>>num;
    switch(num)
    {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
    }
    return(0);
}