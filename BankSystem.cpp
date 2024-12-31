#include <iomanip>
#include <iostream>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
  int choice = 0;
  double balance = 0;

  do {
    cout << "*********************" << endl;
    cout << "Welcome to your bank " << endl;
    cout << "*********************" << endl;
    cout << "Enter your request : " << endl;
    cout << "1. Show balance" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Exit" << endl;

    cin >> choice;
    cin.clear();
    fflush(stdin);

    switch (choice) {
    case 1: {
      showBalance(balance);
      break;
    }
    case 2: {
      balance = balance + deposit();

      break;
    }
    case 3: {
      balance = balance - withdraw(balance);
      break;
    }

    case 4: {
      cout << "Thank you and have a nice day";
      break;
    }
    default: {
      cout << "Invalid choice" << endl << endl;
      break;
    }
    }
  } while (choice != 4);
  return 0;
}

void showBalance(double balance) {
  cout << "Your balance in your bank account is " << setprecision(2) << fixed
       << balance << " $" << endl
       << endl;
}
double deposit() {
  double amount = 0;
  cout << "Enter the amount of money you want to deposit : ";
  cin >> amount;
  if (amount > 0) {
    return amount;
  } else {
    cout << "Invalid amount of money" << endl;
    return 0;
  }
}
double withdraw(double balance) {
  double amount = 0;
  cout << "Enter the amount of money you want to withdraw : ";
  cin >> amount;
  if (amount > 0 && amount <= balance) {
    return amount;
  } else {
    cout << "Invalid amount of money" << endl;
    return 0;
  }
}