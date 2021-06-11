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
	/// Summary for VehicleInquiryCopy
	/// </summary>
	public ref class VehicleInquiryCopy : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
	private: System::Windows::Forms::Button^ button4;




















	public:
		VehicleInquiryCopy(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//timer1->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VehicleInquiryCopy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:









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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 247);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(892, 255);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VehicleInquiryCopy::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VehicleInquiryCopy::dataGridView1_CellContentClick);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &VehicleInquiryCopy::timer1_Tick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1131, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VehicleInquiryCopy::button4_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(198, 74);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 34);
			this->textBox2->TabIndex = 115;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(195, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 114;
			this->label3->Text = L"Customer Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 113;
			this->label2->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 74);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 34);
			this->textBox1->TabIndex = 112;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(554, 183);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 111;
			this->label13->Text = L"Special Notes";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(378, 183);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 109;
			this->label10->Text = L"Year Of Manufacture";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(378, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 13);
			this->label7->TabIndex = 108;
			this->label7->Text = L"Engine Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(740, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 107;
			this->label6->Text = L"Customer Mobile";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(740, 122);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 13);
			this->label12->TabIndex = 106;
			this->label12->Text = L"Engine Capacity";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(195, 183);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 13);
			this->label9->TabIndex = 105;
			this->label9->Text = L"Vehicle Model";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(195, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 104;
			this->label8->Text = L"Chassis Number";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(557, 55);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 103;
			this->label11->Text = L"Customer NIC";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(557, 122);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 102;
			this->label14->Text = L"Fuel Type";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 183);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(72, 13);
			this->label15->TabIndex = 101;
			this->label15->Text = L"Vehicle Make";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 122);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 13);
			this->label16->TabIndex = 110;
			this->label16->Text = L"Vehicle Number";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(374, 55);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 13);
			this->label17->TabIndex = 100;
			this->label17->Text = L"Customer Name";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(557, 199);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(161, 28);
			this->textBox12->TabIndex = 98;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(381, 199);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(161, 28);
			this->textBox9->TabIndex = 97;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(381, 138);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(161, 28);
			this->textBox6->TabIndex = 96;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(743, 74);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 34);
			this->textBox4->TabIndex = 95;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(743, 138);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(161, 28);
			this->textBox11->TabIndex = 94;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(557, 138);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(161, 28);
			this->textBox10->TabIndex = 93;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(198, 199);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(161, 28);
			this->textBox8->TabIndex = 92;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 199);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(161, 28);
			this->textBox7->TabIndex = 91;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(198, 138);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 28);
			this->textBox5->TabIndex = 90;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(12, 138);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(161, 28);
			this->textBox13->TabIndex = 89;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(560, 74);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(161, 34);
			this->textBox14->TabIndex = 99;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(374, 74);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(161, 34);
			this->textBox15->TabIndex = 88;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(612, 521);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 50);
			this->button1->TabIndex = 116;
			this->button1->Text = L"UPDATE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VehicleInquiryCopy::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(743, 521);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 50);
			this->button2->TabIndex = 116;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// VehicleInquiryCopy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 583);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
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
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"VehicleInquiryCopy";
			this->Text = L"VehicleInquiryCopy";
			this->Load += gcnew System::EventHandler(this, &VehicleInquiryCopy::VehicleInquiryCopy_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//========================Start Function====================
	private: System::Void VehicleInquiryCopyConnected()
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
		dataGridView1->DataSource = sqlDt;
	}
		   //========================End Function====================


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void VehicleInquiryCopy_Load(System::Object^ sender, System::EventArgs^ e) {
		VehicleInquiryCopyConnected();
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
		/*DateTime dt = DateTime::Now;
		DateTime da = DateTime::Now;
		label5->Text = dt.Now.ToLongTimeString();
		label7->Text = dt.Now.ToLongDateString();*/

	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		//try
		//{
		//	if (e->KeyChar == (char)13)
		//	{
		//		DataView^ dv = sqlDt->DefaultView;
		//		dv->RowFilter = String::Format("VehicleNumber like '%{0}%'", textBox2->Text);
		//		dataGridView1->DataSource = dv->ToTable();
		//	}
		//}
		//catch (Exception^ ex)
		//{
		//	MessageBox::Show(ex->Message);
		//}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		//try
		//{
		//	DataView^ dv = sqlDt->DefaultView;
		//	dv->RowFilter = String::Format("VehicleNumber like '%{0}%'", textBox2->Text);
		//	dataGridView1->DataSource = dv->ToTable();
		//}
		//catch (Exception^ ex)
		//{
		//	MessageBox::Show(ex->Message);
		//}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		//try
		//{
		//	if (e->KeyChar == (char)13)
		//	{
		//		DataView^ dv = sqlDt->DefaultView;
		//		dv->RowFilter = String::Format("CustomerNIC like '%{0}%'", textBox1->Text);
		//		dataGridView1->DataSource = dv->ToTable();
		//	}
		//}
		//catch (Exception^ ex)
		//{
		//	MessageBox::Show(ex->Message);
		//}


	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//try
		//{
		//	DataView^ dv = sqlDt->DefaultView;
		//	dv->RowFilter = String::Format("CustomerNIC like '%{0}%'", textBox1->Text);
		//	dataGridView1->DataSource = dv->ToTable();
		//}
		//catch (Exception^ ex)
		//{
		//	MessageBox::Show(ex->Message);
		//}
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//try
		//{
		//	if (e->KeyChar == (char)13)
		//	{
		//		DataView^ dv = sqlDt->DefaultView;
		//		dv->RowFilter = String::Format("VehicleChassisNumber like '%{0}%'", textBox3->Text);
		//		dataGridView1->DataSource = dv->ToTable();
		//	}
		//}
		//catch (Exception^ ex)
		//{
		//	MessageBox::Show(ex->Message);
		//}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//try
		//{
		//	DataView^ dv = sqlDt->DefaultView;
		//	dv->RowFilter = String::Format("VehicleChassisNumber like '%{0}%'", textBox3->Text);
		//	dataGridView1->DataSource = dv->ToTable();
		//}
		//catch (Exception^ ex)
		//{
		//	MessageBox::Show(ex->Message);
		//}

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//try
		//{
		//	sqlconn->ConnectionString = "datasource = localhost;port=3306; username=root; \
		//password=gallesrilanka@123; database=wdautoworld";
		//	sqlcmd->Connection = sqlconn;

		//	String^ ID = textBox1->Text;
		//	MySqlDataAdapter^ sqldtA = gcnew MySqlDataAdapter("Select * from wdautoworld.vehicledetails", sqlconn);
		//	DataTable^ sqldt = gcnew DataTable();
		//	sqldtA->Fill(sqldt);
		//	dataGridView1->DataSource = sqlDt;
		//}
		//catch (Exception^ ex)
		//{
		//	MessageBox::Show(ex->Message);

		//}
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		sqlconn->ConnectionString = "datasource = localhost;port=3306; username=root; \
			password=gallesrilanka@123; database=wdautoworld";
		sqlcmd->Connection = sqlconn;
		
			try
			{
				String^ ID = textBox1->Text;
				String^ CustomerName = textBox15->Text;
				String^ CustomerNIC = textBox14->Text;
				String^ CustomerAddress = textBox2->Text;
				String^ VehicleNumber = textBox13->Text;
				String^ VehicleChassisNumber = textBox5->Text;
				String^ VehicleEngineNumber = textBox6->Text;
				String^ VehicleMake = textBox7->Text;
				String^ VehicleModel = textBox8->Text;
				String^ YOM = textBox9->Text;
				String^ FuelType = textBox10->Text;
				String^ CustomerMobile = textBox4->Text;
				String^ Notes = textBox12->Text;
				String^ EngineCapacity = textBox11->Text;


				sqlcmd->CommandText = "Update vehicledetails set ID= ' " + ID + " '\
					, CustomerName= ' " + CustomerName + " '\
					, CustomerNIC= ' " + CustomerNIC + " '\
					,CustomerAddress= ' " + CustomerAddress + " '\
					,VehicleNumber= ' " + VehicleNumber + " '\
					,VehicleChassisNumber= ' " + VehicleChassisNumber + " '\
					,VehicleEngineNumber= ' " + VehicleEngineNumber + " '\
					,VehicleMake= ' " + VehicleMake + " '\
					,VehicleModel= ' " + VehicleModel + " '\
					,YOM= ' " + YOM + " '\
					,FuelType= ' " + FuelType + " '\
					,CustomerMobile= ' " + CustomerMobile + " '\
					,Notes= ' " + Notes + " '\
					,EngineCapacity= ' " + EngineCapacity + " '\
					WHERE ID = " + ID + "", sqlconn;


				sqlconn->Open();
				sqlRd = sqlcmd->ExecuteReader();
				sqlconn->Close();
				VehicleInquiryCopyConnected();

				MessageBox::Show("Record Updated Sucesfully!", "WD AUTO WORLD UPDATE",
				MessageBoxButtons::OK, MessageBoxIcon::None);
				VehicleInquiryCopyConnected();


		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	try
	{
		textBox1->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		textBox15->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		textBox14->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		textBox2->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		textBox13->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		textBox5->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		textBox6->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		textBox7->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		textBox8->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		textBox9->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		textBox10->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
		textBox4->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
		textBox12->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
		textBox11->Text = dataGridView1->SelectedRows[0]->Cells[13]->Value->ToString();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
};
}
