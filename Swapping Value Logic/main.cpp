#include <iostream>


using namespace std;
int main () {
    int a = 1,b = 2,temp;
    cout<<"Before Swapping"<< endl;
    cout<< "a = " << a << " and b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After Swapping"<<endl;
    cout<<"a is "<< a << " and b is "<< b;


    return 0;
}
