#pragma once

namespace SQL_Project {			//replace with name of c++ project (ex: project 12)

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	//using namespace System::Windows::Forms::DataVisualization::Charting;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

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

	protected:




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TabPage^ tabPage14;
	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker11;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker10;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker8;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker6;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker12;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ ShowSchedRBTN;
	private: System::Windows::Forms::RadioButton^ SchedCusRBTN;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ RemTechRBTN;
	private: System::Windows::Forms::RadioButton^ AddSerToTechRBTN;
	private: System::Windows::Forms::RadioButton^ AddTechRBTN;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::RadioButton^ ShowSerRBTN;
	private: System::Windows::Forms::RadioButton^ RemSerRBTN;
	private: System::Windows::Forms::RadioButton^ AddSerRBTN;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RadioButton^ addCartoCustomerRBTN;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ AddCarRBTN;
	private: System::Windows::Forms::RadioButton^ DelCarRBTN;
	private: System::Windows::Forms::RadioButton^ ShowCarRBTN;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::RadioButton^ DelCusRBTN;
	private: System::Windows::Forms::RadioButton^ ShowCusRBTN;
	private: System::Windows::Forms::RadioButton^ AddCustRBTN;
	private: System::Windows::Forms::TabControl^ tabControl1;















































































		   //private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;















































	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker10 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker11 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker8 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker9 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker6 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker7 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->SchedCusRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->ShowSchedRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker12 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->AddTechRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->AddSerToTechRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->RemTechRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->AddSerRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->RemSerRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->ShowSerRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->ShowCarRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->DelCarRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->AddCarRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addCartoCustomerRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->AddCustRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->ShowCusRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->DelCusRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage13->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(15, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// tabPage14
			// 
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(889, 276);
			this->tabPage14->TabIndex = 8;
			this->tabPage14->Text = L"tabPage14";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->label20);
			this->tabPage13->Controls->Add(this->label19);
			this->tabPage13->Controls->Add(this->label18);
			this->tabPage13->Controls->Add(this->label17);
			this->tabPage13->Controls->Add(this->dateTimePicker11);
			this->tabPage13->Controls->Add(this->dateTimePicker10);
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(889, 276);
			this->tabPage13->TabIndex = 7;
			this->tabPage13->Text = L"Graph";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker10
			// 
			this->dateTimePicker10->Location = System::Drawing::Point(581, 33);
			this->dateTimePicker10->Name = L"dateTimePicker10";
			this->dateTimePicker10->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker10->TabIndex = 0;
			this->dateTimePicker10->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker10_ValueChanged);
			// 
			// dateTimePicker11
			// 
			this->dateTimePicker11->Location = System::Drawing::Point(581, 106);
			this->dateTimePicker11->Name = L"dateTimePicker11";
			this->dateTimePicker11->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker11->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(509, 37);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Start Date";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(512, 106);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 13);
			this->label18->TabIndex = 3;
			this->label18->Text = L"End Date";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(100, 204);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(58, 26);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Start Date:\r\nEnd Date:";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(81, 64);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(152, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Services Done in Date Range:";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->button7);
			this->tabPage12->Controls->Add(this->label16);
			this->tabPage12->Controls->Add(this->label15);
			this->tabPage12->Controls->Add(this->dateTimePicker9);
			this->tabPage12->Controls->Add(this->dateTimePicker8);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(889, 276);
			this->tabPage12->TabIndex = 6;
			this->tabPage12->Text = L"Technician Bonus";
			this->tabPage12->UseVisualStyleBackColor = true;
			this->tabPage12->Click += gcnew System::EventHandler(this, &MyForm::tabPage12_Click);
			// 
			// dateTimePicker8
			// 
			this->dateTimePicker8->Location = System::Drawing::Point(65, 27);
			this->dateTimePicker8->Name = L"dateTimePicker8";
			this->dateTimePicker8->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker8->TabIndex = 0;
			// 
			// dateTimePicker9
			// 
			this->dateTimePicker9->Location = System::Drawing::Point(394, 28);
			this->dateTimePicker9->Name = L"dateTimePicker9";
			this->dateTimePicker9->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker9->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(336, 34);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"End Date";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 33);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 13);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Start Date";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(65, 75);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 4;
			this->button7->Text = L"OK";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->label14);
			this->tabPage11->Controls->Add(this->comboBox5);
			this->tabPage11->Controls->Add(this->button5);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(889, 276);
			this->tabPage11->TabIndex = 5;
			this->tabPage11->Text = L"Customer Schedule";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(72, 58);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"OK";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(72, 22);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 25);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Customer";
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->button4);
			this->tabPage10->Controls->Add(this->comboBox2);
			this->tabPage10->Controls->Add(this->label13);
			this->tabPage10->Controls->Add(this->label12);
			this->tabPage10->Controls->Add(this->label11);
			this->tabPage10->Controls->Add(this->dateTimePicker7);
			this->tabPage10->Controls->Add(this->dateTimePicker6);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(889, 276);
			this->tabPage10->TabIndex = 4;
			this->tabPage10->Text = L"Technician Jobs";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker6
			// 
			this->dateTimePicker6->Location = System::Drawing::Point(123, 35);
			this->dateTimePicker6->Name = L"dateTimePicker6";
			this->dateTimePicker6->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker6->TabIndex = 0;
			// 
			// dateTimePicker7
			// 
			this->dateTimePicker7->Location = System::Drawing::Point(467, 35);
			this->dateTimePicker7->Name = L"dateTimePicker7";
			this->dateTimePicker7->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker7->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(27, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Start Date";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(390, 41);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"End Date";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(27, 82);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Technician";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(123, 79);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(30, 117);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"OK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->button3);
			this->tabPage9->Controls->Add(this->label10);
			this->tabPage9->Controls->Add(this->label7);
			this->tabPage9->Controls->Add(this->dateTimePicker5);
			this->tabPage9->Controls->Add(this->dateTimePicker4);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(889, 276);
			this->tabPage9->TabIndex = 3;
			this->tabPage9->Text = L"Revenue";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(79, 26);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker4->TabIndex = 0;
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Location = System::Drawing::Point(418, 26);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker5->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Start Date";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(346, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"End Date";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Calculate Revenue";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->label9);
			this->tabPage8->Controls->Add(this->comboBox4);
			this->tabPage8->Controls->Add(this->button2);
			this->tabPage8->Controls->Add(this->label6);
			this->tabPage8->Controls->Add(this->label5);
			this->tabPage8->Controls->Add(this->dateTimePicker3);
			this->tabPage8->Controls->Add(this->dateTimePicker2);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(889, 276);
			this->tabPage8->TabIndex = 2;
			this->tabPage8->Text = L"Number Of Jobs";
			this->tabPage8->UseVisualStyleBackColor = true;
			this->tabPage8->Click += gcnew System::EventHandler(this, &MyForm::tabPage8_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(66, 35);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 0;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(392, 34);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker3->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Start Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(334, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"End Date";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(66, 122);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(66, 78);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 5;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Services";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->dateTimePicker1);
			this->tabPage7->Controls->Add(this->button1);
			this->tabPage7->Controls->Add(this->label4);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(889, 276);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"Info for Job";
			this->tabPage7->UseVisualStyleBackColor = true;
			this->tabPage7->Click += gcnew System::EventHandler(this, &MyForm::tabPage7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Date";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(78, 38);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged_1);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->checkedListBox1);
			this->tabPage5->Controls->Add(this->comboBox7);
			this->tabPage5->Controls->Add(this->comboBox6);
			this->tabPage5->Controls->Add(this->dateTimePicker12);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Controls->Add(this->radioButton2);
			this->tabPage5->Controls->Add(this->ShowSchedRBTN);
			this->tabPage5->Controls->Add(this->SchedCusRBTN);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(889, 276);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Schedule";
			this->tabPage5->UseVisualStyleBackColor = true;
			this->tabPage5->Click += gcnew System::EventHandler(this, &MyForm::tabPage5_Click);
			// 
			// SchedCusRBTN
			// 
			this->SchedCusRBTN->AutoSize = true;
			this->SchedCusRBTN->Location = System::Drawing::Point(609, 107);
			this->SchedCusRBTN->Margin = System::Windows::Forms::Padding(2);
			this->SchedCusRBTN->Name = L"SchedCusRBTN";
			this->SchedCusRBTN->Size = System::Drawing::Size(117, 17);
			this->SchedCusRBTN->TabIndex = 0;
			this->SchedCusRBTN->TabStop = true;
			this->SchedCusRBTN->Text = L"Schedule Customer";
			this->SchedCusRBTN->UseVisualStyleBackColor = true;
			this->SchedCusRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton12_CheckedChanged);
			// 
			// ShowSchedRBTN
			// 
			this->ShowSchedRBTN->AutoSize = true;
			this->ShowSchedRBTN->Location = System::Drawing::Point(609, 148);
			this->ShowSchedRBTN->Margin = System::Windows::Forms::Padding(2);
			this->ShowSchedRBTN->Name = L"ShowSchedRBTN";
			this->ShowSchedRBTN->Size = System::Drawing::Size(100, 17);
			this->ShowSchedRBTN->TabIndex = 1;
			this->ShowSchedRBTN->Text = L"Show Schedule";
			this->ShowSchedRBTN->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(609, 128);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(74, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Pick Tech";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(41, 30);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(139, 13);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Schedule a Customer below";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(44, 55);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(75, 13);
			this->label22->TabIndex = 11;
			this->label22->Text = L"Pick Customer";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(144, 55);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(94, 13);
			this->label23->TabIndex = 12;
			this->label23->Text = L"Pick Customer Car";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(400, 55);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(72, 13);
			this->label24->TabIndex = 13;
			this->label24->Text = L"Pick Services";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(261, 55);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 13);
			this->label25->TabIndex = 14;
			this->label25->Text = L"Pick Date";
			// 
			// dateTimePicker12
			// 
			this->dateTimePicker12->CustomFormat = L"MM/dd/yyyy hh:mm tt";
			this->dateTimePicker12->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker12->Location = System::Drawing::Point(249, 79);
			this->dateTimePicker12->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker12->Name = L"dateTimePicker12";
			this->dateTimePicker12->ShowUpDown = true;
			this->dateTimePicker12->Size = System::Drawing::Size(151, 20);
			this->dateTimePicker12->TabIndex = 15;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(146, 79);
			this->comboBox6->Margin = System::Windows::Forms::Padding(2);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(92, 21);
			this->comboBox6->TabIndex = 16;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(46, 79);
			this->comboBox7->Margin = System::Windows::Forms::Padding(2);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(92, 21);
			this->comboBox7->TabIndex = 17;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(404, 79);
			this->checkedListBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(91, 64);
			this->checkedListBox1->TabIndex = 18;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->radioButton1);
			this->tabPage4->Controls->Add(this->RemTechRBTN);
			this->tabPage4->Controls->Add(this->AddSerToTechRBTN);
			this->tabPage4->Controls->Add(this->AddTechRBTN);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(889, 276);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Technicians";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// AddTechRBTN
			// 
			this->AddTechRBTN->AutoSize = true;
			this->AddTechRBTN->Location = System::Drawing::Point(40, 29);
			this->AddTechRBTN->Margin = System::Windows::Forms::Padding(2);
			this->AddTechRBTN->Name = L"AddTechRBTN";
			this->AddTechRBTN->Size = System::Drawing::Size(72, 17);
			this->AddTechRBTN->TabIndex = 0;
			this->AddTechRBTN->TabStop = true;
			this->AddTechRBTN->Text = L"Add Tech";
			this->AddTechRBTN->UseVisualStyleBackColor = true;
			this->AddTechRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::AddTechRBTN_CheckedChanged);
			// 
			// AddSerToTechRBTN
			// 
			this->AddSerToTechRBTN->AutoSize = true;
			this->AddSerToTechRBTN->Location = System::Drawing::Point(40, 50);
			this->AddSerToTechRBTN->Margin = System::Windows::Forms::Padding(2);
			this->AddSerToTechRBTN->Name = L"AddSerToTechRBTN";
			this->AddSerToTechRBTN->Size = System::Drawing::Size(123, 17);
			this->AddSerToTechRBTN->TabIndex = 1;
			this->AddSerToTechRBTN->Text = L"Add Service to Tech";
			this->AddSerToTechRBTN->UseVisualStyleBackColor = true;
			this->AddSerToTechRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::AddSerToTechRBTN_CheckedChanged);
			// 
			// RemTechRBTN
			// 
			this->RemTechRBTN->AutoSize = true;
			this->RemTechRBTN->Location = System::Drawing::Point(40, 72);
			this->RemTechRBTN->Margin = System::Windows::Forms::Padding(2);
			this->RemTechRBTN->Name = L"RemTechRBTN";
			this->RemTechRBTN->Size = System::Drawing::Size(93, 17);
			this->RemTechRBTN->TabIndex = 2;
			this->RemTechRBTN->Text = L"Remove Tech";
			this->RemTechRBTN->UseVisualStyleBackColor = true;
			this->RemTechRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RemTechRBTN_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(40, 95);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(80, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->Text = L"Show Tech";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(40, 119);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Technicians with no Work";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->ShowSerRBTN);
			this->tabPage3->Controls->Add(this->RemSerRBTN);
			this->tabPage3->Controls->Add(this->AddSerRBTN);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(889, 276);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Services";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// AddSerRBTN
			// 
			this->AddSerRBTN->AutoSize = true;
			this->AddSerRBTN->Location = System::Drawing::Point(32, 24);
			this->AddSerRBTN->Margin = System::Windows::Forms::Padding(2);
			this->AddSerRBTN->Name = L"AddSerRBTN";
			this->AddSerRBTN->Size = System::Drawing::Size(83, 17);
			this->AddSerRBTN->TabIndex = 0;
			this->AddSerRBTN->TabStop = true;
			this->AddSerRBTN->Text = L"Add Service";
			this->AddSerRBTN->UseVisualStyleBackColor = true;
			this->AddSerRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// RemSerRBTN
			// 
			this->RemSerRBTN->AutoSize = true;
			this->RemSerRBTN->Location = System::Drawing::Point(32, 45);
			this->RemSerRBTN->Margin = System::Windows::Forms::Padding(2);
			this->RemSerRBTN->Name = L"RemSerRBTN";
			this->RemSerRBTN->Size = System::Drawing::Size(104, 17);
			this->RemSerRBTN->TabIndex = 1;
			this->RemSerRBTN->TabStop = true;
			this->RemSerRBTN->Text = L"Remove Service";
			this->RemSerRBTN->UseVisualStyleBackColor = true;
			this->RemSerRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RemSerRBTN_CheckedChanged);
			// 
			// ShowSerRBTN
			// 
			this->ShowSerRBTN->AutoSize = true;
			this->ShowSerRBTN->Location = System::Drawing::Point(32, 68);
			this->ShowSerRBTN->Name = L"ShowSerRBTN";
			this->ShowSerRBTN->Size = System::Drawing::Size(96, 17);
			this->ShowSerRBTN->TabIndex = 2;
			this->ShowSerRBTN->TabStop = true;
			this->ShowSerRBTN->Text = L"Show Services";
			this->ShowSerRBTN->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->addCartoCustomerRBTN);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->AddCarRBTN);
			this->tabPage2->Controls->Add(this->DelCarRBTN);
			this->tabPage2->Controls->Add(this->ShowCarRBTN);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(889, 276);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Cars";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// ShowCarRBTN
			// 
			this->ShowCarRBTN->AutoSize = true;
			this->ShowCarRBTN->Location = System::Drawing::Point(24, 95);
			this->ShowCarRBTN->Margin = System::Windows::Forms::Padding(2);
			this->ShowCarRBTN->Name = L"ShowCarRBTN";
			this->ShowCarRBTN->Size = System::Drawing::Size(76, 17);
			this->ShowCarRBTN->TabIndex = 5;
			this->ShowCarRBTN->TabStop = true;
			this->ShowCarRBTN->Text = L"Show Cars";
			this->ShowCarRBTN->UseVisualStyleBackColor = true;
			this->ShowCarRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// DelCarRBTN
			// 
			this->DelCarRBTN->AutoSize = true;
			this->DelCarRBTN->Location = System::Drawing::Point(25, 74);
			this->DelCarRBTN->Margin = System::Windows::Forms::Padding(2);
			this->DelCarRBTN->Name = L"DelCarRBTN";
			this->DelCarRBTN->Size = System::Drawing::Size(75, 17);
			this->DelCarRBTN->TabIndex = 6;
			this->DelCarRBTN->TabStop = true;
			this->DelCarRBTN->Text = L"Delete Car";
			this->DelCarRBTN->UseVisualStyleBackColor = true;
			this->DelCarRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// AddCarRBTN
			// 
			this->AddCarRBTN->AutoSize = true;
			this->AddCarRBTN->Location = System::Drawing::Point(25, 26);
			this->AddCarRBTN->Margin = System::Windows::Forms::Padding(2);
			this->AddCarRBTN->Name = L"AddCarRBTN";
			this->AddCarRBTN->Size = System::Drawing::Size(63, 17);
			this->AddCarRBTN->TabIndex = 7;
			this->AddCarRBTN->TabStop = true;
			this->AddCarRBTN->Text = L"Add Car";
			this->AddCarRBTN->UseVisualStyleBackColor = true;
			this->AddCarRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(128, 26);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"car needs make, model, license plate i think";
			// 
			// addCartoCustomerRBTN
			// 
			this->addCartoCustomerRBTN->AutoSize = true;
			this->addCartoCustomerRBTN->Location = System::Drawing::Point(25, 49);
			this->addCartoCustomerRBTN->Name = L"addCartoCustomerRBTN";
			this->addCartoCustomerRBTN->Size = System::Drawing::Size(122, 17);
			this->addCartoCustomerRBTN->TabIndex = 9;
			this->addCartoCustomerRBTN->TabStop = true;
			this->addCartoCustomerRBTN->Text = L"Add Car to Customer";
			this->addCartoCustomerRBTN->UseVisualStyleBackColor = true;
			this->addCartoCustomerRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::addCartoCustomerRBTN_CheckedChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->DelCusRBTN);
			this->tabPage1->Controls->Add(this->ShowCusRBTN);
			this->tabPage1->Controls->Add(this->AddCustRBTN);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(889, 276);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Customer";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// AddCustRBTN
			// 
			this->AddCustRBTN->AutoSize = true;
			this->AddCustRBTN->Checked = true;
			this->AddCustRBTN->Location = System::Drawing::Point(26, 33);
			this->AddCustRBTN->Margin = System::Windows::Forms::Padding(2);
			this->AddCustRBTN->Name = L"AddCustRBTN";
			this->AddCustRBTN->Size = System::Drawing::Size(91, 17);
			this->AddCustRBTN->TabIndex = 2;
			this->AddCustRBTN->TabStop = true;
			this->AddCustRBTN->Text = L"Add Customer";
			this->AddCustRBTN->UseVisualStyleBackColor = true;
			this->AddCustRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// ShowCusRBTN
			// 
			this->ShowCusRBTN->AutoSize = true;
			this->ShowCusRBTN->Location = System::Drawing::Point(26, 77);
			this->ShowCusRBTN->Margin = System::Windows::Forms::Padding(2);
			this->ShowCusRBTN->Name = L"ShowCusRBTN";
			this->ShowCusRBTN->Size = System::Drawing::Size(104, 17);
			this->ShowCusRBTN->TabIndex = 4;
			this->ShowCusRBTN->Text = L"Show Customers";
			this->ShowCusRBTN->UseVisualStyleBackColor = true;
			this->ShowCusRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ShowCusRBTN_CheckedChanged);
			// 
			// DelCusRBTN
			// 
			this->DelCusRBTN->AutoSize = true;
			this->DelCusRBTN->Location = System::Drawing::Point(26, 55);
			this->DelCusRBTN->Name = L"DelCusRBTN";
			this->DelCusRBTN->Size = System::Drawing::Size(108, 17);
			this->DelCusRBTN->TabIndex = 5;
			this->DelCusRBTN->Text = L"Delete Customers";
			this->DelCusRBTN->UseVisualStyleBackColor = true;
			this->DelCusRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DelCusRBTN_CheckedChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleName = L"";
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage10);
			this->tabControl1->Controls->Add(this->tabPage11);
			this->tabControl1->Controls->Add(this->tabPage12);
			this->tabControl1->Controls->Add(this->tabPage13);
			this->tabControl1->Controls->Add(this->tabPage14);
			this->tabControl1->Location = System::Drawing::Point(10, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(897, 302);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Tag = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 444);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"SQL Query";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region ScheduleTabHelpers

		// rebuilds tabPage5 with our customer→car→service→tech controls
	private:
		//void InitializeScheduleTab();
		// handlers for the cascading drop‐downs and the “Schedule” button
		//System::Void cbCustomer_SelectedIndexChanged(Object^ sender, EventArgs^ e);
		//System::Void cbService_SelectedIndexChanged(Object^ sender, EventArgs^ e);
		//System::Void btnSched_Click(Object^ sender, EventArgs^ e);

