#pragma once
#include <iostream>
#include <string>
#include <time.h>
using namespace std;
class Question
{
public:
	Question(void);
	~Question(void);
	void fHint(int []);
	string callFriendHint();
	void callHallHint(int []);
	void SetQuest(string);
	void SetAnswers(string []);
	void SetRightAnswer(string);
	void SetDifficultLevel(string);
	string GetRightAnswer();
	int GetDifficultLevel();
	void GetAnswers(string []);
	string GetQuest();
	int GetIsAsked();
	void SetIsAsked();
	bool CheckAnswer(int);
private:
	string quest, answers[4], rightans;
	int isAsked, difficultLevel, AnsItem[4];
};

