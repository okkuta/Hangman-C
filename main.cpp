#include <iostream>
#include "hangman.h"

using namespace std;

int main() {
    int difficulty;
    int category;
    int option;

    while (true) 
    {
        showMenu();
        cin >> option;

        switch (option) 
        {
            case 1:

                showDifficulty();
                cin >> difficulty;

                if (difficulty < 1 || difficulty > 3)
                {
                    cout << "Invalid difficulty level! Please choose again." << endl;
                    continue; 
                }

                showCategories();
                cin >> category;

                if (category < 1 || category > 5)
                 {
                    cout << "Invalid category! Please choose again." << endl;
                    continue; 
                }

                gameLogic(difficulty, category);
                break; 

            case 2:

                showInstructions();
                break; 

            case 3:

                cout << "Goodbye!" << endl;
                exit(0); 

            default:
            
                cout << "Invalid option! Please choose 1, 2, or 3." << endl;
                break; 
        }
    }

    return 0;
}
