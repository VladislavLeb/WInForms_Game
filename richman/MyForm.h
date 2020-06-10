#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "Question.h"


Question question[100];
int kol = 0, fHintUsed = 0, CallFriendUsed = 0, CallHallUsed = 0, score = 0, number;

namespace richman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  answer3;
	private: System::Windows::Forms::Button^  answer4;
	protected: 

	protected: 

	private: System::Windows::Forms::Button^  answer1;
	private: System::Windows::Forms::Button^  answer2;


	private: System::Windows::Forms::Label^  questionLabel;
	private: System::Windows::Forms::Label^  scoreLabel;


	private: System::Windows::Forms::TextBox^  nameBox;
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::Label^  UserNameLabel;
	private: System::Windows::Forms::Button^  hint50centButton;
	private: System::Windows::Forms::Button^  CallFriendButton;
	private: System::Windows::Forms::Button^  CallHallButton;





	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->answer3 = (gcnew System::Windows::Forms::Button());
			this->answer4 = (gcnew System::Windows::Forms::Button());
			this->answer1 = (gcnew System::Windows::Forms::Button());
			this->answer2 = (gcnew System::Windows::Forms::Button());
			this->questionLabel = (gcnew System::Windows::Forms::Label());
			this->scoreLabel = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->UserNameLabel = (gcnew System::Windows::Forms::Label());
			this->hint50centButton = (gcnew System::Windows::Forms::Button());
			this->CallFriendButton = (gcnew System::Windows::Forms::Button());
			this->CallHallButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// answer3
			// 
			this->answer3->Location = System::Drawing::Point(56, 275);
			this->answer3->Name = L"answer3";
			this->answer3->Size = System::Drawing::Size(118, 23);
			this->answer3->TabIndex = 0;
			this->answer3->Text = L"button1";
			this->answer3->UseVisualStyleBackColor = true;
			this->answer3->Visible = false;
			this->answer3->Click += gcnew System::EventHandler(this, &MyForm::answer3_Click);
			// 
			// answer4
			// 
			this->answer4->Location = System::Drawing::Point(498, 275);
			this->answer4->Name = L"answer4";
			this->answer4->Size = System::Drawing::Size(118, 23);
			this->answer4->TabIndex = 1;
			this->answer4->Text = L"button2";
			this->answer4->UseVisualStyleBackColor = true;
			this->answer4->Visible = false;
			this->answer4->Click += gcnew System::EventHandler(this, &MyForm::answer4_Click);
			// 
			// answer1
			// 
			this->answer1->Location = System::Drawing::Point(56, 220);
			this->answer1->Name = L"answer1";
			this->answer1->Size = System::Drawing::Size(118, 23);
			this->answer1->TabIndex = 2;
			this->answer1->Text = L"button3";
			this->answer1->UseVisualStyleBackColor = true;
			this->answer1->Visible = false;
			this->answer1->Click += gcnew System::EventHandler(this, &MyForm::answer1_Click);
			// 
			// answer2
			// 
			this->answer2->Location = System::Drawing::Point(498, 220);
			this->answer2->Name = L"answer2";
			this->answer2->Size = System::Drawing::Size(118, 23);
			this->answer2->TabIndex = 3;
			this->answer2->Text = L"button4";
			this->answer2->UseVisualStyleBackColor = true;
			this->answer2->Visible = false;
			this->answer2->Click += gcnew System::EventHandler(this, &MyForm::answer2_Click);
			// 
			// questionLabel
			// 
			this->questionLabel->AutoSize = true;
			this->questionLabel->Location = System::Drawing::Point(241, 161);
			this->questionLabel->Name = L"questionLabel";
			this->questionLabel->Size = System::Drawing::Size(35, 13);
			this->questionLabel->TabIndex = 4;
			this->questionLabel->Text = L"label1";
			this->questionLabel->Visible = false;
			// 
			// scoreLabel
			// 
			this->scoreLabel->AutoSize = true;
			this->scoreLabel->Location = System::Drawing::Point(523, 42);
			this->scoreLabel->Name = L"scoreLabel";
			this->scoreLabel->Size = System::Drawing::Size(13, 13);
			this->scoreLabel->TabIndex = 5;
			this->scoreLabel->Text = L"0";
			this->scoreLabel->Visible = false;
			this->scoreLabel->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(244, 42);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(100, 20);
			this->nameBox->TabIndex = 6;
			this->nameBox->Text = L"Введите имя";
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(249, 82);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(88, 23);
			this->startButton->TabIndex = 7;
			this->startButton->Text = L"Начать игру";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// UserNameLabel
			// 
			this->UserNameLabel->AutoSize = true;
			this->UserNameLabel->Location = System::Drawing::Point(523, 18);
			this->UserNameLabel->Name = L"UserNameLabel";
			this->UserNameLabel->Size = System::Drawing::Size(35, 13);
			this->UserNameLabel->TabIndex = 8;
			this->UserNameLabel->Text = L"label1";
			this->UserNameLabel->Visible = false;
			this->UserNameLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// hint50centButton
			// 
			this->hint50centButton->Location = System::Drawing::Point(35, 18);
			this->hint50centButton->Name = L"hint50centButton";
			this->hint50centButton->Size = System::Drawing::Size(103, 23);
			this->hint50centButton->TabIndex = 9;
			this->hint50centButton->Text = L"50 % 50";
			this->hint50centButton->UseVisualStyleBackColor = true;
			this->hint50centButton->Visible = false;
			this->hint50centButton->Click += gcnew System::EventHandler(this, &MyForm::hint50centButton_Click);
			// 
			// CallFriendButton
			// 
			this->CallFriendButton->Location = System::Drawing::Point(35, 61);
			this->CallFriendButton->Name = L"CallFriendButton";
			this->CallFriendButton->Size = System::Drawing::Size(103, 23);
			this->CallFriendButton->TabIndex = 10;
			this->CallFriendButton->Text = L"Звонок другу";
			this->CallFriendButton->UseVisualStyleBackColor = true;
			this->CallFriendButton->Visible = false;
			this->CallFriendButton->Click += gcnew System::EventHandler(this, &MyForm::CallFriendButton_Click);
			// 
			// CallHallButton
			// 
			this->CallHallButton->Location = System::Drawing::Point(35, 103);
			this->CallHallButton->Name = L"CallHallButton";
			this->CallHallButton->Size = System::Drawing::Size(103, 23);
			this->CallHallButton->TabIndex = 11;
			this->CallHallButton->Text = L"Помощь зала";
			this->CallHallButton->UseVisualStyleBackColor = true;
			this->CallHallButton->Visible = false;
			this->CallHallButton->Click += gcnew System::EventHandler(this, &MyForm::CallHallButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 351);
			this->Controls->Add(this->CallHallButton);
			this->Controls->Add(this->CallFriendButton);
			this->Controls->Add(this->hint50centButton);
			this->Controls->Add(this->UserNameLabel);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->scoreLabel);
			this->Controls->Add(this->questionLabel);
			this->Controls->Add(this->answer2);
			this->Controls->Add(this->answer1);
			this->Controls->Add(this->answer4);
			this->Controls->Add(this->answer3);
			this->Name = L"MyForm";
			this->Text = L"Кто хочет стать миллионером";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ReadQuestions()
		{
			ifstream fin("voprosy.txt");
			while (fin)
			{
				string temp, ans[4];
				getline(fin, temp);
				question[kol].SetQuest(temp);
				for (int j = 0; j < 4; j++)
				{
					getline(fin, ans[j]);
				}
				question[kol].SetAnswers(ans);
				getline(fin, temp);
				question[kol].SetRightAnswer(temp);
				getline(fin, temp);
				question[kol].SetDifficultLevel(temp);
				//cout << question[kol].GetDifficultLevel() << endl;
				kol++;
			}
			fin.close();
			kol--;
		}

		void AskQuestion()
		{
			int a;
			srand(time(NULL));
			generate: 
			number = rand() % kol;
			if (question[number].GetIsAsked() != 0)
				if
				 ((score >= 0 || score <= 3000 && question[number].GetDifficultLevel() != 0)
					|| (score >= 5000 || score <= 50000 && question[number].GetDifficultLevel() != 1)
					|| (score >= 100000 || score <= 1500000 && question[number].GetDifficultLevel() != 2))
			{
				goto generate;
			}
			string quest = question[number].GetQuest();
			questionLabel -> Text = gcnew String(quest.c_str());
			question[number].SetIsAsked();
			string outAnswers[4];
			question[number].GetAnswers(*(&outAnswers));
			answer1 -> Visible = true;
			answer2 -> Visible = true;
			answer3 -> Visible = true;
			answer4 -> Visible = true;
			answer1 -> Text = gcnew String(outAnswers[0].c_str());
			answer2 -> Text = gcnew String(outAnswers[1].c_str());
			answer3 -> Text = gcnew String(outAnswers[2].c_str());
			answer4 -> Text = gcnew String(outAnswers[3].c_str());
			/*if (fHintUsed == 0)
			{
				cout << "Podskazka 50 % 50. Nazhmite 5" << endl;
			}
			if (CallFriendUsed == 0)
			{
				cout << "Zvonok drugu. Nazhmite 6" << endl;
			}
			if (CallHallUsed == 0)
			{
				cout << "Pomosh zala. Nazhmite 7" << endl;
			}
			read: cout << "Vvedite nomer vashego otveta" << endl;
			cin >> a;
			if (a == 5 && fHintUsed == 0)
			{
				question[number].fHint();
				fHintUsed = 1;
				goto read;
			}
			if (a == 6 && CallFriendUsed == 0)
			{
				question[number].callFriendHint();
				CallFriendUsed = 1;
				goto read;
			}
			if (a == 7 && CallHallUsed == 0)
			{
				question[number].callHallHint();
				CallHallUsed = 1;
				goto read;
			}
			if (a > 4 || a < 1)
			{
				cout << "Takogo otveta net. Vvedite snowa" << endl;
				goto read;
			}
			if (question[number].CheckAnswer(a))
			{
				cout << "+" << endl;
				if (score == 0)
				{
					score += 500;
				}
				else
				if (score == 2000)
				{
					score += 1000;
				}
				else
				if (score == 3000)
				{
					score += 2000;
				}
				else
				if (score == 10000)
				{
					score += 5000;
				}
				else
				if (score == 15000)
				{
					score += 10000;
				}
				else
				if (score == 500 || score == 1000 || score == 5000 || score == 25000 || score == 50000 || score == 100000 || score == 200000 || score == 400000 || score == 1500000)
				{
					score *= 2;
				}
				else
				if (score == 800000)
				{
					score = 1500000;
				}
				cout << "Your total score " << score << endl;
				if (score != 3000000)
				{
					goto generate;
				}
				else
				{
					cout << "WIN!!!!";
				}
			}
			else
			{
				cout << "You LOSE" << endl;
				score = 0;
				goto generate;
			}*/
		}

		void TryAnswers(string userAnswer)
		{
			if (userAnswer == question[number].GetRightAnswer())
			{
				if (score == 0)
				{
					score += 500;
				}
				else
				if (score == 2000)
				{
					score += 1000;
				}
				else
				if (score == 3000)
				{
					score += 2000;
				}
				else
				if (score == 10000)
				{
					score += 5000;
				}
				else
				if (score == 15000)
				{
					score += 10000;
				}
				else
				if (score == 500 || score == 1000 || score == 5000 || score == 25000 || score == 50000 || score == 100000 || score == 200000 || score == 400000 || score == 1500000)
				{
					score *= 2;
				}
				else
				if (score == 800000)
				{
					score = 1500000;
				}
				if (score == 3000000)
				{
					scoreLabel -> Text = "EPIC WIN!!!";
				}
				else
				{
					scoreLabel -> Text = score.ToString(); 
					AskQuestion();
				}
			}
			else
			{
				score = 0;
				scoreLabel -> Text = "Вы проиграли! Эх... Поехали снова..."; 
				AskQuestion();
				hint50centButton -> Enabled = true;
				CallFriendButton -> Enabled = true;
				CallHallButton	->	Enabled = true;
			}
		}

	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 scoreLabel -> Visible = true;
			 UserNameLabel -> Visible = true;
			 questionLabel -> Visible = true;
			 answer1 -> Visible = true;
			 answer2 -> Visible = true;
			 answer3 -> Visible = true;
			 answer4 -> Visible = true;
			 CallHallButton -> Visible = true;
			 CallFriendButton -> Visible = true;
			 hint50centButton -> Visible = true;
			 UserNameLabel -> Text = nameBox -> Text + ", ваш счет:";
			 nameBox -> Visible = false;
			 startButton -> Visible = false;
			 ReadQuestions();
			 AskQuestion();
		 }
