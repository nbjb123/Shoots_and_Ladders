#pragma once
#include <stdlib.h>
#include <time.h>


namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbGameBoard;
	private: System::Windows::Forms::PictureBox^ pbp2;
	private: System::Windows::Forms::PictureBox^ pbp4;



	private: System::Windows::Forms::PictureBox^ pbp3;

	private: System::Windows::Forms::PictureBox^ pbp1;

	private: System::Windows::Forms::PictureBox^ pbDie;
	private: System::Windows::Forms::Button^ btRoll;
	private: System::Windows::Forms::Button^ btReset;
	private: System::Windows::Forms::Label^ lbTurnDisplay;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pbGameBoard = (gcnew System::Windows::Forms::PictureBox());
			this->pbp2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbp4 = (gcnew System::Windows::Forms::PictureBox());
			this->pbp3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbp1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbDie = (gcnew System::Windows::Forms::PictureBox());
			this->btRoll = (gcnew System::Windows::Forms::Button());
			this->btReset = (gcnew System::Windows::Forms::Button());
			this->lbTurnDisplay = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGameBoard))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbp2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbp4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbp3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbp1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDie))->BeginInit();
			this->SuspendLayout();
			// 
			// pbGameBoard
			// 
			this->pbGameBoard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbGameBoard.Image")));
			this->pbGameBoard->Location = System::Drawing::Point(0, 0);
			this->pbGameBoard->Name = L"pbGameBoard";
			this->pbGameBoard->Size = System::Drawing::Size(700, 700);
			this->pbGameBoard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbGameBoard->TabIndex = 0;
			this->pbGameBoard->TabStop = false;
			// 
			// pbp2
			// 
			this->pbp2->Location = System::Drawing::Point(44, 706);
			this->pbp2->Name = L"pbp2";
			this->pbp2->Size = System::Drawing::Size(30, 30);
			this->pbp2->TabIndex = 2;
			this->pbp2->TabStop = false;
			// 
			// pbp4
			// 
			this->pbp4->Location = System::Drawing::Point(116, 706);
			this->pbp4->Name = L"pbp4";
			this->pbp4->Size = System::Drawing::Size(30, 30);
			this->pbp4->TabIndex = 3;
			this->pbp4->TabStop = false;
			// 
			// pbp3
			// 
			this->pbp3->BackColor = System::Drawing::SystemColors::Control;
			this->pbp3->Location = System::Drawing::Point(80, 706);
			this->pbp3->Name = L"pbp3";
			this->pbp3->Size = System::Drawing::Size(30, 30);
			this->pbp3->TabIndex = 4;
			this->pbp3->TabStop = false;
			// 
			// pbp1
			// 
			this->pbp1->BackColor = System::Drawing::SystemColors::Control;
			this->pbp1->Location = System::Drawing::Point(8, 706);
			this->pbp1->Name = L"pbp1";
			this->pbp1->Size = System::Drawing::Size(30, 30);
			this->pbp1->TabIndex = 5;
			this->pbp1->TabStop = false;
			// 
			// pbDie
			// 
			this->pbDie->Location = System::Drawing::Point(829, 12);
			this->pbDie->Name = L"pbDie";
			this->pbDie->Size = System::Drawing::Size(200, 200);
			this->pbDie->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbDie->TabIndex = 6;
			this->pbDie->TabStop = false;
			// 
			// btRoll
			// 
			this->btRoll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btRoll->Location = System::Drawing::Point(879, 230);
			this->btRoll->Name = L"btRoll";
			this->btRoll->Size = System::Drawing::Size(93, 64);
			this->btRoll->TabIndex = 7;
			this->btRoll->Text = L"Roll";
			this->btRoll->UseVisualStyleBackColor = true;
			this->btRoll->Click += gcnew System::EventHandler(this, &MyForm::BtRoll_Click);
			// 
			// btReset
			// 
			this->btReset->Location = System::Drawing::Point(883, 681);
			this->btReset->Name = L"btReset";
			this->btReset->Size = System::Drawing::Size(127, 40);
			this->btReset->TabIndex = 8;
			this->btReset->Text = L"Reset";
			this->btReset->UseVisualStyleBackColor = true;
			this->btReset->Click += gcnew System::EventHandler(this, &MyForm::btReset_Click);
			// 
			// lbTurnDisplay
			// 
			this->lbTurnDisplay->AutoSize = true;
			this->lbTurnDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTurnDisplay->Location = System::Drawing::Point(706, 303);
			this->lbTurnDisplay->Name = L"lbTurnDisplay";
			this->lbTurnDisplay->Size = System::Drawing::Size(136, 55);
			this->lbTurnDisplay->TabIndex = 9;
			this->lbTurnDisplay->Text = L"Turn:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1134, 761);
			this->Controls->Add(this->lbTurnDisplay);
			this->Controls->Add(this->btReset);
			this->Controls->Add(this->pbp1);
			this->Controls->Add(this->pbp3);
			this->Controls->Add(this->pbp4);
			this->Controls->Add(this->pbp2);
			this->Controls->Add(this->btRoll);
			this->Controls->Add(this->pbDie);
			this->Controls->Add(this->pbGameBoard);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGameBoard))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbp2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbp4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbp3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbp1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDie))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int* arrx;
		int* invarrx;
		int* arry;
		int player;
		int playermax;
		int p1pos;
		int p2pos;
		int p3pos;
		int p4pos;
		int* SetY()
		{
			int* y = new int[10];
			y[9] = 2;
			y[8] = 72;
			y[7] = 142;
			y[6] = 212;
			y[5] = 282;
			y[4] = 352;
			y[3] = 422;
			y[2] = 492;
			y[1] = 562;
			y[0] = 632;
			return y;
		}
		int* SetX()
		{
			int* x = new int[10];
			x[1] = 2;
			x[2] = 77;
			x[3] = 147;
			x[4] = 217;
			x[5] = 290;
			x[6] = 362;
			x[7] = 434;
			x[8] = 500;
			x[9] = 569;
			x[0] = 634;
			return x;
		}
		int* SetInvX()
		{
			int* x = new int[10];
			x[0] = 2;
			x[9] = 77;
			x[8] = 147;
			x[7] = 217;
			x[6] = 290;
			x[5] = 362;
			x[4] = 434;
			x[3] = 500;
			x[2] = 569;
			x[1] = 634;
			return x;
		}
		void MovePlayer(int player, int position)
		{
			int x;
			int y;
			x = position % 10;
			y = position / 10;
			if (x == 0)
			{
				y--;
			}
			if (player == 1)
			{
				if (position == 100)
				{
					pbp1->Location = Point(arrx[1], arry[9]);
				}
				if (y == 0 || y == 2 || y == 4 || y == 6 || y == 8)
				{
					pbp1->Location = Point(arrx[x], arry[y]);
				}
				else
				{
					pbp1->Location = Point(invarrx[x], arry[y]);
				}
			}
			else if (player == 2)
			{
				if (position == 100)
				{
					pbp2->Location = Point(arrx[1], arry[9]);
				}
				if (y == 0 || y == 2 || y == 4 || y == 6 || y == 8)
				{
					pbp2->Location = Point(arrx[x] + 30, arry[y]);
				}
				else
				{
					pbp2->Location = Point(invarrx[x]+30, arry[y]);
				}
			}
			else if (player == 3)
			{
				if (position == 100)
				{
					pbp3->Location = Point(arrx[1], arry[9]);
				}
				if (y == 0 || y == 2 || y == 4 || y == 6 || y == 8)
				{
					pbp3->Location = Point(arrx[x], arry[y]+30);
				}
				else
				{
					pbp3->Location = Point(invarrx[x], arry[y]+30);
				}
			}
			else if (player == 4)
			{
				if (position == 100)
				{
					pbp4->Location = Point(arrx[1], arry[9]);
				}
				if (y == 0 || y == 2 || y == 4 || y == 6 || y == 8)
				{
					pbp4->Location = Point(arrx[x]+30, arry[y]+30);
				}
				else
				{
					pbp4->Location = Point(invarrx[x]+30, arry[y]+30);
				}
			}
		}
		int Check(int position)
		{
			switch (position)
			{
				//Ladders
			case 1:
				position = 38;
				break;
			case 4:
				position = 14;
				break;
			case 9:
				position = 31;
				break;
			case 21:
				position = 42;
				break;
			case 28:
				position = 84;
				break;
			case 36:
				position = 44;
				break;
			case 51:
				position = 67;
				break;
			case 71:
				position = 91;
				break;
			case 80:
				position = 100;
				break;
				
				//Chutes
			case 16:
				position = 6;
				break;
			case 47:
				position = 26;
				break;
			case 49:
				position = 11;
				break;
			case 56:
				position = 53;
				break;
			case 62:
				position = 19;
				break;
			case 64:
				position = 60;
				break;
			case 87:
				position = 24;
				break;
			case 93:
				position = 73;
				break;
			case 95:
				position = 75;
				break;
			case 98:
				position = 78;
				break;
			default:
				position = position;
			}
			return position;
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		arry = SetY();
		arrx = SetX();
		invarrx = SetInvX();
		player = 1;
		playermax = 2;
		p1pos = 0;
		p2pos = 0;
		p3pos = 0;
		p4pos = 0;
		pbDie->Load("images\\dieblank.png");
		pbGameBoard->Load("images\\gameboard.png");
		pbp1->Load("images\\redplayer.png");
		pbp2->Load("images\\blueplayer.png");
		pbp3->Load("images\\greenplayer.png");
		pbp4->Load("images\\pinkplayer.png");
		lbTurnDisplay->Text = "Turn: Player " + player;
	}
	private: System::Void BtRoll_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int win = 0;
		int temp;
		srand(time(0));
		int roll = rand() % 6 + 1;
		pbDie->Load("images\\die" + roll + ".png");
		if (player == 1)
		{
			temp = p1pos;
			p1pos = p1pos + roll;
			if (p1pos > 100)
			{
				p1pos = temp;
			}
			if (p1pos == 100)
			{
				win = 1;
			}
			MovePlayer(player, p1pos);
			p1pos = Check(p1pos);
			temp = p1pos;
			if (p1pos > 100)
			{
				p1pos = temp;
			}
			if (p1pos == 100)
			{
				win = 1;
			}
			MovePlayer(player, p1pos);
		}
		if (player == 2)
		{
			temp = p2pos;
			p2pos = p2pos + roll;
			if (p2pos > 100)
			{
				p2pos = temp;
			}
			if (p2pos == 100)
			{
				win = 1;
			}
			MovePlayer(player, p2pos);
			p2pos = Check(p2pos);
			temp = p2pos;
			if (p2pos > 100)
			{
				p2pos = temp;
			}
			if (p2pos == 100)
			{
				win = 1;
			}
			MovePlayer(player, p2pos);
		}
		if (player == 3)
		{
			temp = p3pos;
			p3pos = p3pos + roll;
			if (p3pos > 100)
			{
				p3pos = temp;
			}
			if (p3pos == 100)
			{
				win = 1;
			}
			MovePlayer(player, p3pos);
			p3pos = Check(p3pos);
			temp = p3pos;
			if (p3pos > 100)
			{
				p3pos = temp;
			}
			if (p3pos == 100)
			{
				win = 1;
			}
			MovePlayer(player, p3pos);
		}
		if (player == 4)
		{
			temp = p4pos;
			p4pos = p4pos + roll;
			if (p4pos > 100)
			{
				p4pos = temp;
			}
			if (p4pos == 100)
			{
				win = 1;
			}
			MovePlayer(player, p4pos);
			p4pos = Check(p4pos);
			temp = p4pos;
			if (p4pos > 100)
			{
				p4pos = temp;
			}
			if (p4pos == 100)
			{
				win = 1;
			}
			MovePlayer(player, p4pos);
		}
		if (win == 1)
		{
			MessageBox::Show("Player " + player + " Won the Game!");
			btRoll->Enabled = false;
		}
		player++;
		if (player > playermax)
		{
			player = 1;
		}
		lbTurnDisplay->Text = "Turn: Player " + player;
	}
private: System::Void btReset_Click(System::Object^ sender, System::EventArgs^ e) 
{
	pbDie->Load("images\\dieblank.png");
	player = 1;
	lbTurnDisplay->Text = "Turn: Player " + player;
	p1pos = 0;
	p2pos = 0;
	p3pos = 0;
	p4pos = 0;
	pbp1->Location = Point(8, 706);
	pbp2->Location = Point(44, 706);
	pbp3->Location = Point(80, 706);
	pbp4->Location = Point(116, 706);
	btRoll->Enabled = true;
}
};
}
