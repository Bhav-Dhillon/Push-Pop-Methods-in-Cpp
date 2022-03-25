#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string inputStore; 

    cout << "Please enter the question you would like the all mighty 8 ball to answer..."
         << "\n";
    
    cin>>inputStore;

    // Creating a random number generator:
    srand(time(NULL));
    int answer = rand();
    answer = rand() % 10;

    // Re-factor so that all of the answer strings are stored in an array and you randomly pull from that array to cout.
    // Outputting Answer:
    if (answer == 0)
    {

        cout << "Most likely.\n";
    }

    else if (answer == 1)
    {

        cout << "It is decidedly so. \n";
    }

    else if (answer == 2)
    {

        cout << "Without a doubt. \n";
    }

    else if (answer == 3)
    {

        cout << "Nah. \n";
    }

    else if (answer == 4)
    {

        cout << "You may rely on it. \n";
    }

    else if (answer == 5)
    {
        
        cout << "As I see it, yes. \n";

    }

    else if (answer == 6)
    {

        cout << "Most likely. That bish be smart as fuck. \n";
    }

    else if (answer == 7)
    {

        cout << "My sources say no. \n";
    }

    else if (answer == 8)
    {

        cout << "Unlikely. \n";
    }

    else if (answer == 9)
    {

        cout << "Outlook not so good. \n";
    }

    else
    {

        cout << "Most likely. That bish be smart as fuck. \n";
    }
}