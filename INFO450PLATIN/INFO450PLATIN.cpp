/*Carter Wahl // Advanced Programming (info 450-901-Spring 2018)
This is a program that translates a word enetered by the user into pig latin*/
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int pigLatin(string word) //function for translating word entered into pig latin
{
	string translation;
	int length = 0;
	int i = 0;
	char firstletter = word[i];
	if ((word.length() <= 50))
	{
		if ((word == "the" || word == "and" || word.length() == 2))
		{
			cout << word << endl;
			return 0;
		}
		else
		{
			switch (firstletter) { //switch case using the first character 
			case 'q': //if consonant
			case 'w':
			case 'r':
			case 't':
			case 'y':
			case 'p':
			case 's':
			case 'd':
			case 'f':
			case 'g':
			case 'h':
			case 'j':
			case 'k':
			case 'l':
			case 'z':
			case 'x':
			case 'c':
			case 'v':
			case 'b':
			case 'n':
			case 'm':
				translation = word.substr(i); //identifys translation as entered word
				length = translation.length(); //identifys the length of the word
				translation.insert(length, "ay");//appends 'ay' at the end of the string
				translation.insert(length, 1, word[i]); //appends the first letter to the end of string
				translation.erase(0, 1); //removes first letter
				cout << translation << endl; //prints translation to console
				return 0;
			case 'e': //if vowel
			case 'u':
			case 'i':
			case 'o':
			case 'a':
				translation = word.substr(i); //samd l
				length = translation.length();
				translation.insert(length, "ay");
				cout << translation << endl;
				return 0;
				break;
			case '0': //if number
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '\0':
				cout << "please enter a valid word..." << endl;
				return -1; //unsuccrwful
				break;
			}
		}
	}
	else
	{
		cout << "please enter a valid word..." << endl;
		return -1; //unsuccesful
	}
}

int main() //at the end so defintion not needed
{
	string word; //the word entered
	char answer; //used in looping the program

	do { //loop to allow multiple translations
		cout << "Please enter a word to be translated into Pig Latin (lower case, please)!" << endl;
		cin >> word; //uswr enters word
		pigLatin(word); //function call using user-entered word		
		cout << endl;
		cout << "Press 'y' for another translation: ";
		cin >> answer;
		cout << endl;
	} while ((answer == 'y') || (answer == 'Y')); //"play agin"
	return 0;
}