#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->InitializeScheduleTab();

		try {
			String^ connString =
				L"Data Source=localhost\\sqlexpress;"
				"Initial Catalog=Auto_Projectt;"
				"Integrated Security=True";

			SqlConnection^ cn = gcnew SqlConnection(connString);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(
				"SELECT Service_ID, Service FROM Services ORDER BY Service",
				cn
			);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);

			comboBox4->DataSource = dt;
			comboBox4->DisplayMember = "Service";     // what the user sees
			comboBox4->ValueMember = "Service_ID";  // hidden ID you can retrieve
			comboBox4->DropDownStyle = ComboBoxStyle::DropDownList;
			comboBox4->SelectedIndex = -1;
		}
		catch (Exception^ ex) {
			MessageBox::Show(
				"Error loading services: " + ex->Message,
				"Database Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error
			);
		}

		try {
			String^ connString =
				L"Data Source=localhost\\sqlexpress;"
				"Initial Catalog=Auto_Projectt;"
				"Integrated Security=True";

			SqlConnection^ cn = gcnew SqlConnection(connString);
			SqlDataAdapter^ daTech = gcnew SqlDataAdapter(
				"SELECT Tech_ID, Tech_FN + ' ' + Tech_LN AS TechName "
				"  FROM Technician "
				" ORDER BY TechName",
				cn
			);
			DataTable^ dtTech = gcnew DataTable();
			daTech->Fill(dtTech);

			comboBox2->DataSource = dtTech;
			comboBox2->DisplayMember = "TechName";   // what the user sees
			comboBox2->ValueMember = "Tech_ID";    // hidden ID you retrieve
			comboBox2->DropDownStyle = ComboBoxStyle::DropDownList;
			comboBox2->SelectedIndex = -1;
		}
		catch (Exception^ ex) {
			MessageBox::Show(
				"Error loading technicians: " + ex->Message,
				"Database Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error
			);
		}

		try {
			String^ connString =
				L"Data Source=localhost\\sqlexpress;"
				"Initial Catalog=Auto_Projectt;"
				"Integrated Security=True";

			SqlConnection^ cn = gcnew SqlConnection(connString);
			SqlDataAdapter^ daCust = gcnew SqlDataAdapter(
				"SELECT Cust_ID, Cust_FN + ' ' + Cust_LN AS CustName "
				"  FROM Customer "
				" ORDER BY CustName",
				cn
			);
			DataTable^ dtCust = gcnew DataTable();
			daCust->Fill(dtCust);

			comboBox5->DataSource = dtCust;
			comboBox5->DisplayMember = "CustName";   // what the user sees
			comboBox5->ValueMember = "Cust_ID";    // hidden ID you pull back
			comboBox5->DropDownStyle = ComboBoxStyle::DropDownList;
			comboBox5->SelectedIndex = -1;
		}
		catch (Exception^ ex) {
			MessageBox::Show(
				"Error loading customers: " + ex->Message,
				"Database Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error
			);
		}

	}

	private:
		void MyForm::InitializeScheduleTab()
		{
			tabPage5->AutoScroll = true;
			tabPage5->Controls->Clear();

			// 2) Customer selector
			Label^ lblCust = gcnew Label();
			lblCust->Text = "Customer:";
			lblCust->Location = Drawing::Point(20, 20);
			tabPage5->Controls->Add(lblCust);

			ComboBox^ cbCustomer = gcnew ComboBox();
			cbCustomer->Name = "cbCustomer";
			cbCustomer->Location = Drawing::Point(120, 18);
			cbCustomer->Width = 200;
			cbCustomer->DropDownStyle = ComboBoxStyle::DropDownList;
			tabPage5->Controls->Add(cbCustomer);

			// 3) Car selector
			Label^ lblCar = gcnew Label();
			lblCar->Text = "Car (Plate):";
			lblCar->Location = Drawing::Point(20, 60);
			tabPage5->Controls->Add(lblCar);

			ComboBox^ cbCar = gcnew ComboBox();
			cbCar->Name = "cbCar";
			cbCar->Location = Drawing::Point(120, 58);
			cbCar->Width = 200;
			cbCar->DropDownStyle = ComboBoxStyle::DropDownList;
			tabPage5->Controls->Add(cbCar);

			// 4) Services multiselect
			Label^ lblSvc = gcnew Label();
			lblSvc->Text = "Services:";
			lblSvc->Location = Drawing::Point(20, 100);
			tabPage5->Controls->Add(lblSvc);

			CheckedListBox^ clbServices = gcnew CheckedListBox();
			clbServices->Name = "clbServices";
			clbServices->Location = Drawing::Point(120, 98);
			clbServices->Size = Drawing::Size(200, 80);
			clbServices->CheckOnClick = true;
			tabPage5->Controls->Add(clbServices);

			// Panel that will hold one ComboBox per checked service
			Panel^ pnlTech = gcnew Panel();
			pnlTech->Name = "pnlTech";
			pnlTech->Location = Drawing::Point(350, 100);
			pnlTech->Size = Drawing::Size(300, 200);
			tabPage5->Controls->Add(pnlTech);

			// 5) Date & Time
			Label^ lblDate = gcnew Label();
			lblDate->Text = "Date:";
			lblDate->Location = Drawing::Point(20, 200);
			tabPage5->Controls->Add(lblDate);

			DateTimePicker^ dtpDate = gcnew DateTimePicker();
			dtpDate->Name = "dtpDate";
			dtpDate->Format = DateTimePickerFormat::Short;
			dtpDate->Location = Drawing::Point(120, 198);
			tabPage5->Controls->Add(dtpDate);

			Label^ lblTime = gcnew Label();
			lblTime->Text = "Time:";
			lblTime->Location = Drawing::Point(20, 240);
			tabPage5->Controls->Add(lblTime);

			DateTimePicker^ dtpTime = gcnew DateTimePicker();
			dtpTime->Name = "dtpTime";
			dtpTime->Format = DateTimePickerFormat::Time;
			dtpTime->ShowUpDown = true;
			dtpTime->Location = Drawing::Point(120, 238);
			tabPage5->Controls->Add(dtpTime);

			// 6) Schedule button
			Button^ btnSched = gcnew Button();
			btnSched->Text = "Schedule";
			btnSched->Location = Drawing::Point(120, 280);
			btnSched->Click += gcnew EventHandler(this, &MyForm::btnSched_Click);
			tabPage5->Controls->Add(btnSched);

			// --- populate Customer & Services lists ---
			String^ cs = "Data Source=localhost\\sqlexpress;"
				"Initial Catalog=Auto_Projectt;"
				"Integrated Security=True";
			SqlConnection^ conn = gcnew SqlConnection(cs);
			conn->Open();

			// Customers
			{
				String^ sql = "SELECT Cust_ID, Cust_FN + ' ' + Cust_LN AS CustName FROM Customer";
				SqlDataAdapter^ da = gcnew SqlDataAdapter(sql, conn);
				DataTable^ dt = gcnew DataTable(); da->Fill(dt);
				cbCustomer->DataSource = dt;
				cbCustomer->DisplayMember = "CustName";
				cbCustomer->ValueMember = "Cust_ID";
				cbCustomer->SelectedIndex = -1;
			}

			// Services
			{
				String^ sql = "SELECT Service_ID, Service FROM Services";
				SqlDataAdapter^ da = gcnew SqlDataAdapter(sql, conn);
				DataTable^ dt = gcnew DataTable(); da->Fill(dt);
				clbServices->DataSource = dt;
				clbServices->DisplayMember = "Service";
				clbServices->ValueMember = "Service_ID";
			}

			conn->Close();

			// --- wire up dynamic behaviour ---
			cbCustomer->SelectedIndexChanged += gcnew EventHandler(this, &MyForm::cbCustomer_SelectedIndexChanged);
			clbServices->ItemCheck += gcnew ItemCheckEventHandler(this, &MyForm::clbServices_ItemCheck);
		}

	private: System::Void MyForm::clbServices_ItemCheck(Object^ /*sender*/, ItemCheckEventArgs^ /*e*/)
	{
		// schedule for *after* the control’s own state update
		this->BeginInvoke(gcnew Action(this, &MyForm::RebuildTechPickers));
	}


	private: void MyForm::RebuildTechPickers()
	{
		String^ cs = "Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";

		auto pnl = safe_cast<Panel^>(tabPage5->Controls["pnlTech"]);
		auto clb = safe_cast<CheckedListBox^>(tabPage5->Controls["clbServices"]);
		pnl->Controls->Clear();

		int y = 0;
		for (int i = 0; i < clb->Items->Count; i++)
		{
			if (!clb->GetItemChecked(i)) continue;

			// get the bound row
			auto drv = safe_cast<DataRowView^>(clb->Items[i]);
			int svcId = safe_cast<int>(drv->Row["Service_ID"]);
			String^ svc = drv->Row["Service"]->ToString();

			// label
			Label^ lbl = gcnew Label();
			lbl->AutoSize = true;
			lbl->Text = "Tech for " + svc + ":";
			lbl->Location = Drawing::Point(0, y);
			pnl->Controls->Add(lbl);

			// combo
			ComboBox^ cbT = gcnew ComboBox();
			cbT->Name = "cbTech_" + svcId;
			cbT->Location = Drawing::Point(120, y);
			cbT->Width = 160;
			cbT->DropDownStyle = ComboBoxStyle::DropDownList;
			pnl->Controls->Add(cbT);

			// fill it
			{
				SqlConnection^ conn = gcnew SqlConnection(cs);
				conn->Open();
				String^ sql =
					"SELECT ts.Tech_Service_ID, "
					"       t.Tech_FN + ' ' + t.Tech_LN AS TechName "
					"  FROM Tech_To_Service ts "
					"  JOIN Technician t ON ts.Tech_ID=t.Tech_ID "
					" WHERE ts.Service_ID = @sid";
				SqlDataAdapter^ da = gcnew SqlDataAdapter(sql, conn);
				da->SelectCommand->Parameters->AddWithValue("@sid", svcId);
				DataTable^ dt = gcnew DataTable(); da->Fill(dt);

				cbT->DataSource = dt;
				cbT->DisplayMember = "TechName";
				cbT->ValueMember = "Tech_Service_ID";
				cbT->SelectedIndex = -1;
				conn->Close();
			}

			y += 30;
		}
	}


	private: System::Void MyForm::cbCustomer_SelectedIndexChanged(Object^ /*sender*/, EventArgs^ /*e*/)
	{
		auto cbCust = safe_cast<ComboBox^>(tabPage5->Controls["cbCustomer"]);
		auto cbCar = safe_cast<ComboBox^>(tabPage5->Controls["cbCar"]);
		cbCar->DataSource = nullptr;

		if (cbCust->SelectedIndex < 0) return;

		int custId = safe_cast<int>(cbCust->SelectedValue);
		String^ cs = "Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		SqlConnection^ conn = gcnew SqlConnection(cs);
		conn->Open();

		String^ sql =
			"SELECT co.Car_ID, c.License_Plate "
			"  FROM Car_Owner co "
			"  JOIN Car c ON co.Car_ID=c.Car_ID "
			" WHERE co.Cust_ID=@cid";
		SqlDataAdapter^ da = gcnew SqlDataAdapter(sql, conn);
		da->SelectCommand->Parameters->AddWithValue("@cid", custId);

		DataTable^ dt = gcnew DataTable(); da->Fill(dt);
		cbCar->DataSource = dt;
		cbCar->DisplayMember = "License_Plate";
		cbCar->ValueMember = "Car_ID";
		cbCar->SelectedIndex = -1;

		conn->Close();
	}

	private: System::Void cbService_SelectedIndexChanged(Object^ s, EventArgs^ e)
	{
		ComboBox^ cbSvc = safe_cast<ComboBox^>(tabPage5->Controls["cbService"]);
		ComboBox^ cbTech = safe_cast<ComboBox^>(tabPage5->Controls["cbTech"]);
		cbTech->DataSource = nullptr;

		if (cbSvc->SelectedIndex < 0) return;

		int svcId = safe_cast<int>(cbSvc->SelectedValue);
		String^ cs = "Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		SqlConnection^ conn = gcnew SqlConnection(cs);
		conn->Open();

		String^ sql =
			"SELECT ts.Tech_Service_ID, t.Tech_FN + ' ' + t.Tech_LN AS TechName "
			"FROM Tech_To_Service ts "
			"JOIN Technician t ON ts.Tech_ID = t.Tech_ID "
			"WHERE ts.Service_ID = @sid";
		SqlDataAdapter^ da = gcnew SqlDataAdapter(sql, conn);
		da->SelectCommand->Parameters->AddWithValue("@sid", svcId);

		DataTable^ dt = gcnew DataTable(); da->Fill(dt);
		cbTech->DataSource = dt;
		cbTech->DisplayMember = "TechName";
		cbTech->ValueMember = "Tech_Service_ID";
		cbTech->SelectedIndex = -1;

		conn->Close();
	}


		   // ----------------------------------------------------------------
		   // Takes everything and writes one date + N tech‑service links
		   // ----------------------------------------------------------------
	private: System::Void MyForm::btnSched_Click(Object^ /*sender*/, EventArgs^ /*e*/)
	{
		auto cbCust = safe_cast<ComboBox^>(tabPage5->Controls["cbCustomer"]);
		auto cbCar = safe_cast<ComboBox^>(tabPage5->Controls["cbCar"]);
		auto clb = safe_cast<CheckedListBox^>(tabPage5->Controls["clbServices"]);
		auto dtpDate = safe_cast<DateTimePicker^>(tabPage5->Controls["dtpDate"]);
		auto dtpTime = safe_cast<DateTimePicker^>(tabPage5->Controls["dtpTime"]);
		auto pnl = safe_cast<Panel^>(tabPage5->Controls["pnlTech"]);

		if (cbCust->SelectedIndex < 0 ||
			cbCar->SelectedIndex < 0 ||
			clb->CheckedItems->Count == 0)
		{
			MessageBox::Show("Please pick customer, car, and at least one service.",
				"Missing Data", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// gather each chosen tech‑service ID
		List<int>^ techSvcIds = gcnew List<int>();
		for each(Control ^ ctl in pnl->Controls)
		{
			if (auto cb = dynamic_cast<ComboBox^>(ctl))
			{
				if (cb->SelectedIndex < 0)
				{
					MessageBox::Show("Select a technician for every service.",
						"Missing Tech", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
				techSvcIds->Add(safe_cast<int>(cb->SelectedValue));
			}
		}

		int carOwnerId = safe_cast<int>(cbCar->SelectedValue);
		DateTime svcDate = dtpDate->Value.Date;
		DateTime svcTime = dtpTime->Value;

		String^ cs = "Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		try
		{
			SqlConnection^ conn = gcnew SqlConnection(cs);
			conn->Open();

			// 1) insert one date record
			SqlCommand^ cmd1 = gcnew SqlCommand(
				"INSERT INTO Cust_Car_ServiceDate_Time (Cust_Car_ID, Service_Date, Service_Time) "
				" OUTPUT INSERTED.Cust_Car_Date_ID "
				" VALUES (@ccid,@sd,@st)", conn);
			cmd1->Parameters->AddWithValue("@ccid", carOwnerId);
			cmd1->Parameters->AddWithValue("@sd", svcDate);
			cmd1->Parameters->AddWithValue("@st", svcTime);
			int newDateId = safe_cast<int>(cmd1->ExecuteScalar());

			// 2) loop and link each tech‑service
			for each(int tsid in techSvcIds)
			{
				SqlCommand^ cmd2 = gcnew SqlCommand(
					"INSERT INTO Car_ServiceDate_Services "
					"(Cust_Car_Date_ID, Tech_Service_ID) VALUES (@did,@tsid)", conn);
				cmd2->Parameters->AddWithValue("@did", newDateId);
				cmd2->Parameters->AddWithValue("@tsid", tsid);
				cmd2->ExecuteNonQuery();
			}

			conn->Close();
			MessageBox::Show("All services scheduled!", "Success",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message, "DB Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}




	private: System::Void ExecuteBTN_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void testToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   // Example function: CreateAddCustomerControls
	private: System::Void CreateAddCustomerControls() {
		// First, clear any existing controls on the Customer tab (tabPage1)
		tabPage1->Controls->Clear();

		// Create a label for the Customer Name
		Label^ lblName = gcnew Label();
		lblName->Text = "Customer Name:";
		lblName->Location = System::Drawing::Point(20, 20);
		tabPage1->Controls->Add(lblName);

		// Create a textbox for the Customer Name
		TextBox^ txtName = gcnew TextBox();
		txtName->Location = System::Drawing::Point(150, 20);
		txtName->Width = 200;
		tabPage1->Controls->Add(txtName);

		// Create a label for the Customer Email
		Label^ lblEmail = gcnew Label();
		lblEmail->Text = "Email:";
		lblEmail->Location = System::Drawing::Point(20, 60);
		tabPage1->Controls->Add(lblEmail);

		// Create a textbox for the Email
		TextBox^ txtEmail = gcnew TextBox();
		txtEmail->Location = System::Drawing::Point(150, 60);
		txtEmail->Width = 200;
		tabPage1->Controls->Add(txtEmail);

		// Create a button to submit the new customer
		Button^ btnSubmit = gcnew Button();
		btnSubmit->Text = "Add Customer";
		btnSubmit->Location = System::Drawing::Point(150, 100);
		btnSubmit->Click += gcnew System::EventHandler(this, &MyForm::btnSubmitCustomer_Click);
		tabPage1->Controls->Add(btnSubmit);
	}


		   // Example event handler for the dynamically created submit button:
	private: System::Void btnSubmitCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
		try {
			SqlConnection^ conn = gcnew SqlConnection(connString);
			conn->Open();

			SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Customer (Cust_FN, Cust_LN, Phone) VALUES (@firstName, @lastName, @phone)", conn);
			//cmd->Parameters->AddWithValue("@firstName", firstName);
			//cmd->Parameters->AddWithValue("@lastName", lastName);
			//cmd->Parameters->AddWithValue("@phone", phone);

			int rowsAffected = cmd->ExecuteNonQuery();
			MessageBox::Show("Customer added successfully! Rows affected: " + rowsAffected);
			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddCustRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Customer Details";
			inputForm->Size = System::Drawing::Size(350, 300);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			Label^ lblID = gcnew Label();
			lblID->Text = "First Name:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "Last Name:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			TextBox^ txtFirstName = gcnew TextBox();
			txtFirstName->Location = System::Drawing::Point(120, 60);
			txtFirstName->Width = 200;
			inputForm->Controls->Add(txtFirstName);

			// Last Name label and textbox
			Label^ lblLastName = gcnew Label();
			lblLastName->Text = "Phone Number:";
			lblLastName->Location = System::Drawing::Point(10, 100);
			lblLastName->AutoSize = true;
			inputForm->Controls->Add(lblLastName);

			TextBox^ txtLastName = gcnew TextBox();
			txtLastName->Location = System::Drawing::Point(120, 100);
			txtLastName->Width = 200;
			inputForm->Controls->Add(txtLastName);



			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 190);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{

				String^ firstName = txtID->Text;
				String^ lastName = txtFirstName->Text;
				String^ phone = txtLastName->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Customer (Cust_FN, Cust_LN, Phone_Num) VALUES (@firstName, @lastName, @phone)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);

					cmd->Parameters->AddWithValue("@firstName", firstName);
					cmd->Parameters->AddWithValue("@lastName", lastName);
					cmd->Parameters->AddWithValue("@phone", phone);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}
		AddCustRBTN->Checked = false;

	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (DelCarRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Customer Details";
			inputForm->Size = System::Drawing::Size(350, 200);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// ID label and textbox
			Label^ lblID = gcnew Label();
			lblID->Text = "ID:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);


			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 100);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Retrieve user input
				String^ id = txtID->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "DELETE FROM Car WHERE Car_ID = @id";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}



		DelCusRBTN->Checked = false;

	}

	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddCarRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Car Details";
			inputForm->Size = System::Drawing::Size(400, 300);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// License Plate
			Label^ lblPlate = gcnew Label();
			lblPlate->Text = "License Plate:";
			lblPlate->Location = System::Drawing::Point(10, 20);
			inputForm->Controls->Add(lblPlate);

			TextBox^ txtPlate = gcnew TextBox();
			txtPlate->Location = System::Drawing::Point(120, 20);
			txtPlate->Width = 200;
			inputForm->Controls->Add(txtPlate);

			// ComboBox
			Label^ lblMake = gcnew Label();
			lblMake->Text = "Make:";
			lblMake->Location = System::Drawing::Point(10, 60);
			inputForm->Controls->Add(lblMake);

			ComboBox^ comboMake = gcnew ComboBox();
			comboMake->DropDownStyle = ComboBoxStyle::DropDownList;
			comboMake->Location = System::Drawing::Point(120, 60);
			comboMake->Width = 200;
			inputForm->Controls->Add(comboMake);

			// Make combo
			String^ connStr = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
			SqlConnection^ conn = gcnew SqlConnection(connStr);
			conn->Open();
			SqlCommand^ cmdMake = gcnew SqlCommand("SELECT Make FROM Make", conn);
			SqlDataReader^ rdrMake = cmdMake->ExecuteReader();
			while (rdrMake->Read()) {
				comboMake->Items->Add(rdrMake["Make"]->ToString());
			}
			rdrMake->Close();

			// Model ComboBox
			Label^ lblModel = gcnew Label();
			lblModel->Text = "Model:";
			lblModel->Location = System::Drawing::Point(10, 100);
			inputForm->Controls->Add(lblModel);

			ComboBox^ comboModel = gcnew ComboBox();
			comboModel->DropDownStyle = ComboBoxStyle::DropDownList;
			comboModel->Location = System::Drawing::Point(120, 100);
			comboModel->Width = 200;
			inputForm->Controls->Add(comboModel);

			// Populate Model combo
			SqlCommand^ cmdModel = gcnew SqlCommand("SELECT Model FROM Model", conn);
			SqlDataReader^ rdrModel = cmdModel->ExecuteReader();
			while (rdrModel->Read()) {
				comboModel->Items->Add(rdrModel["Model"]->ToString());
			}
			rdrModel->Close();
			conn->Close();

			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 150);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK;
			inputForm->Controls->Add(btnOK);

			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ plate = txtPlate->Text;
				String^ make = comboMake->Text;
				String^ model = comboModel->Text;

				try {
					conn->Open();

					// Lookup Make_ID
					SqlCommand^ getMakeId = gcnew SqlCommand("SELECT Make_ID FROM Make WHERE Make = @make", conn);
					getMakeId->Parameters->AddWithValue("@make", make);

					Object^ makeObj = getMakeId->ExecuteScalar();

					// Lookup Model_ID
					SqlCommand^ getModelId = gcnew SqlCommand("SELECT Model_ID FROM Model WHERE Model = @model", conn);
					getModelId->Parameters->AddWithValue("@model", model);

					Object^ modelObj = getModelId->ExecuteScalar();

					if (makeObj != nullptr && modelObj != nullptr) {
						int makeId = safe_cast<int>(makeObj);
						int modelId = safe_cast<int>(modelObj);

						SqlCommand^ insertCar = gcnew SqlCommand("INSERT INTO Car (License_Plate, Make_ID, Model_ID) VALUES (@plate, @makeId, @modelId)", conn);
						insertCar->Parameters->AddWithValue("@plate", plate);
						insertCar->Parameters->AddWithValue("@makeId", makeId);
						insertCar->Parameters->AddWithValue("@modelId", modelId);
						insertCar->ExecuteNonQuery();

						MessageBox::Show("Car added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else {
						MessageBox::Show("Make or Model not found in database.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			AddCarRBTN->Checked = false;
		}
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddSerRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Service Details";
			inputForm->Size = System::Drawing::Size(350, 300);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// ID label and textbox
			Label^ lblID = gcnew Label();
			lblID->Text = "Service:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "Cost:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			TextBox^ txtFirstName = gcnew TextBox();
			txtFirstName->Location = System::Drawing::Point(120, 60);
			txtFirstName->Width = 200;
			inputForm->Controls->Add(txtFirstName);


			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 190);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Retrieve user input
				String^ Service = txtID->Text;
				String^ Cost = txtFirstName->Text;


				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Services (Service, Cost) VALUES (@Service, @Cost)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@Service", Service);
					cmd->Parameters->AddWithValue("@Cost", Cost);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}


		AddSerRBTN->Checked = false;

	}
	private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (SchedCusRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Details";
			inputForm->Size = System::Drawing::Size(350, 300);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// ID label and textbox
			Label^ lblID = gcnew Label();
			lblID->Text = "Customer ID:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "License Plate:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			ComboBox^ comboBox4 = gcnew ComboBox();
			comboBox4->DropDownStyle = ComboBoxStyle::DropDownList;
			comboBox4->FormattingEnabled = true;
			comboBox4->Items->AddRange(gcnew cli::array< System::Object^ >(3) { L"Cust1info", L"C2info", L"C3" });
			comboBox4->Location = System::Drawing::Point(120, 60);
			comboBox4->Name = L"comboBox3";
			comboBox4->Size = System::Drawing::Size(121, 24);
			comboBox4->TabIndex = 9;

			// Add the ComboBox to the popout form (inputForm)
			inputForm->Controls->Add(comboBox4);
			String^ txtFirstName = comboBox4->Text; // or comboBox1->SelectedItem->ToString();


			// Last Name label and textbox
			Label^ lblLastName = gcnew Label();
			lblLastName->Text = "Date and Time:";
			lblLastName->Location = System::Drawing::Point(10, 100);
			lblLastName->AutoSize = true;
			inputForm->Controls->Add(lblLastName);


			// dateTimePicker1
			// 
			DateTimePicker^ dateTimePicker1 = gcnew DateTimePicker();
			dateTimePicker1->Format = DateTimePickerFormat::Custom; // Enable custom format
			dateTimePicker1->CustomFormat = "MM/dd/yyyy hh:mm tt"; // Format: Date + 12-hour time with AM/PM
			dateTimePicker1->ShowUpDown = true; // Removes the calendar dropdown, allows manual adjustment
			dateTimePicker1->Location = System::Drawing::Point(120, 100);
			dateTimePicker1->Name = L"dateTimePicker1";
			dateTimePicker1->Size = System::Drawing::Size(200, 22);
			dateTimePicker1->TabIndex = 6;
			dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			inputForm->Controls->Add(dateTimePicker1);

			// Phone Number label and textbox
			Label^ lblPhone = gcnew Label();
			lblPhone->Text = "Pick Service:";
			lblPhone->Location = System::Drawing::Point(10, 140);
			lblPhone->AutoSize = true;
			inputForm->Controls->Add(lblPhone);

			TextBox^ txtPhone = gcnew TextBox();
			txtPhone->Location = System::Drawing::Point(120, 140);
			txtPhone->Width = 200;
			inputForm->Controls->Add(txtPhone);

			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 190);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Retrieve user input
				String^ id = txtID->Text;
				String^ CCID = txtFirstName;
				//String^ SD = txtLastName->Text; IMPORTANT JUST LAZY RN
				String^ ST = txtPhone->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Cust_Car_ServiceDate_Time (Cust_Car_Date_ID, Cust_Car_ID, Service_Date, Service_Time) VALUES (@id, @CCID, @SD, @ST)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);
					cmd->Parameters->AddWithValue("@CCID", CCID);
					//cmd->Parameters->AddWithValue("@SD", SD); ALSO IMPORTANT JUST LAZY RN
					cmd->Parameters->AddWithValue("@ST", ST);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}
		SchedCusRBTN->Checked = false;


	}
	private: System::Void DelCusRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (DelCusRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Customer Details";
			inputForm->Size = System::Drawing::Size(350, 200);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// ID label and textbox
			Label^ lblID = gcnew Label();
			lblID->Text = "ID:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);


			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 100);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Retrieve user input
				String^ id = txtID->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "DELETE FROM Customer WHERE Cust_ID = @id";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}
		DelCusRBTN->Checked = false;

	}
	private: System::Void RemSerRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (RemSerRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Service Details";
			inputForm->Size = System::Drawing::Size(350, 200);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// ID label and textbox
			Label^ lblID = gcnew Label();
			lblID->Text = "Service ID:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);


			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 100);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Retrieve user input
				String^ id = txtID->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "DELETE FROM Services WHERE Service_ID = @id";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}
		RemSerRBTN->Checked = false;

	}
	private: System::Void AddTechRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddTechRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Tech Details";
			inputForm->Size = System::Drawing::Size(350, 300);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// ID label and textbox
			Label^ lblID = gcnew Label();
			lblID->Text = "First Name:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "Last Name:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			TextBox^ txtFirstName = gcnew TextBox();
			txtFirstName->Location = System::Drawing::Point(120, 60);
			txtFirstName->Width = 200;
			inputForm->Controls->Add(txtFirstName);


			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 190);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Retrieve user input
				String^ FN = txtID->Text;
				String^ LN = txtFirstName->Text;


				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Technician (Tech_FN, Tech_LN) VALUES (@FN, @LN)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@FN", FN);
					cmd->Parameters->AddWithValue("@LN", LN);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}

		AddTechRBTN->Checked = false;

	}
	private: System::Void RemTechRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (RemTechRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Tech Details";
			inputForm->Size = System::Drawing::Size(350, 200);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// ID label and textbox
			Label^ lblID = gcnew Label();
			lblID->Text = "Tech ID:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);


			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 100);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Retrieve user input
				String^ id = txtID->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "DELETE FROM Technician WHERE Tech_ID = @id";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}

		RemTechRBTN->Checked = false;

	}


	private: System::Void AddSerToTechRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddSerToTechRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Assign Service to Technician";
			inputForm->Size = System::Drawing::Size(350, 250);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// combobox1
			Label^ lblTech = gcnew Label();
			lblTech->Text = "Select Technician:";
			lblTech->Location = System::Drawing::Point(10, 20);
			inputForm->Controls->Add(lblTech);

			ComboBox^ cbTech = gcnew ComboBox();
			cbTech->DropDownStyle = ComboBoxStyle::DropDownList;
			cbTech->Location = System::Drawing::Point(130, 20);
			cbTech->Size = System::Drawing::Size(180, 24);
			inputForm->Controls->Add(cbTech);

			// combobox2
			Label^ lblService = gcnew Label();
			lblService->Text = "Select Service:";
			lblService->Location = System::Drawing::Point(10, 60);
			inputForm->Controls->Add(lblService);

			ComboBox^ cbService = gcnew ComboBox();
			cbService->DropDownStyle = ComboBoxStyle::DropDownList;
			cbService->Location = System::Drawing::Point(130, 60);
			cbService->Size = System::Drawing::Size(180, 24);
			inputForm->Controls->Add(cbService);

			// Populate Technician combo box
			{
				String^ connStr = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				SqlConnection^ conn = gcnew SqlConnection(connStr);
				conn->Open();
				SqlCommand^ cmd = gcnew SqlCommand("SELECT Tech_ID, Tech_FN + ' ' + Tech_LN AS TechName FROM Technician", conn);
				SqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read()) {
					cbTech->Items->Add(reader["Tech_ID"]->ToString() + " - " + reader["TechName"]->ToString());
				}
				reader->Close();
				conn->Close();
			}

			// Populate Services combo box
			{
				String^ connStr = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				SqlConnection^ conn = gcnew SqlConnection(connStr);
				conn->Open();
				SqlCommand^ cmd = gcnew SqlCommand("SELECT Service_ID, Service FROM Services", conn);
				SqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read()) {
					cbService->Items->Add(reader["Service_ID"]->ToString() + " - " + reader["Service"]->ToString());
				}
				reader->Close();
				conn->Close();
			}

			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(130, 110);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK;
			inputForm->Controls->Add(btnOK);

			// Show form and handle insert
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if (cbTech->SelectedIndex >= 0 && cbService->SelectedIndex >= 0) {
					String^ techID = cbTech->Text->Split('-')[0]->Trim();
					String^ serviceID = cbService->Text->Split('-')[0]->Trim();

					String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
					try {
						SqlConnection^ conn = gcnew SqlConnection(connString);
						conn->Open();

						String^ query = "INSERT INTO Tech_To_Service (Tech_ID, Service_ID) VALUES (@TID, @SID)";
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						cmd->Parameters->AddWithValue("@TID", techID);
						cmd->Parameters->AddWithValue("@SID", serviceID);

						int rowsAffected = cmd->ExecuteNonQuery();
						MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
							"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

						conn->Close();
					}
					catch (Exception^ ex) {
						MessageBox::Show("Error: " + ex->Message,
							"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}

			AddSerToTechRBTN->Checked = false;
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Tech Details";
			inputForm->Size = System::Drawing::Size(350, 300);
			inputForm->StartPosition = FormStartPosition::CenterParent;

			// ID label and textbox
			Label^ lblID = gcnew Label();
			lblID->Text = "Schedule ID:";
			lblID->Location = System::Drawing::Point(10, 20);
			lblID->AutoSize = true;
			inputForm->Controls->Add(lblID);

			TextBox^ txtID = gcnew TextBox();
			txtID->Location = System::Drawing::Point(120, 20);
			txtID->Width = 200;
			inputForm->Controls->Add(txtID);




			// ID label and textbox
			Label^ tID = gcnew Label();
			tID->Text = "Qualified Tech:";
			tID->Location = System::Drawing::Point(10, 60);
			tID->AutoSize = true;
			inputForm->Controls->Add(tID);

			ComboBox^ comboBox5 = gcnew ComboBox();
			comboBox5->DropDownStyle = ComboBoxStyle::DropDownList;
			comboBox5->FormattingEnabled = true;
			comboBox5->Items->AddRange(gcnew cli::array< System::Object^ >(2) { L"qualified tech1", L"qualified tech2" });
			comboBox5->Location = System::Drawing::Point(120, 60);
			comboBox5->Name = L"comboBox5";
			comboBox5->Size = System::Drawing::Size(121, 24);
			comboBox5->TabIndex = 9;
			inputForm->Controls->Add(comboBox5);


			// OK button
			Button^ btnOK = gcnew Button();
			btnOK->Text = "OK";
			btnOK->Location = System::Drawing::Point(120, 190);
			btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			inputForm->AcceptButton = btnOK; // Allows Enter to click the button
			inputForm->Controls->Add(btnOK);

			// Show the form modally
			if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Retrieve user input
				String^ FN = txtID->Text;
				String^ LN = comboBox5->Text;


				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Technician (Tech_ID, Tech_FN, Tech_LN) VALUES (@id, @FN, @LN)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@FN", FN);
					cmd->Parameters->AddWithValue("@LN", LN);

					int rowsAffected = cmd->ExecuteNonQuery();
					MessageBox::Show("Inserted successfully! Rows affected: " + rowsAffected.ToString(),
						"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					conn->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message,
						"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}

		radioButton2->Checked = false;
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage8_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void dateTimePicker1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1) grab the selected date
		DateTime serviceDate = dateTimePicker1->Value.Date;

		// 2) pull the data into a DataTable
		String^ connString = L"Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		SqlConnection^ cn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand("sp_GetJobsByDate", cn);
		cmd->CommandType = CommandType::StoredProcedure;
		cmd->Parameters->AddWithValue("@ServiceDate", serviceDate);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		// 3) build the pop-up form
		Form^ popup = gcnew Form();
		popup->Text = String::Format("Jobs on {0:D}", serviceDate);
		popup->Size = Drawing::Size(900, 600);
		popup->StartPosition = FormStartPosition::CenterParent;

		// 4) put a DataGridView in it (will auto-show scrollbars)
		DataGridView^ grid = gcnew DataGridView();
		grid->Dock = DockStyle::Fill;
		grid->DataSource = dt;
		grid->ReadOnly = true;
		grid->AllowUserToAddRows = false;
		grid->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
		grid->ScrollBars = ScrollBars::Both;

		popup->Controls->Add(grid);

		// 5) show it modally
		popup->ShowDialog(this);
	}

	private: System::Void tabPage7_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1) Read the service and date range from your controls
		String^ svc = comboBox4->Text;
		DateTime from = dateTimePicker2->Value.Date;
		DateTime to = dateTimePicker3->Value.Date;

		// 2) Query the stored procedure into a DataTable
		String^ connString = L"Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		SqlConnection^ cn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand("sp_CountServiceByDateRange", cn);
		cmd->CommandType = CommandType::StoredProcedure;
		cmd->Parameters->AddWithValue("@Service", svc);
		cmd->Parameters->AddWithValue("@StartDate", from);
		cmd->Parameters->AddWithValue("@EndDate", to);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		// 3) Build the pop-up Form
		Form^ popup = gcnew Form();
		popup->Text = String::Format(
			"{0} count from {1:d} to {2:d}",
			svc, from, to
		);
		popup->Size = Drawing::Size(600, 400);
		popup->StartPosition = FormStartPosition::CenterParent;

		// 4) Embed a DataGridView (auto-scrolls if needed)
		DataGridView^ grid = gcnew DataGridView();
		grid->Dock = DockStyle::Fill;
		grid->DataSource = dt;
		grid->ReadOnly = true;
		grid->AllowUserToAddRows = false;
		grid->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
		grid->ScrollBars = ScrollBars::Both;

		popup->Controls->Add(grid);

		// 5) Show it modally
		popup->ShowDialog(this);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// 1) Grab the date‐range from your pickers
		DateTime from = dateTimePicker4->Value.Date;
		DateTime to = dateTimePicker5->Value.Date;

		// 2) Set up and call the stored procedure
		String^ connString = L"Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		SqlConnection^ cn = gcnew SqlConnection(connString);
		SqlCommand^ cm = gcnew SqlCommand("sp_TotalRevenueByDateRange", cn);
		cm->CommandType = CommandType::StoredProcedure;
		cm->Parameters->AddWithValue("@StartDate", from);
		cm->Parameters->AddWithValue("@EndDate", to);

		cn->Open();
		Object^ totalObj = cm->ExecuteScalar();
		cn->Close();

		// 3) Safely convert DBNull or nullptr → 0
		Decimal totalVal = (totalObj == nullptr || Convert::IsDBNull(totalObj))
			? System::Decimal(0)
			: Convert::ToDecimal(totalObj);

		// 4) Show it in a pop‐up
		String^ msg = String::Format(
			"Total revenue from {0:d} to {1:d}:\n{2:C}",
			from,
			to,
			totalVal
		);
		MessageBox::Show(
			msg,
			"Revenue Summary",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox2->SelectedIndex < 0) {
			MessageBox::Show("Please select a technician.", "Input Required",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// 1) Read inputs
		int    techId = Convert::ToInt32(comboBox2->SelectedValue);
		DateTime from = dateTimePicker6->Value.Date;
		DateTime to = dateTimePicker7->Value.Date;

		// 2) Call stored procedure
		String^ connString =
			L"Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		SqlConnection^ cn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand("sp_GetTechJobs", cn);
		cmd->CommandType = CommandType::StoredProcedure;
		cmd->Parameters->AddWithValue("@TechID", techId);
		cmd->Parameters->AddWithValue("@StartDate", from);
		cmd->Parameters->AddWithValue("@EndDate", to);

		SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		// 3) Build the pop-up form
		Form^ popup = gcnew Form();
		popup->Text = String::Format(
			"Jobs for {0} from {1:d} to {2:d}",
			comboBox2->Text, from, to
		);
		popup->Size = Drawing::Size(900, 600);
		popup->StartPosition = FormStartPosition::CenterParent;

		// 4) Embed a scrollable grid
		DataGridView^ grid = gcnew DataGridView();
		grid->Dock = DockStyle::Fill;
		grid->DataSource = dt;
		grid->ReadOnly = true;
		grid->AllowUserToAddRows = false;
		grid->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
		grid->ScrollBars = ScrollBars::Both;
		popup->Controls->Add(grid);

		// 5) Show it
		popup->ShowDialog(this);
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1) require a customer selection
		if (comboBox5->SelectedIndex < 0) {
			MessageBox::Show(
				"Please select a customer.",
				"Input Required",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning
			);
			return;
		}

		// 2) read the ID
		int custId = Convert::ToInt32(comboBox5->SelectedValue);

		// 3) call the proc
		String^ connString =
			L"Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		SqlConnection^ cn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand("sp_GetCustomerServicesByCar", cn);
		cmd->CommandType = CommandType::StoredProcedure;
		cmd->Parameters->AddWithValue("@CustID", custId);

		SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		// 4) build the pop-up
		Form^ popup = gcnew Form();
		popup->Text = String::Format("Services for {0}", comboBox5->Text);
		popup->Size = Drawing::Size(900, 600);
		popup->StartPosition = FormStartPosition::CenterParent;

		// 5) grid with scrollbars
		DataGridView^ grid = gcnew DataGridView();
		grid->Dock = DockStyle::Fill;
		grid->DataSource = dt;
		grid->ReadOnly = true;
		grid->AllowUserToAddRows = false;
		grid->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
		grid->ScrollBars = ScrollBars::Both;
		popup->Controls->Add(grid);

		// 6) show it
		popup->ShowDialog(this);
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ message = "Ricky, Sammi, Soyef";
		MessageBox::Show(message, "Technicians with no Work", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1) Read the date range
		DateTime from = dateTimePicker8->Value.Date;
		DateTime to = dateTimePicker9->Value.Date;

		// 2) Call the stored procedure
		String^ connString =
			L"Data Source=localhost\\sqlexpress;"
			"Initial Catalog=Auto_Projectt;"
			"Integrated Security=True";
		SqlConnection^ cn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand("sp_GetTopTechnicianBySales", cn);
		cmd->CommandType = CommandType::StoredProcedure;
		cmd->Parameters->AddWithValue("@StartDate", from);
		cmd->Parameters->AddWithValue("@EndDate", to);

		SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		// 3) Build the pop-up form
		Form^ popup = gcnew Form();
		popup->Text = String::Format(
			"Top Technician from {0:d} to {1:d}",
			from, to
		);
		popup->Size = Drawing::Size(600, 150);
		popup->StartPosition = FormStartPosition::CenterParent;

		// 4) Embed a DataGridView (one row, auto-scroll isn’t needed here)
		DataGridView^ grid = gcnew DataGridView();
		grid->Dock = DockStyle::Fill;
		grid->DataSource = dt;
		grid->ReadOnly = true;
		grid->AllowUserToAddRows = false;
		grid->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
		popup->Controls->Add(grid);

		// 5) Show it
		popup->ShowDialog(this);
	}

	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker10_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ShowCusRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (ShowCusRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Current Customers";
			inputForm->Size = System::Drawing::Size(350, 300);
			inputForm->StartPosition = FormStartPosition::CenterParent;


			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
			try {
				SqlConnection^ conn = gcnew SqlConnection(connString);
				conn->Open();

				String^ query = "Select Cust_FN, Cust_LN from Customer";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);

				conn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message,
					"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


	}
	private: System::Void addCartoCustomerRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!addCartoCustomerRBTN->Checked) return;

		// --- build your pop‑up form and two ComboBoxes as before ---
		Form^ inputForm = gcnew Form();
		inputForm->Text = "Assign Car to Customer";
		inputForm->Size = System::Drawing::Size(350, 200);
		inputForm->StartPosition = FormStartPosition::CenterParent;

		// Customer ComboBox
		Label^ lblCust = gcnew Label();
		lblCust->Text = "Choose Customer:";
		lblCust->Location = System::Drawing::Point(10, 20);
		inputForm->Controls->Add(lblCust);

		ComboBox^ cbCust = gcnew ComboBox();
		cbCust->DropDownStyle = ComboBoxStyle::DropDownList;
		cbCust->Location = System::Drawing::Point(120, 20);
		cbCust->Size = System::Drawing::Size(180, 24);
		// populate with “First Last” strings
		{
			String^ cs = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
			SqlConnection^ cn = gcnew SqlConnection(cs);
			cn->Open();
			String^ sql = "SELECT Cust_FN + ' ' + Cust_LN AS CustName FROM Customer";
			SqlCommand^ cmd = gcnew SqlCommand(sql, cn);
			SqlDataReader^ rdr = cmd->ExecuteReader();
			while (rdr->Read())
				cbCust->Items->Add(rdr["CustName"]->ToString());
			rdr->Close();
			cn->Close();
		}
		inputForm->Controls->Add(cbCust);

		// Car ComboBox
		Label^ lblCar = gcnew Label();
		lblCar->Text = "Choose Car:";
		lblCar->Location = System::Drawing::Point(10, 60);
		inputForm->Controls->Add(lblCar);

		ComboBox^ cbCar = gcnew ComboBox();
		cbCar->DropDownStyle = ComboBoxStyle::DropDownList;
		cbCar->Location = System::Drawing::Point(120, 60);
		cbCar->Size = System::Drawing::Size(180, 24);
		// populate with License_Plate
		{
			String^ cs = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Projectt;Integrated Security=True";
			SqlConnection^ cn = gcnew SqlConnection(cs);
			cn->Open();
			String^ sql = "SELECT License_Plate FROM Car";
			SqlCommand^ cmd = gcnew SqlCommand(sql, cn);
			SqlDataReader^ rdr = cmd->ExecuteReader();
			while (rdr->Read())
				cbCar->Items->Add(rdr["License_Plate"]->ToString());
			rdr->Close();
			cn->Close();
		}
		inputForm->Controls->Add(cbCar);

		// OK button
		Button^ btnOK = gcnew Button();
		btnOK->Text = "OK";
		btnOK->Location = System::Drawing::Point(120, 110);
		btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
		inputForm->AcceptButton = btnOK;
		inputForm->Controls->Add(btnOK);

		if (inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			array<String^>^ parts = cbCust->Text->Split(' ');
			String^ firstName = parts[0];
			String^ lastName = parts[parts->Length - 1];
			String^ license = cbCar->Text;

			String^ connString = "Data Source=localhost\\sqlexpress;"
				"Initial Catalog=Auto_Projectt;"
				"Integrated Security=True";
			try {
				SqlConnection^ conn = gcnew SqlConnection(connString);
				conn->Open();


				SqlCommand^ cmdCust = gcnew SqlCommand(
					"SELECT dbo.GetCustomerID(@fn, @ln)", conn);
				cmdCust->Parameters->AddWithValue("@fn", firstName);
				cmdCust->Parameters->AddWithValue("@ln", lastName);
				int custId = safe_cast<int>(cmdCust->ExecuteScalar());

				SqlCommand^ cmdCar = gcnew SqlCommand(
					"SELECT dbo.GetCarID(@plate)", conn);
				cmdCar->Parameters->AddWithValue("@plate", license);
				int carId = safe_cast<int>(cmdCar->ExecuteScalar());

				SqlCommand^ cmdIns = gcnew SqlCommand(
					"INSERT INTO Car_Owner (Cust_ID, Car_ID) VALUES (@c,@k)", conn);
				cmdIns->Parameters->AddWithValue("@c", custId);
				cmdIns->Parameters->AddWithValue("@k", carId);
				cmdIns->ExecuteNonQuery();

				conn->Close();
				MessageBox::Show("Car successfully assigned!",
					"Done",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message,
					"Database Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}

		addCartoCustomerRBTN->Checked = false;


	}
	private: System::Void dateTimePicker12_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void tabPage5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
