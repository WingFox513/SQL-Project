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


	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton13;





































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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LENTERBELOW = (gcnew System::Windows::Forms::Label());
			this->ExecuteBTN = (gcnew System::Windows::Forms::Button());
			this->QueryTB = (gcnew System::Windows::Forms::TextBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
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
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->radioButton5);
			this->tabPage2->Controls->Add(this->radioButton6);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(940, 343);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Cars";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->radioButton8);
			this->tabPage3->Controls->Add(this->radioButton7);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(940, 343);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Services";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->radioButton11);
			this->tabPage4->Controls->Add(this->radioButton10);
			this->tabPage4->Controls->Add(this->radioButton9);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(940, 343);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Technicians";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->radioButton13);
			this->tabPage5->Controls->Add(this->radioButton12);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(940, 343);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Schedule";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->comboBox3);
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
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(715, 111);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 4;
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
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(33, 32);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(77, 20);
			this->radioButton4->TabIndex = 7;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Add Car";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(33, 58);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(92, 20);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Delete Car";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(33, 84);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(92, 20);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Show Cars";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(170, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(266, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"car needs make, model, license plate i think";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(56, 30);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(102, 20);
			this->radioButton7->TabIndex = 0;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Add Service";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(56, 56);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(129, 20);
			this->radioButton8->TabIndex = 1;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Remove Service";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(53, 36);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(87, 20);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Add Tech";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(53, 62);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(150, 20);
			this->radioButton10->TabIndex = 1;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Add Service to Tech";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(53, 89);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(114, 20);
			this->radioButton11->TabIndex = 2;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Remove Tech";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(53, 35);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(145, 20);
			this->radioButton12->TabIndex = 0;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Schedule Customer";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton12_CheckedChanged);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(53, 62);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(121, 20);
			this->radioButton13->TabIndex = 1;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Show Schedule";
			this->radioButton13->UseVisualStyleBackColor = true;
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
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
