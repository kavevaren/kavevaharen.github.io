#include <iostream>
#include <ctime>
using namespace std;

char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main() {
  char player;
  char computer;
  player = getPlayerChoice();
  cout << "Your choice is : ";
  showChoice(player);

  computer = getComputerChoice();
  cout << "The Computer Choice is : ";
  showChoice(computer);

  chooseWinner(player, computer);
  return 0;
}

char getPlayerChoice(){
  char player;
  cout << "Rock-Paper-Scissors Game ! " << endl;
  cout << "****************************"<< endl;
  do {
    cout << "Please choose one for this following options" << endl;
    cout << "**********************************************"<< endl;
    cout << "1) r for Rock" << endl;
    cout << "2) p for Paper" << endl;
    cout << "3) s for Scissors" << endl;
    cin >> player;
  }while (player != 'r' && player != 'p' && player != 's');
  return player;
  
  
}
char getComputerChoice(){
  int num = rand() % 4;
  switch (num){
    case 1 : return 'r';
    break;
    case 2 : return 'p';
    break;
    case 3 : return 's';
    break;
    
  }
  return 0;
}    
void showChoice(char choice){
  switch (choice){

    case 'r' : cout<<"Rock \n";
                break;
    case 's' : cout<<"Scissors \n";
                break;
    case 'p' : cout<<"Paper \n";
                break;
    
  }
}
void chooseWinner(char player, char computer){
  switch(player){
    case 'r' :
    if (computer == 'r') {
      cout << "The game is tie \n";
    }

    else if (computer == 'p') {
      cout << "You lose \n";
    }

    else {
      cout << "You win \n";
      
    }
    break;
    

    case 'p' :
    if (computer == 'r') {
      cout << "You Win \n";
    }

    else if (computer == 'p') {
      cout << "The game is tie \n";
    }

    else {
      cout << "You lose \n";

    }
    break;

    case 's' :
    if (computer == 's') {
      cout << "The game is tie \n";
    }

    else if (computer == 'p') {
      cout << "You win \n";
    }

    else {
      cout << "You lose \n";

    }
    break;
  }
}