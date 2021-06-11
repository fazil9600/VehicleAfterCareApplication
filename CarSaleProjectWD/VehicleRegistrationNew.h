#pragma once
#include "VehicleRegistrationNew.h"
#include "VehicleInquiry.h"
#include "VehicleRepair.h"
#include "VehicleCleanUp.h"
#include "VehicleHistory.h"
#include "VehicleServiceCheckList.h"
//#include "VehicleDetailsUpdate.h"
#include "VehicleInquiryCopy.h"
namespace CarSaleProjectWD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for VehicleRegistrationNew
	/// </summary>
	public ref class VehicleRegistrationNew : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
		   MySqlDataReader^ sqlRd;

	public:
		VehicleRegistrationNew(void)
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
		~VehicleRegistrationNew()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(154, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(430, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WD AUTOWORLD VEHICLE REGISTRATION";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(479, 335);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 52;
			this->label13->Text = L"Special Notes";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(479, 276);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 50;
			this->label10->Text = L"Year Of Manufacture";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(479, 215);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 13);
			this->label7->TabIndex = 49;
			this->label7->Text = L"Engine Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(479, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 48;
			this->label6->Text = L"Customer Mobile";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(296, 335);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 13);
			this->label12->TabIndex = 47;
			this->label12->Text = L"Engine Capacity";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(296, 276);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 13);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Vehicle Model";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(296, 215);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 45;
			this->label8->Text = L"Chassis Number";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(296, 147);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 44;
			this->label11->Text = L"Customer NIC";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(113, 335);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 43;
			this->label14->Text = L"Fuel Type";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(113, 276);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(72, 13);
			this->label15->TabIndex = 42;
			this->label15->Text = L"Vehicle Make";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(113, 215);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 13);
			this->label16->TabIndex = 51;
			this->label16->Text = L"Vehicle Number";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(113, 147);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 13);
			this->label17->TabIndex = 41;
			this->label17->Text = L"Customer Name";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(482, 351);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(161, 28);
			this->textBox12->TabIndex = 39;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(482, 292);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(161, 28);
			this->textBox9->TabIndex = 38;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(482, 231);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(161, 28);
			this->textBox6->TabIndex = 37;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(482, 166);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 28);
			this->textBox4->TabIndex = 36;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(299, 351);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(161, 28);
			this->textBox11->TabIndex = 35;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(113, 351);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(161, 28);
			this->textBox10->TabIndex = 34;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(299, 292);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(161, 28);
			this->textBox8->TabIndex = 33;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(113, 292);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(161, 28);
			this->textBox7->TabIndex = 32;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(299, 231);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 28);
			this->textBox5->TabIndex = 31;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(113, 231);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(161, 28);
			this->textBox13->TabIndex = 30;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(299, 166);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(161, 28);
			this->textBox14->TabIndex = 40;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(113, 166);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(161, 28);
			this->textBox15->TabIndex = 29;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &VehicleRegistrationNew::textBox15_TextChanged);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(385, 469);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 54);
			this->button1->TabIndex = 53;
			this->button1->Text = L"REGISTER";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VehicleRegistrationNew::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(532, 469);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 54);
			this->button2->TabIndex = 53;
			this->button2->Text = L"RESET";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(699, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 54;
			this->button3->Text = L"LOGOUT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VehicleRegistrationNew::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 26);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 33);
			this->button4->TabIndex = 55;
			this->button4->Text = L"Back to Portal";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VehicleRegistrationNew::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(385, 424);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(174, 17);
			this->checkBox1->TabIndex = 56;
			this->checkBox1->Text = L"Above entered data are correct";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &VehicleRegistrationNew::checkBox1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(113, 107);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 34);
			this->textBox1->TabIndex = 57;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &VehicleRegistrationNew::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 58;
			this->label2->Text = L"ID";
			this->label2->Click += gcnew System::EventHandler(this, &VehicleRegistrationNew::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(299, 107);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 34);
			this->textBox2->TabIndex = 59;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(296, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 58;
			this->label3->Text = L"Customer Address";
			// 
			// VehicleRegistrationNew
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 563);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label1);
			this->Name = L"VehicleRegistrationNew";
			this->Text = L"VehicleRegistrationNew";
			this->Load += gcnew System::EventHandler(this, &VehicleRegistrationNew::VehicleRegistrationNew_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//========================Start Function====================
		private: System::Void VehicleRegistrationConnected()
		{
			sqlconn->ConnectionString = "datasource = localhost;port=3306; username=root; \
			password=gallesrilanka@123; database=wdautoworld";

			sqlconn->Open();
			sqlcmd->Connection = sqlconn;
			sqlcmd->CommandText = "Select * from wdautoworld.vehicledetails";
			sqlRd = sqlcmd->ExecuteReader();
			sqlDt->Load(sqlRd);
			sqlRd->Close();
			sqlconn->Close();
			//dataGridView1->DataSource = sqlDt;
		}
			   //========================End Function====================


	 //========================Start Function====================
	private: System::Void AccessToWDAutoWorldDB()
	{
		sqlconn->ConnectionString = "datasource = localhost;port=3306; username=root; \
			password=gallesrilanka@123; database=wdautoworld";
	}
	//========================End Function======================






	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		button1->Enabled = true;
	}
	else
	{
		button1->Enabled = false;
	}
}
private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	try {

		System::Windows::Forms::DialogResult iSave;
		iSave = MessageBox::Show("Confirm you want to save the transaction", "WD AUTO WORLD",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (iSave == System::Windows::Forms::DialogResult::Yes)
		{
			try {


				AccessToWDAutoWorldDB();

				sqlconn->Open();
				sqlcmd->Connection = sqlconn;
				String^ InsertDataWrap = "insert  into wdautoworld.vehicledetails (ID, CustomerName, CustomerNIC,CustomerAddress,VehicleNumber,VehicleChassisNumber,VehicleEngineNumber,VehicleMake,VehicleModel,YOM,FuelType,CustomerMobile,Notes,EngineCapacity)" +
					"values('" + textBox1->Text + "', '" +
					textBox15->Text + "','" +
					textBox14->Text + "','" +
					textBox2->Text + "','" +
					textBox13->Text + "','" +
					textBox5->Text + "','" +
					textBox6->Text + "','" +
					textBox7->Text + "','" +
					textBox8->Text + "','" +
					textBox9->Text + "','" +
					textBox10->Text + "','" +
					textBox4->Text + "','" +
					textBox12->Text + "','" +
					textBox11->Text + "')";

				sqlcmd->CommandText = InsertDataWrap;



				sqlcmd->ExecuteNonQuery();
				sqlconn->Close();
				button1->Enabled = false;

				MessageBox::Show("Record Inserted Sucesfully!", "WD AUTO WORLD INSERT",
				MessageBoxButtons::OK, MessageBoxIcon::None);
				button1->Enabled = false;
				checkBox1->Enabled = false;
			}
			
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	
}
private: System::Void VehicleRegistrationNew_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
}
