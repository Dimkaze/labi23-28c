#include "Form1.h"
#include "Form2.h"
using namespace laba30clr0chka;
Form2::Form2(Mydelegate^ sender)//инициализация конструктора для объектов класса Form2
{
	InitializeComponent();
	deleg = sender;
}
void Form2::button1_Click(Object^ sender, EventArgs^ e)
{
	deleg(textBox1->Text);
}
