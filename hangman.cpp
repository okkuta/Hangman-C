#include<iostream>
#include "hangman.h"

#include <algorithm>
#include <map>

using namespace std;



map<int, vector<string>> wordCategories = {
    {1, {"Toyota", "Ford", "BMW", "Honda", "Tesla"}},      // Cars
    {2, {"Apple", "Banana", "Cherry", "Grape", "Orange"}}, // Fruits
    {3, {"Dog", "Cat", "Elephant", "Tiger", "Lion"}},      // Animals
    {4, {"USA", "Canada", "Germany", "France", "Italy"}},  // Countries
    {5, {"NewYork", "Paris", "Tokyo", "London", "Berlin"}}  // Cities
};



void showMenu()
{
    int option;

    cout<<"Welcome to the Hangman! "<<endl;
    cout<<endl;
    cout<<"1 - Play!"<<endl;
    cout<<"2 - Instructions"<<endl;
    cout<<"3 - Exit"<<endl;

    cout<<endl;

    cout<<"Choose your option";

}



void showDifficulty()
{
    cout<<"Firstly, choose a difficulty level\n";
    cout<<endl;

    cout<<"1 - Easy\n";
    cout<<"2 - Medium\n";
    cout<<"3 - Hard\n";


}

void showCategories()
{
    
    cout<<"Now, choose a category\n";
    cout<<endl;

    cout<<"1 - Cars\n";
    cout<<"2 - Plants\n";
    cout<<"3 - Animals\n";
    cout<<"4 - Countries\n";
    cout<<"5 - Cities\n";

}


void showInstructions() 
{
    cout << "Instructions for the Hangman Game:\n";
    cout << "The objective of the game is to guess the secret word before making a limited number of mistakes.\n";
    cout << "Words may contain both uppercase and lowercase letters.\n";
    cout << "\nDifficulty Levels:\n";
    cout << "1. Easy: 10 attempts\n";
    cout << "2. Medium: 6 attempts\n";
    cout << "3. Hard: 3 attempts\n";
    cout << "\nAfter you choose the difficulty level, you may choose a category:\n";
    cout << "(cars, fruits, animals, countries, cities)\n";
    cout << "Have fun!\n";
}


vector<string> getWordsByCategory(int category) 
{
    if (wordCategories.find(category) != wordCategories.end())
    {
        return wordCategories[category];
    }
    return {}; 
}

string selectRandomWord(const vector<string> &words) 
{
    if (!words.empty()) 
    {
        srand(time(0)); 

        int index = rand() % words.size();
        return words[index];
    }
    return ""; 
}


void initializeGame(int difficulty,)


void gameLogic(int difficulty, string word)
{

}

