#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age :";
    cin >> age;

    if (age>=18) {
        cout<<"You are allowed to access this site";
    }
    else if (age<18&&age>=0) {
        cout<<"You are not allowed to access this site";
    }
    else {
        cout<<"You are not born yet";
    }
    return 0;
}
