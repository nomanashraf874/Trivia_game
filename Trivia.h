#ifndef TRIVIA_H_
#define TRIVIA_H_

using namespace std;

#include <string>

class Trivia
{
private:
	string triviaQuestion;
	string answerOne;
	string answerTwo;
	string answerThree;
	string answerFour;
	int correctAnswer;

public:
	Trivia();
	Trivia(string question, string one, string two, string three,
		string four, int answer);

	void setTriviaQuestion(string question);
	void setAnswerOne(string one);
	void setAnswerTwo(string two);
	void setAnswerThree(string three);
	void setAnswerFour(string four);
	void setCorrectAnswer(int answer);

	string getTriviaQuestion();
	string getAnswerOne();
	string getAnswerTwo();
	string getAnswerThree();
	string getAnswerFour();
	int getCorrectAnswer();

	bool checkGivenAnswer(int chosenNumber);

};
#endif // TRIVIA_H_
