#pragma once
#include "MyForm2.h"
namespace LabChart {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;








	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(402, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(402, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 322);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(352, 255);
			this->dataGridView1->TabIndex = 2;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(24, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(352, 300);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1369, 606);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a;
		try
		{
			a = Double::Parse(this->textBox1->Text);
			MyForm2^ f = gcnew MyForm2(a);
			f->Show();
			MyForm::Hide();
			this->Enabled = false;
		}
		catch (System::ArgumentNullException^ e)
		{
			MessageBox::Show(this, "Пустая ссылка.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show(this, "Введите вещественное число.", "Внимание",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (System::OverflowException^ e)
		{
			MessageBox::Show(this, "ВВедите число подходящего размера.", "Слишком большое или маленькое число", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}

	}
	
private: bool cilindr;
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	cilindr = false;
	this->Text = "Scelknite na grafike";
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("Avto", String::typeid);
	table->Columns->Add("cena avto", Double::typeid);
	DataRow^ row = table->NewRow();
	row["Avto"] = "Mazda";
	row["cena avto"] = 1000000;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Avto"] = "Mitsubisi";
	row["cena avto"] = 100123;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Avto"] = "Shivrole";
	row["cena avto"] = 300000;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Avto"] = "Wolkswagen";
	row["cena avto"] = 100987;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Avto"] = "ZiGhoul";
	row["cena avto"] = 5;
	table->Rows->Add(row);
	row = table->NewRow();
	row["Avto"] = "Nisan";
	row["cena avto"] = 123432;
	table->Rows->Add(row);
	chart1->DataSource = table;
	chart1->Series["Series1"]->XValueMember = "Avto";
	chart1->Series["Series1"]->YValueMembers = "cena avto";
	chart1->Titles->Add("Ceni avto za mesiac"); 
	chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
	chart1->Series["Series1"]->Color = Color::Green;
	chart1->Series["Series1"]->IsVisibleInLegend = false;
	chart1->DataBind();
	dataGridView1->DataSource = table;
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e)
{
	cilindr = !cilindr;
	if (cilindr == true)
	{
		chart1->Series["Series1"]["DrawingStyle"] = "Cylinder";
	}
	else
	{
		chart1->Series["Series1"]["DrawingStyle"] = "Default";
	}
	chart1->DataBind();
}
};
}
