#include <iostream>
#include <pstl/utils.h>

// MORE EFFICIENT ALGORITHM
using namespace std;
int main () {
    float x1,x2,x3;

    cout<< "First Number : ";
    cin >> x1;
    cout<< "Second Number : ";
    cin >> x2;
    cout<< "Third Number : ";
    cin >> x3;

    if (x1 >= x2 && x1 >= x3) {
        cout << "The Largest Number is " << x1;
    }
    else if ((x2>=x1 && x2>=x3) ) {
        cout << "The Largest Number is " << x2;
    }
    else
        cout << "The Largest Number is " << x3;
    return 0;
}

/*
The less efficient Algorithm

int main () {
float x1,x2,x3;

cout<< "First Number : ";
cin >> x1;
cout<< "Second Number : ";
cin >> x2;
cout<< "Third Number : ";
cin >> x3;

if (x1 >= x2 && x1 >= x3) {
cout << "The Largest Number is " << x1;
}
if  (x2>=x1 && x2>=x3){
cout << "The largest number is " << x2;
}
if  (x3>=x1 && x3>=x2){
cout << "The largest number is " << x3;
}

return 0;
}
*/


