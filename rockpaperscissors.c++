#include<iostream>
#include<time.h>
using namespace std;
   const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';
 
using namespace std;
 
char getCompOpt() {
    srand(time(0));
    int num = rand() % 3 + 1;
 
    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}
 
char getUOpt() {
    char c;
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> c;
    
    while (c!='r' && c!='p' && c!='s' )
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> c;
    }
 
    return c;
}
 
void SelectedOption(char option) {
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
}
 
void result(char uChoice, char cChoice) {
    if (uChoice == ROCK && cChoice == PAPER) {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie. Play again win the Game." << endl;
    }
}
 
int main() {
 char userchoice, compchoice;
  userchoice=getUOpt() ;
 cout<<"your choice is: "<<endl;

 SelectedOption(userchoice);
 
  cout<<"Computer choice is: "<<endl;
  compchoice=getCompOpt();
  SelectedOption(compchoice);

 result(userchoice,compchoice);
    return 0;
}