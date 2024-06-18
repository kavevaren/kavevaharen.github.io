#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter an integer";
    cin>>x;

    if (x%2==0) {
        cout<<"Your number is even";
    }
    else
        cout<<"Your number is odd";
    return 0;
}