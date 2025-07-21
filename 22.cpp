// WAP to create a class bank account in which private members : accountHolderName, balance and public functions: setAccountDetails() ,displayAccount() //

#include<iostream>
using namespace std;
class bankaccount
{
    private:
    string accountholdername;
    float balance;
    public:
    void setAccountDetails()
    {
        cout<<"Enter Bank Account Holder's Name:";
        cin>>accountholdername;
        cout<<"Enter Balance of the Bank:";
        cin>>balance;
    }
    void displayaccount()
    {
        cout<<"Bank Account Holder's Name:"<<accountholdername<<endl;
        cout<<"Balance Of The Bank:"<<balance<<endl;
    }
};
int main()
{
    bankaccount b;
    b.setAccountDetails();
    b.displayaccount();
    return(0);
}

