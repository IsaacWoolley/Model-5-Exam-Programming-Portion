#include <iostream>
#include <vector>
#include <ctime>

#include "passwordValidator.h"
#include "displayCard.h"
#include "playingCard.h"
#include "spinner.h"
#include "reachTargetScore.h"


using namespace std;


int main()
{
    srand(time(0));


    
    // Problem 1
    

    string password;

    bool valid = false;


    while (!valid)
    {
        cout << "Enter a password: ";
        cin >> password;


        try
        {
            validatePassword(password);

            valid = true;
        }

        catch (exception& e)
        {
            cout << e.what() << endl;
            cout << "Please try again.\n\n";
        }
    }


    cout << "Password successfully accepted.\n\n";



    
    // Problem 2
    

    cout << "Displaying Cards\n\n";


    int number = 100;

    double decimal = 12.34;

    string message = "C++ Templates";


    PlayingCard card("King", "Hearts");


    displayCard(number);

    displayCard(decimal);

    displayCard(message);

    displayCard(card);



    
    // Problem 3
    

    cout << "\nSpinner Game\n";


    Spinner spinner(6);


    vector<int> spins;


    spins = reachTargetScore(spinner, 20, spins);



    int total = 0;


    cout << "Spins: ";

    for (int value : spins)
    {
        cout << value << " ";

        total += value;
    }


    cout << "\nTotal Score: " << total << endl;



    return 0;
}