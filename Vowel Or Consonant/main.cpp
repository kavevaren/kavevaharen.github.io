#include <iostream>

using namespace std;
int main() {
    char c, lower, higher;
    cout << "Enter your character ";
    cin >> c;

    lower = (c=='a' || c=='i'|| c=='u'|| c=='e'|| c=='o');
    higher = (c=='A' || c=='I'|| c=='U'|| c=='E'|| c=='O');

    if (lower || higher) {
        cout<<"Your character is Vowel" << endl;
    }
    else {
        cout<<"Your character is Consonant"<<endl;
    }
    cout<<"This is your character ----> "<< c;
    return 0;
}



