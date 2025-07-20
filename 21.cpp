/* WAP to create a class car which contain brand and price , and print them in a display() function */

#include<iostream>
using namespace std;
class car
{
    public:
    string brand;
    int price;
    void getdata()
    {
        cout<<"Enter the Brand of the Car :";
        cin>>brand;
        cout<<"Enter the Price of the car :";
        cin>>price;
    }
    void display()
    {
        cout<<"Brand Of The Car :"<<brand<<endl;
        cout<<"Price Of The Car :"<<price<<endl;   
     }
};
int main()
{
    car p;
    p.getdata();
    p.display();
    return(0);
}
