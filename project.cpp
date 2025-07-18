#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int number = rand()%100+1;
int guess;
int attempts=0;
cout<<"Welcome to Guessing the Number Game \n";
cout<<"I Have Chosen a Number Between 1 to 100\n";
cout<<"Try to Guess It \n";
do{
    cout<<"Enter Your Guess....\n";
    cin>>guess;
    attempts++;
if ( guess<number)
{
cout<<"Too Low....";
}
else if (guess> number)
{
cout<<"Too high....";
}
else 
{
cout<<"Congratulations.... You guess the correct numberin" <<attempts<<"attempts  \n";
}
} while(guess!=number);
return(0);
}



