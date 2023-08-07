#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand((unsigned int) time (NULL));
int number= (rand() % 100)+1;
int guess=0;
do{
   cout << "Enter Guess (1-100): ";
   cin >> guess;
   if(number<guess)
   cout << "Guess Lower Number: " << endl;
   else if (number>guess)
   cout << "Guess Higher Number: " << endl;
   else
   cout << "YOU OWN";
}
while(guess!= number);
    return 0;
}