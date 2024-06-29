#include<iostream>
#include<ctime>

using namespace std;
int main(){
    
    int number=(rand()%100)+1;
    int guess = 0;
    do{
        cout<<"Guess the number between 0-100:"<<endl;
        cin>>guess;

        if(guess>number){
            cout<<"Guess Lower Number!!"<<endl;
        }
        else if(guess < number){
            cout<<"Guess Higher Number!!"<<endl;
        }
        else{
            cout<<"You Won!!"<<endl;
        }
    }while(guess != number);
    return 0;
}