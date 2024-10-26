#include<iostream>
using namespace std;
int main() {
    const int correctpass = 1234; 
    int guess;                 
    int attempts = 0;              
    const int maxAttempts = 3;     

    do {
        cout << "Guess password(Hint-1 to 20): ";
        cin >> guess;

        if (correctpass == guess) {
            cout << "CORRECT PASSWORD!" << endl;
            break; 
        } else {
            attempts++; 
            if(attempts<maxAttempts)
            cout << "TRY AGAIN. 2 Attempts Left"<< endl;
        }

    } while (attempts < maxAttempts); 

    if (attempts == maxAttempts&&guess!=correctpass) {
        cout << "YOU HAVE TRIED MANY TIMES." << endl;
    }

    return 0;
}
