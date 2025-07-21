// WAP to enter 10 elements into an array and then compare the key number with elements //

#include<iostream>
using namespace std;
int main()
{
    int array[10],key,i,j;
    cout<<"Enter the elements:";
    for( i=0; i<10; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the key number :";
    cin>>key;
    for(  j=0; j<10; j++)
    {
    if (key==array[j])
    {
    cout<<"Number is found";
     break;    
}
}
    if(j==10)
    {
        cout<<"Number not found";
}
    return(0);
}
