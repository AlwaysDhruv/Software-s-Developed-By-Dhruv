#include<Windows.h>
#pragma once

namespace FullSizeCalc {
	int fg;
	static double n1,n2,n,n3=1;
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
			int x = Screen::PrimaryScreen->Bounds.Width;
			int y = Screen::PrimaryScreen->Bounds.Height;
			this->Size = System::Drawing::Size(x, y);
			
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ backspace;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ into;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ plusminus;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ point;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ button2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->into = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->plusminus = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Stencil", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 31);
			this->textBox1->MaxLength = 25;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1893, 159);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress_1);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::Color::Transparent;
			this->backspace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->backspace->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->backspace->ForeColor = System::Drawing::Color::OliveDrab;
			this->backspace->Location = System::Drawing::Point(772, 341);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(329, 151);
			this->backspace->TabIndex = 1;
			this->backspace->Text = L"⌫";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::Transparent;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divide->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->divide->ForeColor = System::Drawing::Color::OliveDrab;
			this->divide->Location = System::Drawing::Point(1174, 341);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(329, 151);
			this->divide->TabIndex = 2;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Transparent;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->minus->ForeColor = System::Drawing::Color::OliveDrab;
			this->minus->Location = System::Drawing::Point(1576, 341);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(329, 151);
			this->minus->TabIndex = 2;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::Transparent;
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->six->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->six->ForeColor = System::Drawing::Color::YellowGreen;
			this->six->Location = System::Drawing::Point(12, 522);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(329, 151);
			this->six->TabIndex = 1;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::Transparent;
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eight->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->eight->ForeColor = System::Drawing::Color::YellowGreen;
			this->eight->Location = System::Drawing::Point(772, 522);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(329, 151);
			this->eight->TabIndex = 1;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::Transparent;
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nine->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->nine->ForeColor = System::Drawing::Color::YellowGreen;
			this->nine->Location = System::Drawing::Point(1174, 522);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(329, 151);
			this->nine->TabIndex = 2;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// into
			// 
			this->into->BackColor = System::Drawing::Color::Transparent;
			this->into->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->into->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->into->ForeColor = System::Drawing::Color::OliveDrab;
			this->into->Location = System::Drawing::Point(1576, 522);
			this->into->Name = L"into";
			this->into->Size = System::Drawing::Size(329, 151);
			this->into->TabIndex = 2;
			this->into->Text = L"×";
			this->into->UseVisualStyleBackColor = false;
			this->into->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::Transparent;
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->two->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->two->ForeColor = System::Drawing::Color::YellowGreen;
			this->two->Location = System::Drawing::Point(12, 708);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(329, 151);
			this->two->TabIndex = 1;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::Transparent;
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->four->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->four->ForeColor = System::Drawing::Color::YellowGreen;
			this->four->Location = System::Drawing::Point(772, 708);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(329, 151);
			this->four->TabIndex = 1;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::Transparent;
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->three->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->three->ForeColor = System::Drawing::Color::YellowGreen;
			this->three->Location = System::Drawing::Point(391, 708);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(329, 151);
			this->three->TabIndex = 2;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::Transparent;
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->five->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->five->ForeColor = System::Drawing::Color::YellowGreen;
			this->five->Location = System::Drawing::Point(1174, 708);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(329, 151);
			this->five->TabIndex = 2;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Transparent;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->plus->ForeColor = System::Drawing::Color::OliveDrab;
			this->plus->Location = System::Drawing::Point(1576, 708);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(329, 151);
			this->plus->TabIndex = 2;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// plusminus
			// 
			this->plusminus->BackColor = System::Drawing::Color::Transparent;
			this->plusminus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plusminus->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->plusminus->ForeColor = System::Drawing::Color::YellowGreen;
			this->plusminus->Location = System::Drawing::Point(12, 898);
			this->plusminus->Name = L"plusminus";
			this->plusminus->Size = System::Drawing::Size(329, 151);
			this->plusminus->TabIndex = 1;
			this->plusminus->Text = L"+/-";
			this->plusminus->UseVisualStyleBackColor = false;
			this->plusminus->Click += gcnew System::EventHandler(this, &MyForm::plusminus_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::Transparent;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zero->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->zero->ForeColor = System::Drawing::Color::YellowGreen;
			this->zero->Location = System::Drawing::Point(772, 898);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(329, 151);
			this->zero->TabIndex = 1;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// point
			// 
			this->point->BackColor = System::Drawing::Color::Transparent;
			this->point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->point->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->point->ForeColor = System::Drawing::Color::YellowGreen;
			this->point->Location = System::Drawing::Point(391, 898);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(329, 151);
			this->point->TabIndex = 2;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = false;
			this->point->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::Transparent;
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->one->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->one->ForeColor = System::Drawing::Color::YellowGreen;
			this->one->Location = System::Drawing::Point(1174, 898);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(329, 151);
			this->one->TabIndex = 2;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::Transparent;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equal->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->equal->ForeColor = System::Drawing::Color::OliveDrab;
			this->equal->Location = System::Drawing::Point(1576, 898);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(329, 151);
			this->equal->TabIndex = 2;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::Transparent;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->clear->ForeColor = System::Drawing::Color::OliveDrab;
			this->clear->Location = System::Drawing::Point(391, 341);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(329, 151);
			this->clear->TabIndex = 2;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::Transparent;
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->seven->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->seven->ForeColor = System::Drawing::Color::YellowGreen;
			this->seven->Location = System::Drawing::Point(391, 522);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(329, 151);
			this->seven->TabIndex = 1;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::OliveDrab;
			this->button2->Location = System::Drawing::Point(1955, 898);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(329, 151);
			this->button2->TabIndex = 2;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1917, 1061);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->into);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->one);
			this->Controls->Add(this->five);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->point);
			this->Controls->Add(this->three);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->four);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->plusminus);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->two);
			this->Controls->Add(this->six);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"Casion";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}

	//Text Box

	private: System::Void textBox1_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back && e->KeyChar != '.')
		{
			e->Handled = true;
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}

	//All Buttons

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text += "0";
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text += "1";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text += "2";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text += "3";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
	{
	   textBox1->Text += "4";
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text += "5";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text += "6";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text += "7";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text += "8";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text += "9";
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text += ".";
	}
	private: System::Void plusminus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ str = textBox1->Text;
		n = Convert::ToDouble(str);
		n = -n;
		str = Convert::ToString(n);
		textBox1->Text = str;
		textBox1->Focus();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1);
		textBox1->Focus();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = "";
		n1 = 0;
		n2 = 0;
		textBox1->Focus();
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ str = textBox1->Text;
		n1 += Convert::ToDouble(str);
		textBox1->Text = "";
		fg = 1;
		textBox1->Focus();
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ str = textBox1->Text;
		n3 *= Convert::ToDouble(str);
		textBox1->Text = "";
		fg = 2;
		textBox1->Focus();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ str = textBox1->Text;
		n1 = Convert::ToDouble(str) - n1;
		textBox1->Text = "";
		fg = 3;
		textBox1->Focus();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ str = textBox1->Text;
		n1 = Convert::ToDouble(str);
		textBox1->Text = "";
		fg = 4;
		textBox1->Focus();
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ str = textBox1->Text;
		n2 = Convert::ToDouble(str);
		if (fg == 1)
		{
			str = Convert::ToString(n1 + n2);
			textBox1->Text = str;
			n2 = 0;
			n1 = 0;
		}
		else if (fg == 2)
		{
			str = Convert::ToString(n3 * n2);
			textBox1->Text = str;
			n2 = 0;
			n1 = 0;
			n3 = 1;
		}
		else if (fg==3)
		{
			str = Convert::ToString(n1 - n2);
			textBox1->Text = str;
			n2 = 0;
			n1 = 0;
		}
		else if (fg == 4)
		{
			str = Convert::ToString(n1 / n2);
			textBox1->Text = str;
			n2 = 0;
			n1 = 0;
			n3 = 1;
		}
	}

	//Numpad Shortcut Keys

	private: System::Void MyForm_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
	{
		if (e->KeyCode == Keys::Oemplus || e->KeyCode == Keys::Add)
		{
			plus->BackColor = Color::LightGray;
			plus->Refresh();
			System::Threading::Thread::Sleep(100);
			this->plus->BackColor = System::Drawing::Color::Transparent;
			plus->Refresh();
			plus->PerformClick();
		}
		if (e->KeyCode == Keys::Multiply)
		{
			into->BackColor = Color::LightGray;
			into->Refresh();
			System::Threading::Thread::Sleep(100);
			this->into->BackColor = System::Drawing::Color::Transparent;
			into->Refresh();
			into->PerformClick();
		}
		if (e->KeyCode == Keys::Subtract || e->KeyCode == Keys::OemMinus) 
		{
			minus->BackColor = Color::LightGray;
			minus->Refresh();
			System::Threading::Thread::Sleep(100);
			this->minus->BackColor = System::Drawing::Color::Transparent;
			minus->Refresh();
			minus->PerformClick();
		}
		if (e->KeyCode == Keys::Divide)
		{
			divide->BackColor = Color::LightGray;
			divide->Refresh();
			System::Threading::Thread::Sleep(100);
			this->divide->BackColor = System::Drawing::Color::Transparent;
			divide->Refresh();
			divide->PerformClick();
		}
		if (e->KeyCode == Keys::Enter) 
		{
			equal->BackColor = Color::LightGray;
			equal->Refresh();
			System::Threading::Thread::Sleep(100);
			this->equal->BackColor = System::Drawing::Color::Transparent;
			equal->Refresh();
			equal->PerformClick();
		}
		if (e->KeyCode == Keys::Escape) 
		{
			clear->BackColor = Color::LightGray;
			clear->Refresh();
			System::Threading::Thread::Sleep(100);
			this->clear->BackColor = System::Drawing::Color::Transparent;
			clear->Refresh();
			clear->PerformClick();
		}
		if (e->KeyCode == Keys::Back)
		{
			backspace->BackColor = Color::LightGray;
			backspace->Refresh();
			System::Threading::Thread::Sleep(100);
			this->backspace->BackColor = System::Drawing::Color::Transparent;
			backspace->Refresh();
		}
		if (e->KeyCode == (Keys)220)
		{
			plusminus->BackColor = Color::LightGray;
			plusminus->Refresh();
			System::Threading::Thread::Sleep(100);
			this->plusminus->BackColor = System::Drawing::Color::Transparent;
			plusminus->Refresh();
			plusminus->PerformClick();
		}
		if (e->KeyCode == Keys::Decimal) 
		{
			point->BackColor = Color::LightGray;
			point->Refresh();
			System::Threading::Thread::Sleep(100);
			this->point->BackColor = System::Drawing::Color::Transparent;
			point->Refresh();
		}
		if (e->KeyCode == Keys::NumPad1 || e->KeyCode == Keys::D1)
		{
			one->BackColor = Color::LightGray;
			one->Refresh();
			System::Threading::Thread::Sleep(100);
			this->one->BackColor = System::Drawing::Color::Transparent;
			one->Refresh();
		}
		if (e->KeyCode == Keys::NumPad2 || e->KeyCode == Keys::D2) 
		{
			two->BackColor = Color::LightGray;
			two->Refresh();
			System::Threading::Thread::Sleep(100);
			this->two->BackColor = System::Drawing::Color::Transparent;
			two->Refresh();
		}
		if (e->KeyCode == Keys::NumPad3 || e->KeyCode == Keys::D3) 
		{
			three->BackColor = Color::LightGray;
			three->Refresh();
			System::Threading::Thread::Sleep(100);
			this->three->BackColor = System::Drawing::Color::Transparent;
			three->Refresh();
		}
		if (e->KeyCode == Keys::NumPad4 || e->KeyCode == Keys::D4) 
		{
			four->BackColor = Color::LightGray;
			four->Refresh();
			System::Threading::Thread::Sleep(100);
			this->four->BackColor = System::Drawing::Color::Transparent;
			four->Refresh();
		}	
		if (e->KeyCode == Keys::NumPad5 || e->KeyCode == Keys::D5) 
		{
			five->BackColor = Color::LightGray;
			five->Refresh();
			System::Threading::Thread::Sleep(100);
			this->five->BackColor = System::Drawing::Color::Transparent;
			five->Refresh();
		}
		if (e->KeyCode == Keys::NumPad6 || e->KeyCode == Keys::D6) 
		{
			six->BackColor = Color::LightGray;
			six->Refresh();
			System::Threading::Thread::Sleep(100);
			this->six->BackColor = System::Drawing::Color::Transparent;
			six->Refresh();
		}
		if (e->KeyCode == Keys::NumPad7 || e->KeyCode == Keys::D7) 
		{
			seven->BackColor = Color::LightGray;
			seven->Refresh();
			System::Threading::Thread::Sleep(100);
			this->seven->BackColor = System::Drawing::Color::Transparent;
			seven->Refresh();
		}
		if (e->KeyCode == Keys::NumPad8 || e->KeyCode == Keys::D8) 
		{
			eight->BackColor = Color::LightGray;
			eight->Refresh();
			System::Threading::Thread::Sleep(100);
			this->eight->BackColor = System::Drawing::Color::Transparent;
			eight->Refresh();
		}
		if (e->KeyCode == Keys::NumPad9 || e->KeyCode == Keys::D9) 
		{
			nine->BackColor = Color::LightGray;
			nine->Refresh();
			System::Threading::Thread::Sleep(100);
			this->nine->BackColor = System::Drawing::Color::Transparent;
			nine->Refresh();
		}	
		if (e->KeyCode == Keys::NumPad0 || e->KeyCode == Keys::D0) 
		{
			zero->BackColor = Color::LightGray;
			zero->Refresh();
			System::Threading::Thread::Sleep(100);
			this->zero->BackColor = System::Drawing::Color::Transparent;
			zero->Refresh();
		}	
	}
};
}

	//Run The Software Code

	using namespace System;
	using namespace System::Windows::Forms;
	
	[STAThreadAttribute]
	int main(cli::array<String^>^ args)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew FullSizeCalc::MyForm());
		return 0;
	}