#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    long seconds = time(0);
    srand(seconds);
    int number= rand() ;
    cout << number;
    return 0;


}
