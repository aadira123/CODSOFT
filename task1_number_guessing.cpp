#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    // random seed:
    srand(time(0));

    // Generating random numbers between 1 and 50:
    int randomNumber = rand() % 50 + 1;
    int guess;

    // Asking the user to guess the number:
    cout << "Guess the number between 1 to 50: ";
    do
    {
        cin >> guess;
        if (guess > randomNumber)
        {
            cout << "Your guess is too high, TRY AGAIN!!: ";
        }
        else if (guess < randomNumber)
        {
            cout << "Your guess is too low, TRY AGAIN!!: ";
        }
    } while (guess != randomNumber);

    // Confirming the correct guess:
    cout << "WELL DONE!! You guessed the right number." << endl;

    return 0;
}
