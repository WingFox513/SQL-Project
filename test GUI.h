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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
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
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LENTERBELOW = (gcnew System::Windows::Forms::Label());
			this->ExecuteBTN = (gcnew System::Windows::Forms::Button());
			this->QueryTB = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
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
			this->tabControl1->Location = System::Drawing::Point(13, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(948, 372);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->radioButton3);
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(940, 343);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Customer";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(35, 117);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(128, 20);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Show Customers";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(35, 90);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(151, 20);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Add Car to Customer";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(35, 63);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(113, 20);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Add Customer";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Add Customer", L"Delete Customer", L"Show Customers" });
			this->comboBox2->Location = System::Drawing::Point(26, 23);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(940, 343);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Cars";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Add Customer", L"Add Car", L"Add Service", L"Add Technician",
					L"Make Apointment"
			});
			this->comboBox1->Location = System::Drawing::Point(30, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(940, 343);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Services";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(940, 343);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Technicians";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(940, 343);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Schedule";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label1);
			this->tabPage6->Controls->Add(this->LENTERBELOW);
			this->tabPage6->Controls->Add(this->ExecuteBTN);
			this->tabPage6->Controls->Add(this->QueryTB);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(940, 343);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"SQL";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(293, 52);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter SQL Query";
			// 
			// LENTERBELOW
			// 
			this->LENTERBELOW->AutoSize = true;
			this->LENTERBELOW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LENTERBELOW->Location = System::Drawing::Point(329, 111);
			this->LENTERBELOW->Name = L"LENTERBELOW";
			this->LENTERBELOW->Size = System::Drawing::Size(188, 29);
			this->LENTERBELOW->TabIndex = 3;
			this->LENTERBELOW->Text = L"ENTER BELOW";
			this->LENTERBELOW->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// ExecuteBTN
			// 
			this->ExecuteBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExecuteBTN->Location = System::Drawing::Point(334, 229);
			this->ExecuteBTN->Margin = System::Windows::Forms::Padding(4);
			this->ExecuteBTN->Name = L"ExecuteBTN";
			this->ExecuteBTN->Size = System::Drawing::Size(209, 42);
			this->ExecuteBTN->TabIndex = 2;
			this->ExecuteBTN->Text = L"Execute";
			this->ExecuteBTN->UseVisualStyleBackColor = true;
			this->ExecuteBTN->Click += gcnew System::EventHandler(this, &MyForm::ExecuteBTN_Click);
			// 
			// QueryTB
			// 
			this->QueryTB->Location = System::Drawing::Point(225, 160);
			this->QueryTB->Margin = System::Windows::Forms::Padding(4);
			this->QueryTB->Name = L"QueryTB";
			this->QueryTB->Size = System::Drawing::Size(423, 22);
			this->QueryTB->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1212, 547);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"SQL Query";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ExecuteBTN_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Auto_Project;Integrated Security=True";        //change initial catalog to name of db

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
}
};
}
