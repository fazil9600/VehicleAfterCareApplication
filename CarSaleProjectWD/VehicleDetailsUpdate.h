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
	/// Summary for VehicleDetailsUpdate
	/// </summary>
	public ref class VehicleDetailsUpdate : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	public:
		VehicleDetailsUpdate(void)
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
		~VehicleDetailsUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
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
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(218, 96);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 34);
			this->textBox2->TabIndex = 87;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(215, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 86;
			this->label3->Text = L"Customer Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 85;
			this->label2->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 96);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 34);
			this->textBox1->TabIndex = 84;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(574, 205);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 83;
			this->label13->Text = L"Special Notes";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(398, 205);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 81;
			this->label10->Text = L"Year Of Manufacture";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(398, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 13);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Engine Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(760, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 79;
			this->label6->Text = L"Customer Mobile";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(760, 144);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 13);
			this->label12->TabIndex = 78;
			this->label12->Text = L"Engine Capacity";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(215, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 13);
			this->label9->TabIndex = 77;
			this->label9->Text = L"Vehicle Model";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(215, 144);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 76;
			this->label8->Text = L"Chassis Number";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(577, 77);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 75;
			this->label11->Text = L"Customer NIC";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(577, 144);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 74;
			this->label14->Text = L"Fuel Type";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(32, 205);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(72, 13);
			this->label15->TabIndex = 73;
			this->label15->Text = L"Vehicle Make";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(32, 144);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 13);
			this->label16->TabIndex = 82;
			this->label16->Text = L"Vehicle Number";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(394, 77);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 13);
			this->label17->TabIndex = 72;
			this->label17->Text = L"Customer Name";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(577, 221);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(161, 28);
			this->textBox12->TabIndex = 70;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(401, 221);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(161, 28);
			this->textBox9->TabIndex = 69;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(401, 160);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(161, 28);
			this->textBox6->TabIndex = 68;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(763, 96);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 34);
			this->textBox4->TabIndex = 67;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(763, 160);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(161, 28);
			this->textBox11->TabIndex = 66;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(577, 160);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(161, 28);
			this->textBox10->TabIndex = 65;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(218, 221);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(161, 28);
			this->textBox8->TabIndex = 64;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(32, 221);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(161, 28);
			this->textBox7->TabIndex = 63;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(218, 160);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 28);
			this->textBox5->TabIndex = 62;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(32, 160);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(161, 28);
			this->textBox13->TabIndex = 61;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(580, 96);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(161, 34);
			this->textBox14->TabIndex = 71;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(394, 96);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(161, 34);
			this->textBox15->TabIndex = 60;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(168, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(503, 25);
			this->label1->TabIndex = 88;
			this->label1->Text = L"WD AUTOWORLD VEHICLE DETAILS UPDATE";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(558, 500);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 51);
			this->button1->TabIndex = 90;
			this->button1->Text = L"UPDATE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VehicleDetailsUpdate::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(702, 500);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 51);
			this->button2->TabIndex = 90;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(32, 272);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(892, 183);
			this->dataGridView1->TabIndex = 91;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VehicleDetailsUpdate::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VehicleDetailsUpdate::dataGridView1_CellContentClick);
			// 
			// VehicleDetailsUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 576);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
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
			this->Name = L"VehicleDetailsUpdate";
			this->Text = L"VehicleDetailsUpdate";
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
			dataGridView1->DataSource = sqlDt;
		}
			   //========================End Function====================

		//========================Start Function====================
	private: System::Void AccessToWDAutoWorldDB()
	{
		sqlconn->ConnectionString = "datasource = localhost;port=3306; username=root; \
			password=gallesrilanka@123; database=wdautoworld";
	}
		   //========================End Function======================

	private: System::Void VehicleDetailsUpdate_Load(System::Object^ sender, System::EventArgs^ e) {
		VehicleInquiryConnected();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		AccessToWDAutoWorldDB();
		sqlconn->Open();
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


			sqlcmd->CommandText = "update wdautoworld.vehicledetails (set ID = ' " + ID + " ', CustomerName ' " + CustomerName + " ', CustomerNIC ' " + CustomerNIC + " ',CustomerAddress ' " + CustomerAddress + " ',VehicleNumber ' " + VehicleNumber + " ',VehicleChassisNumber ' " + VehicleChassisNumber + " ',VehicleEngineNumber ' " + VehicleEngineNumber + " ',VehicleMake ' " + VehicleMake + " ',VehicleModel ' " + VehicleModel + " ',YOM ' " + YOM + " ',FuelType ' " + FuelType + " ',CustomerMobile ' " + CustomerMobile + " ',Notes ' " + Notes + " ',EngineCapacity ' " + EngineCapacity + " 'WHERE ID = " + ID + "", sqlconn;
			

			sqlconn->Open();
			sqlRd = sqlcmd->ExecuteReader();
			sqlconn->Close();
			VehicleInquiryConnected();


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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
