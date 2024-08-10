#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void NumberGuessingName(){
    
    cout<<"* WELCOME TO THE GAME OF GUESSING NUMBER *"<<endl<<endl;
    
    cout<<"INSTRUCTIONS FOR THE GAME : "<<endl;
    
    cout<<"Dear Player, You have to guess the number between 1-100. "<< endl<<endl;
    
    
    srand(time(0));
    int numToGuess = (rand()%100) + 1;
    
    int attempts = 0;
    int guess = 0;
    
    
    
    while(guess != numToGuess){
        
        cout<<"Enter a number between 1-100 - "<<endl;
        cin>>guess;
        
        // if(guess > 100){
        //     cout<"GUESS THE NUMBER BETWEEN 1-100 ONLY "<<endl;
        // }
    
        attempts++;
        
        if(guess > numToGuess){
            cout<<"TOO HIGH !! TRY GUESSING LOWER NUMBER"<<endl;
        }
        
        else if (guess < numToGuess){
            cout<<"TOO LOW !! TRY GUESSING HIGHER NUMBER"<<endl;
        }
        
        else{
            cout<<" Congratulations !!! You won the game in "<<attempts<< " attempts . "<< endl;
        }
    }
}

int main() {
    NumberGuessingName();

    return 0;
}
