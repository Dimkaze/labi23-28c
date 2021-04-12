#include "Form1.h"
#include "Form2.h"
using namespace laba30clr0chka;
void Form1::button1_Click(Object^ sender, EventArgs^ e)
{
	Form2^ f = gcnew Form2(gcnew Mydelegate(this, &Form1::GetData));
	f->ShowDialog(); 
}