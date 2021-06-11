#pragma once
namespace CarSaleProjectWD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for VehicleInquiry
	/// </summary>
	public ref class VehicleInquiry : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;

	public:
		VehicleInquiry(void)
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
		~VehicleInquiry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(206, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(370, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WD AUTOWORLD VEHICLE INQUERY";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 135);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 33);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &VehicleInquiry::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &VehicleInquiry::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(294, 135);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 33);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &VehicleInquiry::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &VehicleInquiry::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(564, 135);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 33);
			this->textBox3->TabIndex = 1;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &VehicleInquiry::textBox3_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L">";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VehicleInquiry::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(453, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VehicleInquiry::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(723, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L">";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VehicleInquiry::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"By NIC NO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(291, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"By Vehicle Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(561, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"By Chassis Number";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(41, 187);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(760, 303);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VehicleInquiry::dataGridView1_CellContentClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(784, 33);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VehicleInquiry::button4_Click_1);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &VehicleInquiry::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(781, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Time";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(724, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"TIME";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(781, 99);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Time";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(724, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"DATE";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(658, 516);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 47);
			this->button5->TabIndex = 8;
			this->button5->Text = L"RESET";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VehicleInquiry::button5_Click);
			// 
			// VehicleInquiry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 583);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"VehicleInquiry";
			this->Text = L"VehicleInquiry";
			this->Load += gcnew System::EventHandler(this, &VehicleInquiry::VehicleInquiry_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//========================Start Function====================
		private: System::Void VehicleInquiryConnected()
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
			dataGridView1->DataSource=sqlDt;
		}
		//========================End Function====================


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void VehicleInquiry_Load(System::Object^ sender, System::EventArgs^ e) {
	VehicleInquiryConnected();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {

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
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime dt = DateTime::Now;
	DateTime da = DateTime::Now;
	label5->Text = dt.Now.ToLongTimeString();
	label7->Text = dt.Now.ToLongDateString();

}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try
	{
		if (e->KeyChar == (char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("VehicleNumber like '%{0}%'", textBox2->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("VehicleNumber like '%{0}%'", textBox2->Text);
			dataGridView1->DataSource = dv->ToTable();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try
	{
		if (e->KeyChar == (char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("CustomerNIC like '%{0}%'", textBox1->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		DataView^ dv = sqlDt->DefaultView;
		dv->RowFilter = String::Format("CustomerNIC like '%{0}%'", textBox1->Text);
		dataGridView1->DataSource = dv->ToTable();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	try
	{
		if (e->KeyChar == (char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("VehicleChassisNumber like '%{0}%'", textBox3->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		DataView^ dv = sqlDt->DefaultView;
		dv->RowFilter = String::Format("VehicleChassisNumber like '%{0}%'", textBox3->Text);
		dataGridView1->DataSource = dv->ToTable();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		sqlconn->ConnectionString = "datasource = localhost;port=3306; username=root; \
		password=gallesrilanka@123; database=wdautoworld";
		sqlcmd->Connection = sqlconn;

		String^ ID = textBox1->Text;
		MySqlDataAdapter^ sqldtA = gcnew MySqlDataAdapter("Select * from wdautoworld.vehicledetails", sqlconn);
		DataTable^ sqldt = gcnew DataTable();
		sqldtA->Fill(sqldt);
		dataGridView1->DataSource = sqlDt;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);

	}
}
};
}
