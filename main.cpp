#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	srand(time(0));// seed the random number generator with the current time
	
	int secretNumber = rand()% 100 + 1;  // number between 1 and 100
	int guess;
	int attempts = 0;
	
	cout << "Welcome to the Numer Guessing Game!" << endl;
	
	do {
		cout <<"Enter your guess (between 1 and 100): ";
		cin >> guess;
		attempts++;
		
		if(guess < secretNumber) {
			cout << "Too Low! Try again." <<endl;
       } else if (guess > secretNumber) {
       	cout << "Too high! Try again," << endl;
	   } else {
	   	     cout << "Congratulations!  You guessed the number " << secretNumber << " in " << attempts << "attemptS." << endl;
	   }
	} while  (guess != secretNumber);
	
	return 0;
}
