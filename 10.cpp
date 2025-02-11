/* WAP to create a class abc which contain a as a private data and create a another class xyz which contain x as a private data and find which class is greater*/
#include<iostream>
using namespace std;
class xyz;
class abc
{
    int a;
    public:
    void getdata()
    {
        cout<<"enter the value of a:";
        cin>>a;
    }
    friend void max(abc,xyz);
};
class xyz
{
    int x;
    public:
    void getdata()
    {
        cout<<"enter the value of x:";
        cin>>x;
    }
    friend void max(abc, xyz);
};
void max(abc ob, xyz ob1)
{
    if(ob.a>ob1.x)
    {
cout<<"abc is greater";
    }
    else{
        cout<<"xyz is greater";
    }
}
int main()
{
        abc ab;
        xyz xy;
        ab.getdata();
        xy.getdata();
        max(ab,xy);
        return(1);
}

