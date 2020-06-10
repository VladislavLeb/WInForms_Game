#include "Question.h"

Question::Question(void)
{
	isAsked = 0;
	for (int i = 0; i < 4; i++)
	{
		AnsItem[i] = -1;
	}
}


Question::~Question(void)
{
}

void Question::SetQuest(string s)
{
	quest = s;
}

void Question::SetRightAnswer(string s)
{
	rightans = s;
}

void Question::SetAnswers(string s[])
{
	for (int i = 0; i < 4; i++)
	{
		answers[i] = s[i];
	}
}

string Question::GetQuest()
{
	return quest;
}

int Question::GetIsAsked()
{
	return isAsked;
}

void Question::SetIsAsked()
{
	isAsked = 1;
}

void Question::GetAnswers(string outAnswers [])
{
	srand(time(NULL));
	int k = 0;
	do
	{
		gen:
		int r = rand() % 4;
		for (int i = 0; i < 4; i++)
		{
			if (AnsItem[i] == r) goto gen;
		}
		AnsItem[k] = r;
		k++;
	}
	while(k < 4);
	for (int i = 0; i < 4; i++)
	{
		outAnswers[i] = answers[AnsItem[i]];
	}
}

string Question::GetRightAnswer()
{
	return rightans;
}

bool Question::CheckAnswer(int a)
{
	if (answers[AnsItem[a - 1]] == rightans)
		return true;
	else
		return false;
}

void Question::fHint(int AnswerForm [])
{
	int done = 0;
	while (done < 2)
	{
		hintRand:
		srand(time(NULL));
		int random = rand() % 4;
		if (answers[AnsItem[random]] == rightans || AnsItem[random] == -1)
		{
			goto hintRand;
		}
		AnsItem[random] = -1;
		done++;
	}
	for (int i = 0; i < 4; i++)
	{
		AnswerForm[i] = AnsItem[i];
	}
}

string Question::callFriendHint()
{
	srand(time(NULL));
	int random = 20 + rand() % 100;
//	cout << "Ya dumayu pravilniy otvet ";
	if (random >= 50)
	{
		return rightans;
	}
	else
	{
		FriendRand:
		int random = rand() % 4;
		if (answers[random] != rightans)
		{
			return answers[random];
		}
		else
		{
			goto FriendRand;
		}
	}
}

void Question::callHallHint(int AnswersPerscent [])
{
	srand(time(NULL));
	int sumrand = 100, kol = 4;
	if (answers[AnsItem[3]] == rightans)
	{
		int random = 30 + rand() % 20;
		AnswersPerscent[3] = random; 
		//cout << " " << random << "%" << endl;
		sumrand -= random;
		kol--;
	}
	for (int i = 0; i < kol; i++)
	{
		//cout << "Variant nomer " << i + 1 << ": " << answers[AnsItem[i]];
		if (i == 3)
		{
			AnswersPerscent[i] = sumrand;
			//cout << " " << sumrand << "%" << endl;
			break;
		}
		if (answers[AnsItem[i]] == rightans)
		{
			int random = 30 + rand() % 20;
			AnswersPerscent[i] = random; 
			//cout << " " << random << "%" << endl;
			sumrand -= random;
		}
		else
		{
			int random = 10 + rand() % 10;
			AnswersPerscent[i] = random;
			//cout << " " << random << "%" << endl;
			sumrand -= random;
		}
	}
}

void Question::SetDifficultLevel(string s)
{
	if (s == "easy")
	{
		difficultLevel = 0;
	}
	if (s == "medium")
	{
		difficultLevel = 1;
	}
	if (s == "hard")
	{
		difficultLevel = 2;
	}
}

int Question::GetDifficultLevel()
{
	return difficultLevel;
}