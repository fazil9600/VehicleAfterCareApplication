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

	/// <summary>
	/// Summary for Portal3
	/// </summary>
	public ref class Portal3 : public System::Windows::Forms::Form
	{
	public:
		Portal3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Portal3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button10;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(471, 328);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 110);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Vehicle History";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Portal3::button9_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(471, 197);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 110);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Vehicle Service";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Portal3::button5_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(471, 328);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 110);
			this->button8->TabIndex = 8;
			this->button8->Text = L"button2";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(471, 197);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 110);
			this->button4->TabIndex = 9;
			this->button4->Text = L"button2";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(306, 328);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 110);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Vehicle CleanUp";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Portal3::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(142, 328);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 110);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Vehicle Repair";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Portal3::button6_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(306, 197);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 110);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Vehicle Inquiry";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Portal3::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(142, 197);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 110);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Vehicle Registration";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Portal3::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(675, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"LogOut";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Portal3::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(180, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(452, 40);
			this->label1->TabIndex = 4;
			this->label1->Text = L"WD AUTOWORLD PORTAL NEW";
			this->label1->Click += gcnew System::EventHandler(this, &Portal3::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Portal3::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(577, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"TIME";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(577, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"DATE";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(142, 456);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 93);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Update Vehicle Data";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Portal3::button10_Click_1);
			// 
			// Portal3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 591);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Portal3";
			this->Text = L"Portal3";
			this->Load += gcnew System::EventHandler(this, &Portal3::Portal3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		System::Windows::Forms::DialogResult iExit;
		iExit = MessageBox::Show("Are you sure", "WD AUTO WORLD",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);

	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VehicleRegistrationNew^ f2 = gcnew VehicleRegistrationNew;
	f2->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VehicleRepair^ f2 = gcnew VehicleRepair;
	f2->Show();
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VehicleCleanUp^ f2 = gcnew VehicleCleanUp;
	f2->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VehicleHistory^ f2 = gcnew VehicleHistory;
	f2->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VehicleInquiry^ f2 = gcnew VehicleInquiry;
	f2->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VehicleServiceCheckList^ f2 = gcnew VehicleServiceCheckList;
	f2->Show();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime dt = DateTime::Now;
	DateTime da = DateTime::Now;
	label2->Text = dt.Now.ToLongTimeString();
	label3->Text = dt.Now.ToLongDateString();
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VehicleInquiryCopy^ f2 = gcnew VehicleInquiryCopy;
	f2->Show();

}
private: System::Void Portal3_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
