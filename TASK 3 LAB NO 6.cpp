#include<iostream>
using namespace std;
int main()
{
int secno=20;
int guess;
cout<<"Enter your guess:";

while (true)
{
cin >> guess;
if (guess == secno)
{
cout << "CONGRATS! You've guessed correct." << endl;
break;
}

else
{
cout << "TRY AGAIN"<<endl;"Enter your guess: ";

}
}
return 0;
}

