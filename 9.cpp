// Friend Function//
#include<iostream>
using namespace std;
class demofriend 
{
    int a;
    int b;
    public:
    void getdata()
    {
        cout<<"enter the value of a&b";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"a:"<<a<<"b:"<<b;
    }
    friend void update(demofriend);
};
demofriend update(demofriend df)
{
df.a=df.a+5;
df.b=df.b+10;
return(1);
}
int main()
{
    demofriend ob;
    ob.getdata();
    ob.display();
    ob:update(ob);
    ob.display();
    return(1);
}