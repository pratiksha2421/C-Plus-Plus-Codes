/* WAP to create a class book which contain title, author and price take input from user and then create a object and print them */

#include<iostream>
using namespace std;
class book 
{
    public:
string title,author;
int price;
void getdata()
{
    cout<<"Enter the title of the book :";
    cin>>title;
    cout<<"Enter the author of the book :";
    cin>>author;
    cout<<"Enter the price of the book :";
    cin>>price;
}
void display()
{
    cout<<"Title Of The Book :"<<title<<endl;
    cout<<"Author Of The Book :"<<author<<endl;
    cout<<"Price Of The Book :"<<price<<endl;
}
};
int main()
{
    book a;
    a.getdata();
    a.display();
    return(0);
}
