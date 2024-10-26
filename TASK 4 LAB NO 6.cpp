#include <iostream>
using namespace std;
int main() 
{
int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Print Hello\n";
        cout << "2. Print World\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Print Hello" << endl;
        } else if (choice == 2) {
            cout << "Print World" << endl;
        } else if (choice == 3) {
            cout << "Exit..." << endl;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
		} 
		while (choice != 3);

    cout << "LEAVE" << endl;

    return 0;
}
