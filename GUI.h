#pragma once

namespace <Name of Project> {			//replace with name of c++ project (ex: project 12)

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ QueryTB;
	private: System::Windows::Forms::Button^ ExecuteBTN;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->QueryTB = (gcnew System::Windows::Forms::TextBox());
			this->ExecuteBTN = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(252, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter SQL Query";
			// 
			// QueryTB
			// 
			this->QueryTB->Location = System::Drawing::Point(201, 125);
			this->QueryTB->Name = L"QueryTB";
			this->QueryTB->Size = System::Drawing::Size(318, 20);
			this->QueryTB->TabIndex = 1;
			// 
			// ExecuteBTN
			// 
			this->ExecuteBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExecuteBTN->Location = System::Drawing::Point(283, 181);
			this->ExecuteBTN->Name = L"ExecuteBTN";
			this->ExecuteBTN->Size = System::Drawing::Size(157, 34);
			this->ExecuteBTN->TabIndex = 2;
			this->ExecuteBTN->Text = L"Execute";
			this->ExecuteBTN->UseVisualStyleBackColor = true;
			this->ExecuteBTN->Click += gcnew System::EventHandler(this, &MyForm::ExecuteBTN_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 314);
			this->Controls->Add(this->ExecuteBTN);
			this->Controls->Add(this->QueryTB);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"SQL Query";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ExecuteBTN_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=<name of db to connect to>;Integrated Security=True";        //change initial catalog to name of db
		
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
	};
}