private: System::Void answer1_Click(System::Object^  sender, System::EventArgs^  e) {
			 TryAnswers(msclr::interop::marshal_as<std::string>(answer1 -> Text));
		 }
private: System::Void answer2_Click(System::Object^  sender, System::EventArgs^  e) {
			 TryAnswers(msclr::interop::marshal_as<std::string>(answer2 -> Text));
		 }
private: System::Void answer3_Click(System::Object^  sender, System::EventArgs^  e) {
			 TryAnswers(msclr::interop::marshal_as<std::string>(answer3 -> Text));
		 }
private: System::Void answer4_Click(System::Object^  sender, System::EventArgs^  e) {
			 TryAnswers(msclr::interop::marshal_as<std::string>(answer4 -> Text));
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void hint50centButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //if (fHintUsed == 0)
			 //{
				int AnwersForm[4];
				question[number].fHint(&(*AnwersForm));
				if (AnwersForm[0] == -1)
				{
					answer1 -> Visible = false;
				}
				if (AnwersForm[1] == -1)
				{
					answer2 -> Visible = false;
				}
				if (AnwersForm[2] == -1)
				{
					answer3 -> Visible = false;
				}
				if (AnwersForm[3] == -1)
				{
					answer4 -> Visible = false;
				}
				fHintUsed = 1;
				hint50centButton -> Enabled = false;
			// }
		 }
private: System::Void CallFriendButton_Click(System::Object^  sender, System::EventArgs^  e) {
		//	 if (CallFriendUsed == 0)
			// {
				string friendAnswer = question[number].callFriendHint();
				String^ s = "Я думаю правильный ответ: " + gcnew String(friendAnswer.c_str());
				MessageBox::Show(s, "Идет звонок другу...");
				CallFriendUsed = 1;
				CallFriendButton -> Enabled = false;
			// }
		 }
private: System::Void CallHallButton_Click(System::Object^  sender, System::EventArgs^  e) {
			int AnswersPersent[4];
			question[number].callHallHint(&(*AnswersPersent));
			String^ s = "За первый вариант: " + gcnew String(AnswersPersent[0].ToString())
				+ "\n" + "За второй вариант: " + gcnew String(AnswersPersent[1].ToString())
				+ "\n" + "За третий вариант: " + gcnew String(AnswersPersent[2].ToString())
				+ "\n" + "За четвертый вариант: " + gcnew String(AnswersPersent[3].ToString());
			MessageBox::Show(s, "Зал проголосовал...");
			CallHallUsed = 1;
			CallHallButton -> Enabled = false;
		 }
};
}
