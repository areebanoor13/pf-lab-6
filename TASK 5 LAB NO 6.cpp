#include<iostream>
using namespace std;
int main()
{int n;
int N;
int sum=0;
cout<<"Enter Natural number";
cin>>N;
for(n=1;n<=N;n++)
sum += n * n;
cout << "The sum of squares of the first " << N << " natural numbers is: " << sum << endl;
return 0;}
