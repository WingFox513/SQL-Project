#pragma once

namespace SQL_PROJECT {			//replace with name of c++ project (ex: project 12)

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

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



	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ LENTERBELOW;
	private: System::Windows::Forms::TextBox^ QueryTB;
	private: System::Windows::Forms::Button^ ExecuteBTN;

	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::RadioButton^ ShowCusRBTN;



	private: System::Windows::Forms::RadioButton^ AddCustRBTN;
	private: System::Windows::Forms::RadioButton^ AddCarRBTN;
	private: System::Windows::Forms::RadioButton^ DelCarRBTN;
	private: System::Windows::Forms::RadioButton^ ShowCarRBTN;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ RemSerRBTN;

	private: System::Windows::Forms::RadioButton^ AddSerRBTN;
	private: System::Windows::Forms::RadioButton^ RemTechRBTN;


	private: System::Windows::Forms::RadioButton^ AddSerToTechRBTN;

	private: System::Windows::Forms::RadioButton^ AddTechRBTN;
	private: System::Windows::Forms::RadioButton^ SchedCusRBTN;
	private: System::Windows::Forms::RadioButton^ ShowSchedRBTN;



	private: System::Windows::Forms::RadioButton^ DelCusRBTN;
	private: System::Windows::Forms::RadioButton^ ShowSerRBTN;
	private: System::Windows::Forms::RadioButton^ radioButton1;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->DelCusRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->ShowCusRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->AddCustRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddCarRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->DelCarRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->ShowCarRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->ShowSerRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->RemSerRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->AddSerRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->RemTechRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->AddSerToTechRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->AddTechRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->ShowSchedRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->SchedCusRBTN = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LENTERBELOW = (gcnew System::Windows::Forms::Label());
			this->ExecuteBTN = (gcnew System::Windows::Forms::Button());
			this->QueryTB = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(10, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(711, 302);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->DelCusRBTN);
			this->tabPage1->Controls->Add(this->ShowCusRBTN);
			this->tabPage1->Controls->Add(this->AddCustRBTN);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(703, 276);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Customer";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// DelCusRBTN
			// 
			this->DelCusRBTN->AutoSize = true;
			this->DelCusRBTN->Location = System::Drawing::Point(26, 55);
			this->DelCusRBTN->Name = L"DelCusRBTN";
			this->DelCusRBTN->Size = System::Drawing::Size(108, 17);
			this->DelCusRBTN->TabIndex = 5;
			this->DelCusRBTN->TabStop = true;
			this->DelCusRBTN->Text = L"Delete Customers";
			this->DelCusRBTN->UseVisualStyleBackColor = true;
			this->DelCusRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DelCusRBTN_CheckedChanged);
			// 
			// ShowCusRBTN
			// 
			this->ShowCusRBTN->AutoSize = true;
			this->ShowCusRBTN->Location = System::Drawing::Point(26, 77);
			this->ShowCusRBTN->Margin = System::Windows::Forms::Padding(2);
			this->ShowCusRBTN->Name = L"ShowCusRBTN";
			this->ShowCusRBTN->Size = System::Drawing::Size(104, 17);
			this->ShowCusRBTN->TabIndex = 4;
			this->ShowCusRBTN->TabStop = true;
			this->ShowCusRBTN->Text = L"Show Customers";
			this->ShowCusRBTN->UseVisualStyleBackColor = true;
			// 
			// AddCustRBTN
			// 
			this->AddCustRBTN->AutoSize = true;
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
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->AddCarRBTN);
			this->tabPage2->Controls->Add(this->DelCarRBTN);
			this->tabPage2->Controls->Add(this->ShowCarRBTN);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(703, 276);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Cars";
			this->tabPage2->UseVisualStyleBackColor = true;
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
			// DelCarRBTN
			// 
			this->DelCarRBTN->AutoSize = true;
			this->DelCarRBTN->Location = System::Drawing::Point(25, 47);
			this->DelCarRBTN->Margin = System::Windows::Forms::Padding(2);
			this->DelCarRBTN->Name = L"DelCarRBTN";
			this->DelCarRBTN->Size = System::Drawing::Size(75, 17);
			this->DelCarRBTN->TabIndex = 6;
			this->DelCarRBTN->TabStop = true;
			this->DelCarRBTN->Text = L"Delete Car";
			this->DelCarRBTN->UseVisualStyleBackColor = true;
			this->DelCarRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// ShowCarRBTN
			// 
			this->ShowCarRBTN->AutoSize = true;
			this->ShowCarRBTN->Location = System::Drawing::Point(25, 68);
			this->ShowCarRBTN->Margin = System::Windows::Forms::Padding(2);
			this->ShowCarRBTN->Name = L"ShowCarRBTN";
			this->ShowCarRBTN->Size = System::Drawing::Size(76, 17);
			this->ShowCarRBTN->TabIndex = 5;
			this->ShowCarRBTN->TabStop = true;
			this->ShowCarRBTN->Text = L"Show Cars";
			this->ShowCarRBTN->UseVisualStyleBackColor = true;
			this->ShowCarRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->ShowSerRBTN);
			this->tabPage3->Controls->Add(this->RemSerRBTN);
			this->tabPage3->Controls->Add(this->AddSerRBTN);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(703, 276);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Services";
			this->tabPage3->UseVisualStyleBackColor = true;
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
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->radioButton1);
			this->tabPage4->Controls->Add(this->RemTechRBTN);
			this->tabPage4->Controls->Add(this->AddSerToTechRBTN);
			this->tabPage4->Controls->Add(this->AddTechRBTN);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(703, 276);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Technicians";
			this->tabPage4->UseVisualStyleBackColor = true;
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
			// AddTechRBTN
			// 
			this->AddTechRBTN->AutoSize = true;
			this->AddTechRBTN->Checked = true;
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
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->ShowSchedRBTN);
			this->tabPage5->Controls->Add(this->SchedCusRBTN);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(703, 276);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Schedule";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// ShowSchedRBTN
			// 
			this->ShowSchedRBTN->AutoSize = true;
			this->ShowSchedRBTN->Location = System::Drawing::Point(40, 50);
			this->ShowSchedRBTN->Margin = System::Windows::Forms::Padding(2);
			this->ShowSchedRBTN->Name = L"ShowSchedRBTN";
			this->ShowSchedRBTN->Size = System::Drawing::Size(100, 17);
			this->ShowSchedRBTN->TabIndex = 1;
			this->ShowSchedRBTN->TabStop = true;
			this->ShowSchedRBTN->Text = L"Show Schedule";
			this->ShowSchedRBTN->UseVisualStyleBackColor = true;
			// 
			// SchedCusRBTN
			// 
			this->SchedCusRBTN->AutoSize = true;
			this->SchedCusRBTN->Location = System::Drawing::Point(40, 28);
			this->SchedCusRBTN->Margin = System::Windows::Forms::Padding(2);
			this->SchedCusRBTN->Name = L"SchedCusRBTN";
			this->SchedCusRBTN->Size = System::Drawing::Size(117, 17);
			this->SchedCusRBTN->TabIndex = 0;
			this->SchedCusRBTN->TabStop = true;
			this->SchedCusRBTN->Text = L"Schedule Customer";
			this->SchedCusRBTN->UseVisualStyleBackColor = true;
			this->SchedCusRBTN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton12_CheckedChanged);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label1);
			this->tabPage6->Controls->Add(this->LENTERBELOW);
			this->tabPage6->Controls->Add(this->ExecuteBTN);
			this->tabPage6->Controls->Add(this->QueryTB);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Margin = System::Windows::Forms::Padding(2);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(703, 276);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"SQL";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(220, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter SQL Query";
			// 
			// LENTERBELOW
			// 
			this->LENTERBELOW->AutoSize = true;
			this->LENTERBELOW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LENTERBELOW->Location = System::Drawing::Point(247, 90);
			this->LENTERBELOW->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LENTERBELOW->Name = L"LENTERBELOW";
			this->LENTERBELOW->Size = System::Drawing::Size(148, 24);
			this->LENTERBELOW->TabIndex = 3;
			this->LENTERBELOW->Text = L"ENTER BELOW";
			this->LENTERBELOW->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// ExecuteBTN
			// 
			this->ExecuteBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExecuteBTN->Location = System::Drawing::Point(250, 186);
			this->ExecuteBTN->Name = L"ExecuteBTN";
			this->ExecuteBTN->Size = System::Drawing::Size(157, 34);
			this->ExecuteBTN->TabIndex = 2;
			this->ExecuteBTN->Text = L"Execute";
			this->ExecuteBTN->UseVisualStyleBackColor = true;
			this->ExecuteBTN->Click += gcnew System::EventHandler(this, &MyForm::ExecuteBTN_Click);
			// 
			// QueryTB
			// 
			this->QueryTB->Location = System::Drawing::Point(169, 130);
			this->QueryTB->Name = L"QueryTB";
			this->QueryTB->Size = System::Drawing::Size(318, 20);
			this->QueryTB->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 444);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"SQL Query";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ExecuteBTN_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=SQL;Integrated Security=True";        //change initial catalog to name of db

		try {
			SqlConnection^ conn = gcnew SqlConnection(connString);
			conn->Open();

			String^ query = QueryTB->Text;
			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			int rowsAffected = cmd->ExecuteNonQuery();

			MessageBox::Show("Query executed successfully! Rows affected: " + rowsAffected,
				"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message,
				"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
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

		   //// Example event handler for comboBox2 in the Customer tab:
		   //private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		   //    String^ selectedAction = comboBox2->SelectedItem->ToString();
		   //    if (selectedAction == "Add Customer") {
		   //        CreateAddCustomerControls();
		   //    }
		   //    // Else, if you want to handle "Delete Customer" or "Show Customers", you can add other functions here.
		   //} uhhh this just didnt work

		   // Example event handler for the dynamically created submit button:
	private: System::Void btnSubmitCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		// For now, just display a message to confirm button works.
		MessageBox::Show("Add Customer clicked. Implement integration later.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddCustRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Customer Details";
			inputForm->Size = System::Drawing::Size(350, 300);
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

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "First Name:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			TextBox^ txtFirstName = gcnew TextBox();
			txtFirstName->Location = System::Drawing::Point(120, 60);
			txtFirstName->Width = 200;
			inputForm->Controls->Add(txtFirstName);

			// Last Name label and textbox
			Label^ lblLastName = gcnew Label();
			lblLastName->Text = "Last Name:";
			lblLastName->Location = System::Drawing::Point(10, 100);
			lblLastName->AutoSize = true;
			inputForm->Controls->Add(lblLastName);

			TextBox^ txtLastName = gcnew TextBox();
			txtLastName->Location = System::Drawing::Point(120, 100);
			txtLastName->Width = 200;
			inputForm->Controls->Add(txtLastName);

			// Phone Number label and textbox
			Label^ lblPhone = gcnew Label();
			lblPhone->Text = "Phone Number:";
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
				String^ firstName = txtFirstName->Text;
				String^ lastName = txtLastName->Text;
				String^ phone = txtPhone->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Customer (Cust_ID, Cust_FN, Cust_LN, Phone_#) VALUES (@id, @firstName, @lastName, @phone)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);
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
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
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




	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddCarRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Car Details";
			inputForm->Size = System::Drawing::Size(350, 300);
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

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "License Plate:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			TextBox^ txtFirstName = gcnew TextBox();
			txtFirstName->Location = System::Drawing::Point(120, 60);
			txtFirstName->Width = 200;
			inputForm->Controls->Add(txtFirstName);

			// Last Name label and textbox
			Label^ lblLastName = gcnew Label();
			lblLastName->Text = "Make:";
			lblLastName->Location = System::Drawing::Point(10, 100);
			lblLastName->AutoSize = true;
			inputForm->Controls->Add(lblLastName);

			TextBox^ txtLastName = gcnew TextBox();
			txtLastName->Location = System::Drawing::Point(120, 100);
			txtLastName->Width = 200;
			inputForm->Controls->Add(txtLastName);

			// Phone Number label and textbox
			Label^ lblPhone = gcnew Label();
			lblPhone->Text = "Model:";
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
				String^ LP = txtFirstName->Text;
				String^ Make = txtLastName->Text;
				String^ Model = txtPhone->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Car (Car_ID, License_Plate, Make_ID, Model_ID) VALUES (@id, @LP, @Make, @Model)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);
					cmd->Parameters->AddWithValue("@LP", LP);
					cmd->Parameters->AddWithValue("@Make", Make);
					cmd->Parameters->AddWithValue("@Model", Model);

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


	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddSerRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Service Details";
			inputForm->Size = System::Drawing::Size(350, 300);
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

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "Service:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			TextBox^ txtFirstName = gcnew TextBox();
			txtFirstName->Location = System::Drawing::Point(120, 60);
			txtFirstName->Width = 200;
			inputForm->Controls->Add(txtFirstName);

			// Last Name label and textbox
			Label^ lblLastName = gcnew Label();
			lblLastName->Text = "Cost:";
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
				// Retrieve user input
				String^ id = txtID->Text;
				String^ Service = txtFirstName->Text;
				String^ Cost = txtLastName->Text;


				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Services (Service_ID, Service, Cost) VALUES (@id, @Service, @Cost)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);
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



	}
	private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (SchedCusRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Details";
			inputForm->Size = System::Drawing::Size(350, 300);
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

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "Customer Car ID:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			TextBox^ txtFirstName = gcnew TextBox();
			txtFirstName->Location = System::Drawing::Point(120, 60);
			txtFirstName->Width = 200;
			inputForm->Controls->Add(txtFirstName);

			// Last Name label and textbox
			Label^ lblLastName = gcnew Label();
			lblLastName->Text = "Date:";
			lblLastName->Location = System::Drawing::Point(10, 100);
			lblLastName->AutoSize = true;
			inputForm->Controls->Add(lblLastName);

			TextBox^ txtLastName = gcnew TextBox();
			txtLastName->Location = System::Drawing::Point(120, 100);
			txtLastName->Width = 200;
			inputForm->Controls->Add(txtLastName);

			// Phone Number label and textbox
			Label^ lblPhone = gcnew Label();
			lblPhone->Text = "Time:";
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
				String^ CCID = txtFirstName->Text;
				String^ SD = txtLastName->Text;
				String^ ST = txtPhone->Text;

				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Cust_Car_ServiceDate_Time (Cust_Car_Date_ID, Cust_Car_ID, Service_Date, Service_Time) VALUES (@id, @CCID, @SD, @ST)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);
					cmd->Parameters->AddWithValue("@CCID", CCID);
					cmd->Parameters->AddWithValue("@SD", SD);
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
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
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
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
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

	}
	private: System::Void AddTechRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddTechRBTN->Checked) {
			Form^ inputForm = gcnew Form();
			inputForm->Text = "Enter Tech Details";
			inputForm->Size = System::Drawing::Size(350, 300);
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

			// First Name label and textbox
			Label^ lblFirstName = gcnew Label();
			lblFirstName->Text = "First Name:";
			lblFirstName->Location = System::Drawing::Point(10, 60);
			lblFirstName->AutoSize = true;
			inputForm->Controls->Add(lblFirstName);

			TextBox^ txtFirstName = gcnew TextBox();
			txtFirstName->Location = System::Drawing::Point(120, 60);
			txtFirstName->Width = 200;
			inputForm->Controls->Add(txtFirstName);

			// Last Name label and textbox
			Label^ lblLastName = gcnew Label();
			lblLastName->Text = "Last Name:";
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
				// Retrieve user input
				String^ id = txtID->Text;
				String^ FN = txtFirstName->Text;
				String^ LN = txtLastName->Text;


				// Build and execute the INSERT command into the MSSQL DB
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
				try {
					SqlConnection^ conn = gcnew SqlConnection(connString);
					conn->Open();

					String^ query = "INSERT INTO Technician (Tech_ID, Tech_FN, Tech_LN) VALUES (@id, @FN, @LN)";
					SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					cmd->Parameters->AddWithValue("@id", id);
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
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
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


}
private: System::Void AddSerToTechRBTN_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (AddSerToTechRBTN->Checked) {
		Form^ inputForm = gcnew Form();
		inputForm->Text = "Enter Tech Service Details";
		inputForm->Size = System::Drawing::Size(350, 300);
		inputForm->StartPosition = FormStartPosition::CenterParent;

		// ID label and textbox
		Label^ lblID = gcnew Label();
		lblID->Text = "Tech Service ID:";
		lblID->Location = System::Drawing::Point(10, 20);
		lblID->AutoSize = true;
		inputForm->Controls->Add(lblID);

		TextBox^ txtID = gcnew TextBox();
		txtID->Location = System::Drawing::Point(120, 20);
		txtID->Width = 200;
		inputForm->Controls->Add(txtID);

		// First Name label and textbox
		Label^ lblFirstName = gcnew Label();
		lblFirstName->Text = "Tech ID:";
		lblFirstName->Location = System::Drawing::Point(10, 60);
		lblFirstName->AutoSize = true;
		inputForm->Controls->Add(lblFirstName);

		TextBox^ txtFirstName = gcnew TextBox();
		txtFirstName->Location = System::Drawing::Point(120, 60);
		txtFirstName->Width = 200;
		inputForm->Controls->Add(txtFirstName);

		// Last Name label and textbox
		Label^ lblLastName = gcnew Label();
		lblLastName->Text = "Service ID:";
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
			// Retrieve user input
			String^ id = txtID->Text;
			String^ TID = txtFirstName->Text;
			String^ SID = txtLastName->Text;


			// Build and execute the INSERT command into the MSSQL DB
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Mechanic_Shop;Integrated Security=True";
			try {
				SqlConnection^ conn = gcnew SqlConnection(connString);
				conn->Open();

				String^ query = "INSERT INTO Tech_To_Service (Tech_Service_ID, Tech_ID, Service_ID) VALUES (@id, @TID, @SID)";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);
				cmd->Parameters->AddWithValue("@id", id);
				cmd->Parameters->AddWithValue("@TID", TID);
				cmd->Parameters->AddWithValue("@SID", SID);

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

}
};
}
