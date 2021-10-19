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

void Welcome()
{
    cout<<"********************************************************************************************************************************"<<endl;
    cout<<"                   Welcome to Noman's Trivia that seperate's the BRILLIANT from the NOT BRILLIANT!!"<<endl;
    cout<<"                        There will are 5 types of quizes for each a txt file will be provided!!"<<endl;
    cout<<"                                     All in all enjoy and share with your freinds!!"<<endl; 
    cout<<"  Plz don't look inside txt files if you do....well nothing can't really do anything but you are autimatically NOT BRILLIANT!!"<<endl;
    cout<<"********************************************************************************************************************************"<<endl;
}
int main(){
    Welcome();
   Trivia ques[10]; //Create an array of 10 Trivia objects
	int qNum = 0;
	int correctA = 0;
	string line;

	int player1A = 0; //Player 1 answers
	int player2A = 0; //Player 2 answers

	int player1P = 0; //Player 1 points
	int player2P = 0; //Player 2 points

	ifstream qFile;
	qFile.open("Question.txt", ios::in);

	for (int lineN = 1; getline(qFile, line) && lineN <= 70; lineN++)
    {
		if (lineN < 7)
		{
			cout << line << endl;
			ques[0].setTriviaQuestion(line);	//Question 1
			ques[0].setAnswerOne(line);
			ques[0].setAnswerTwo(line);
			ques[0].setAnswerThree(line);
			ques[0].setAnswerFour(line);
		}
		else if (lineN == 7)
		{
			ques[0].setCorrectAnswer(correctA);
			ques[0].checkGivenAnswer(player1A);
		}
		
		else if (lineN > 7 && lineN < 14)
		{
			cout << line << endl;
			ques[1].setTriviaQuestion(line);	//Question 2
			ques[1].setAnswerOne(line);
			ques[1].setAnswerTwo(line);
			ques[1].setAnswerThree(line);
			ques[1].setAnswerFour(line);
		}
		else if (lineN == 14)
		{
			ques[1].setCorrectAnswer(correctA);
			ques[1].checkGivenAnswer(player1A);
		}

		else if (lineN > 14 && lineN < 21)
		{
			cout << line << endl;
			ques[2].setTriviaQuestion(line);	//Question 3
			ques[2].setAnswerOne(line);
			ques[2].setAnswerTwo(line);
			ques[2].setAnswerThree(line);
			ques[2].setAnswerFour(line);
		}
		else if (lineN == 21)
		{
			ques[2].setCorrectAnswer(correctA);
			ques[2].checkGivenAnswer(player1A);
		}
		
		else if (lineN > 21 && lineN < 28)
		{
			cout << line << endl;
			ques[3].setTriviaQuestion(line);	//Question 4
			ques[3].setAnswerOne(line);
			ques[3].setAnswerTwo(line);
			ques[3].setAnswerThree(line);
			ques[3].setAnswerFour(line);
		}
		else if (lineN == 28)
		{
			ques[3].setCorrectAnswer(correctA);
			ques[3].checkGivenAnswer(player1A);
		}
		
		else if (lineN > 28 && lineN < 35)
		{
			cout << line << endl;
			ques[4].setTriviaQuestion(line);	//Question 5
			ques[4].setAnswerOne(line);
			ques[4].setAnswerTwo(line);
			ques[4].setAnswerThree(line);
			ques[4].setAnswerFour(line);
		}
		else if (lineN == 35)
		{
			ques[4].setCorrectAnswer(correctA);
			ques[4].checkGivenAnswer(player1A);
		}
		
		else if (lineN > 35 && lineN < 42)
		{
			cout << line << endl;
			ques[5].setTriviaQuestion(line);	//Question 6
			ques[5].setAnswerOne(line);
			ques[5].setAnswerTwo(line);
			ques[5].setAnswerThree(line);
			ques[5].setAnswerFour(line);
		}
		else if (lineN == 42)
		{
			ques[5].setCorrectAnswer(correctA);
			ques[5].checkGivenAnswer(player2A);
		}
		
		else if (lineN > 42 && lineN < 49)
		{
			cout << line << endl;
			ques[6].setTriviaQuestion(line);	//Question 7
			ques[6].setAnswerOne(line);
			ques[6].setAnswerTwo(line);
			ques[6].setAnswerThree(line);
			ques[6].setAnswerFour(line);
		}
		else if (lineN == 49)
		{
			ques[6].setCorrectAnswer(correctA);
			ques[6].checkGivenAnswer(player2A);
		}
		
		else if (lineN > 49 && lineN < 56)
		{
			cout << line << endl;
			ques[7].setTriviaQuestion(line);	//Question 8
			ques[7].setAnswerOne(line);
			ques[7].setAnswerTwo(line);
			ques[7].setAnswerThree(line);
			ques[7].setAnswerFour(line);
		}
		else if (lineN == 56)
		{
			ques[7].setCorrectAnswer(correctA);
			ques[7].checkGivenAnswer(player2A);
		}

		else if (lineN > 56 && lineN < 63)
		{
			cout << line << endl;
			ques[8].setTriviaQuestion(line);	//Question 9
			ques[8].setAnswerOne(line);
			ques[8].setAnswerTwo(line);
			ques[8].setAnswerThree(line);
			ques[8].setAnswerFour(line);
		}
		else if (lineN == 63)
		{
			ques[8].setCorrectAnswer(correctA);
			ques[8].checkGivenAnswer(player2A);
		}
		
		else if (lineN > 63 && lineN < 70)
		{
			cout << line << endl;
			ques[9].setTriviaQuestion(line);	//Question 10
			ques[9].setAnswerOne(line);
			ques[9].setAnswerTwo(line);
			ques[9].setAnswerThree(line);
			ques[9].setAnswerFour(line);
		}
		else if (lineN == 70)
		{
			ques[9].setCorrectAnswer(correctA);
			ques[9].checkGivenAnswer(player2A);
		}
    }

	if (ques[qNum].getCorrectAnswer() == player1A)
	{
		player1P++;
	}
	else if (ques[qNum].getCorrectAnswer() == player2A)
	{
		player2P++;
	}

	cout << "Player 1 scored " << player1P << " points" << endl;
	cout << "Player 2 scored " << player2P << " points" << endl;

	if (player1P > player2P)
	{
		cout << "The winner is Player 1" << endl;
	}
	else if (player1P < player2P)
	{
		cout << "The winner is Player 2" << endl;
	}
	else
	{
		cout << "It's a tie!" << endl;
	}
    
    return 0;
}
//learn reading from files.