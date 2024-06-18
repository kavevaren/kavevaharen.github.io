#include <iostream>
#include <cmath>

using namespace std;
int main() {
    string operation;
    double num1, num2;
    char continueCalc='y';

    cout<<"Enter your First Number : ";
    cin>>num1;
    while (continueCalc=='y'||continueCalc=='Y') {
    cout<<"Enter Your Operation : ";
    cin>>operation;
    cout<<"Enter you second Number : ";
    cin>>num2;




    if (operation=="*") {
        num1=num1*num2;
     cout<< "THIS IS THE ANSWER =="<<num1<< endl;


    }
    else if (operation=="+") {
        num1=num1+num2;
        cout<< "THIS IS THE ANSWER =="<<num1<< endl;


    }
    else if (operation=="-") {
        num1=num1-num2;
        cout<< "THIS IS THE ANSWER =="<<num1<< endl;


    }
    else if (operation=="/") {
        num1=num1/num2;
        cout<< "THIS IS THE ANSWER =="<<num1 << endl;

    }
        cout<<"Do You want to continue (y/n)"<<endl;
        cin>>continueCalc;
    }
        cout<<"Your result ==== .... " << num1;
    return 0;
}