#include <complex>
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    float a,b,c;
    double d, s1, s2, realpart, imaginarypart;


    cout<<"Enter Your Value a,b,c"<< endl;
    cin >> a >> b >>  c;
    d=b*b-4*a*c;


    if (d==0) {
        s1=(-b+sqrt(d))/(2*a);
        cout<<"You have one solution and that is : " << s1 ;
    }
    else if (d>0){

        s1=(-b+sqrt(d))/(2*a);
        s2=(-b-sqrt(d))/(2*a);
        cout<<"You have two solution and that is : " << s1 << "and" << s2;

    }
    else {
        realpart=-b/(2*a);
        imaginarypart=sqrt(abs(d)/(2*a));

        cout<<"Your Solution is"<< realpart << "+" << imaginarypart << 'i'<<endl;
        cout<<"Your Solution is"<< realpart << "-" << imaginarypart << 'i';
    }

    return 0;


}
