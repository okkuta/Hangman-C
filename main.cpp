#include<iostream>
#include "hangman.h"

using namespace std;

int main()
{
    int difficulty;
    int category;
    int option;
    

    while(true)
    {
        showMenu();
        cin>>option;

        switch(option)
        {
            case 1:
                showDifficulty();
                cin>>difficulty;

                showCategories();
                cin>>category;




            case 2:
                showInstructions();


        }


    }

    return 0;
}