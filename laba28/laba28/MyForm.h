#pragma once

namespace laba28 {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button9;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"appeare";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(343, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"dissaperead";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(30, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 31);
			this->button3->TabIndex = 2;
			this->button3->Text = L"change color";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(343, 110);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"close";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(114, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 4;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(21, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Обьём";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 199);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"Sqare";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(258, 199);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Solution";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(477, 199);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(357, 200);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"Hight";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(258, 258);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Solution";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(21, 258);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"Enter X";
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox4_MouseClick);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(137, 259);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->Text = L"Enter C";
			this->textBox5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox5_MouseClick);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(356, 258);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 13;
			this->textBox6->Text = L"Answer";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(477, 257);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Clear";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(692, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(215, 123);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Change Bg";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(22, 82);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Yellow";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(22, 36);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(55, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Red";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(477, 337);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 16;
			this->button9->Text = L"Name";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1025, 493);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "fokus udalsia";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->BackColor == SystemColors::ButtonFace)
	{
		this->BackColor = Color::ForestGreen;
	}
	else {
		this->BackColor = SystemColors::ButtonFace;
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double a = Convert::ToDouble(this->textBox1->Text);
			double b = Convert::ToDouble(this->textBox2->Text);
			if (b == 0 || a / b < 0)
			{
				MessageBox::Show("Попытка деления на ноль или извлечения корня из отрицательного числа.", "Ошибка!");
				button6_Click(sender, System::EventArgs::Empty);
			}
			else {
				double c = a / b;
				this->textBox3->Clear();
				this->textBox3->Text = c.ToString();
				this->Text = c.ToString();
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show(e->Message->ToString(), "Ошибка формата данных!");
			button6_Click(sender, System::EventArgs::Empty);
		}
	}
private: System::Void button6_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	this->textBox3->Text = "Результат (корень из частного)";
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox1->Clear();
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox2->Clear();
}
private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox4->Clear();
}
private: System::Void textBox5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox5->Clear();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		double x = Convert::ToDouble(this->textBox4->Text);
		double c = Convert::ToDouble(this->textBox5->Text);
		if (c == 0 || x / c < 0)
		{
			MessageBox::Show("Попытка деления на ноль или извлечения корня из отрицательного числа.", "Ошибка!");
			button6_Click(sender, System::EventArgs::Empty);
		}
		else {
			double answer = (Math::Sign(x) * Math::Pow(Math::Abs(x), 1 / 3.0)) / (Math::Sqrt(c) - x);
			this->textBox6->Clear();
			this->textBox6->Text = answer.ToString();
			this->Text = answer.ToString();
		}
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message->ToString(), "Ошибка формата данных!");
		button6_Click(sender, System::EventArgs::Empty);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	this->textBox4->Clear();
	this->textBox5->Clear();
	this->textBox6->Clear();
	this->textBox6->Text = "Результат (корень из частного)";
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Red;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Yellow;
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Lab20";
}
};

}
