#include <iostream>
#include <cassert>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "Trivia.h"

using namespace std;

Trivia::Trivia()
{
	string triviaQuestion;
	string answerOne;
	string answerTwo;
	string answerThree;
	string answerFour;
	int correctAnswer;
}

Trivia::Trivia(string question, string one, string two, string three,
	string four, int answer)
{
	string triviaQuestion = question;
	string answerOne = one;
	string answerTwo = two;
	string answerThree = three;
	string answerFour = four;
	int correctAnswer = answer;
}
void Trivia::setTriviaQuestion(string question)
{
	triviaQuestion = question;
}

void Trivia::setAnswerOne(string one)
{
	answerOne = one;
}

void Trivia::setAnswerTwo(string two)
{
	answerTwo = two;
}

void Trivia::setAnswerThree(string three)
{
	answerThree = three;
}

void Trivia::setAnswerFour(string four)
{
	answerFour = four;
}

void Trivia::setCorrectAnswer(int answer)
{
	correctAnswer = answer;
}

string Trivia::getTriviaQuestion()
{
	return triviaQuestion;
}

string Trivia::getAnswerOne()
{
	return answerOne;
}

string Trivia::getAnswerTwo()
{
	return answerTwo;
}

string Trivia::getAnswerThree()
{
	return answerThree;
}

string Trivia::getAnswerFour()
{
	return answerFour;
}

int Trivia::getCorrectAnswer()
{
	return correctAnswer;
};

bool Trivia::checkGivenAnswer(int chosenNumber)
{
	int playerP = 0;
	cout << "Choose an answer by entering a number from 1 to 4." << endl;
	cin >> chosenNumber;
	cout << "\n" << endl;
	if (correctAnswer == chosenNumber)
	{
		playerP ++;
		return true;
	}
	else
	{
		return false;
	}
}

