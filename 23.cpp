// WAP to enter 5 elements in an array and find its sum //

#include<iostream>
using namespace std;
int main()
{
    int array[5],sum=0;
    cout<<"Enter the elements :";
    for(int i=0; i<5; i++)
    {
        cin>>array[i];
        sum= sum+array[i];
    }
    cout<<"Sum:"<<sum;
    return(0);
}
