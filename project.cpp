#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

  int guess, magic, tries = 0;

  rand();

  magic = rand() % 100 + 1; //// random number between 1 and 100

  cout << "Guess The Number!";

  do
  {
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
    tries++;

    if (guess > magic)
      cout << " Too High\n\n";
    else if (guess < magic)
      cout << " Too Low\n\n";
    else
      cout << "You've guessed the number in " << tries << " tries!\n\n";

  } while (guess != magic);

    
  return 0;
}