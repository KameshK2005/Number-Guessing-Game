#include<iostream>
using namespace std;
int main(){
    int number,ub,lb,guess;
    ub=10;
    lb=1;
    number=(rand() % (ub - lb + 1)) + lb;
    cout<<"Enter a number between 1 to 10 "<<endl;
    cin>>guess;
    if(number==guess){
        cout<<"You Guessed it right "<<endl;
    }
    else{
        if(guess>number)
        cout<<"Too high Please try again"<<endl;
        else
        cout<<"Too Low Please try again"<<endl;
    }
    return 0;
}