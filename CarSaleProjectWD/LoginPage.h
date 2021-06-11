#pragma once
#include "Portal3.h"
#include "VehicleRegistrationNew.h"
namespace CarSaleProjectWD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;

	public:
		LoginPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(310, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login To Your Account";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 133);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 43);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(18, 215);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(240, 43);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Your UserName";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter Your Password";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(18, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginPage::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(150, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 52);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginPage::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(18, 279);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(131, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Agree To Login Terms";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginPage::checkBox1_CheckedChanged);
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 404);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"LoginPage";
			this->Text = L"LoginPage";
			this->Load += gcnew System::EventHandler(this, &LoginPage::LoginPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//========================Start Function====================
	private: System::Void LoginValidationSQL()
	{
		sqlconn->ConnectionString = "datasource = localhost;port=3306; username=root; \
			password=gallesrilanka@123; database=wdautoworld";

		sqlconn->Open();
		sqlcmd->Connection = sqlconn;
		sqlcmd->CommandText = "Select * from wdautoworld.logindetails where UserName='" + this->textBox1->Text + "' and password='" + this->textBox2->Text + "';", sqlconn;
		sqlRd = sqlcmd->ExecuteReader();
	}
	  //========================End Function======================




	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button1->Enabled = true;
		}
		else {
			button1->Enabled = false;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	try {

		LoginValidationSQL();
		int count = 0;
		int maximumAttempt = 0;

		while (sqlRd->Read()) {
			count = count + 1;
		}
		if (count == 1) {

			this->Hide();
			Portal3^ f2 = gcnew Portal3;
			f2->Show();
			sqlconn->Close();
		}
		 else if (count > 1) {
			MessageBox::Show("Account Username is duplicated");
			sqlconn->Close();
		}

		else
			MessageBox::Show("Invalid Credentials | try again");
			sqlconn->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}




	//if (textBox1->Text == "admin")
	//{
	//	if (textBox2->Text == "admin")
	//	{
	//		this->Hide();
	//		Portal3^ f2 = gcnew Portal3;
	//		f2->Show();
	//	}
	//	else
	//	{
	//		MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	//	}
	//}
	//else
	//{
	//	MessageBox::Show("Incorrect UserName", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	//}
}
private: System::Void LoginPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
