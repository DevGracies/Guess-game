#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL)); // Seed the random number generator
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int numGuesses = 0;

    cout << "Welcome to Guess the Number!" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        numGuesses++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
    } while (guess != secretNumber);

    cout << "Congratulations! You guessed the secret number in " << numGuesses << " guesses." << endl;

    return 0;
}
