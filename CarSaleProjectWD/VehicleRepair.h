#pragma once
#include <string>
#include <string>
#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <stdlib.h>


namespace CarSaleProjectWD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for VehicleRepair
	/// </summary>
	public ref class VehicleRepair : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataReader^ sqlRd;

	private: System::Windows::Forms::Button^ button7;











	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;






		   MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();

	public:
		VehicleRepair(void)
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
		~VehicleRepair()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ tb_tax;
	private: System::Windows::Forms::TextBox^ tb_discount;


	private: System::Windows::Forms::TextBox^ tb_sub_total;
	private: System::Windows::Forms::TextBox^ tb_total;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label11;















	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ tb_wiring_rp;

private: System::Windows::Forms::TextBox^ tb_light_rp;

private: System::Windows::Forms::TextBox^ tb_buffer_head_rp;

private: System::Windows::Forms::TextBox^ tb_wheel_allignment;

private: System::Windows::Forms::TextBox^ tb_CD_unit_rp;

private: System::Windows::Forms::TextBox^ tb_per_spare_wheel_rp;

private: System::Windows::Forms::TextBox^ tb_advanced_rp;

private: System::Windows::Forms::TextBox^ tb_basic_er;


	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ tb_labour_fee;



	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Button^ button3;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VehicleRepair::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_tax = (gcnew System::Windows::Forms::TextBox());
			this->tb_discount = (gcnew System::Windows::Forms::TextBox());
			this->tb_labour_fee = (gcnew System::Windows::Forms::TextBox());
			this->tb_sub_total = (gcnew System::Windows::Forms::TextBox());
			this->tb_total = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tb_wiring_rp = (gcnew System::Windows::Forms::TextBox());
			this->tb_light_rp = (gcnew System::Windows::Forms::TextBox());
			this->tb_buffer_head_rp = (gcnew System::Windows::Forms::TextBox());
			this->tb_wheel_allignment = (gcnew System::Windows::Forms::TextBox());
			this->tb_CD_unit_rp = (gcnew System::Windows::Forms::TextBox());
			this->tb_per_spare_wheel_rp = (gcnew System::Windows::Forms::TextBox());
			this->tb_advanced_rp = (gcnew System::Windows::Forms::TextBox());
			this->tb_basic_er = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(271, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WD AUTOWORLD - VEHICLE REPAIR";
			this->label1->Click += gcnew System::EventHandler(this, &VehicleRepair::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Back to Portal";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &VehicleRepair::backgroundWorker1_DoWork);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tb_tax);
			this->groupBox1->Controls->Add(this->tb_discount);
			this->groupBox1->Controls->Add(this->tb_labour_fee);
			this->groupBox1->Controls->Add(this->tb_sub_total);
			this->groupBox1->Controls->Add(this->tb_total);
			this->groupBox1->Location = System::Drawing::Point(365, 182);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(235, 416);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Amount Total";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(95, 371);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 39);
			this->button7->TabIndex = 3;
			this->button7->Text = L"SAVE";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &VehicleRepair::button7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 25);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Total";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(22, 118);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(61, 13);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Labour Fee";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Sub Total";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"TAX";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Discount";
			// 
			// tb_tax
			// 
			this->tb_tax->Enabled = false;
			this->tb_tax->Location = System::Drawing::Point(90, 161);
			this->tb_tax->Name = L"tb_tax";
			this->tb_tax->Size = System::Drawing::Size(100, 20);
			this->tb_tax->TabIndex = 0;
			// 
			// tb_discount
			// 
			this->tb_discount->Enabled = false;
			this->tb_discount->Location = System::Drawing::Point(90, 232);
			this->tb_discount->Name = L"tb_discount";
			this->tb_discount->Size = System::Drawing::Size(100, 20);
			this->tb_discount->TabIndex = 0;
			// 
			// tb_labour_fee
			// 
			this->tb_labour_fee->Enabled = false;
			this->tb_labour_fee->Location = System::Drawing::Point(90, 114);
			this->tb_labour_fee->Name = L"tb_labour_fee";
			this->tb_labour_fee->Size = System::Drawing::Size(100, 20);
			this->tb_labour_fee->TabIndex = 0;
			// 
			// tb_sub_total
			// 
			this->tb_sub_total->Enabled = false;
			this->tb_sub_total->Location = System::Drawing::Point(90, 78);
			this->tb_sub_total->Name = L"tb_sub_total";
			this->tb_sub_total->Size = System::Drawing::Size(100, 20);
			this->tb_sub_total->TabIndex = 0;
			// 
			// tb_total
			// 
			this->tb_total->Enabled = false;
			this->tb_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_total->Location = System::Drawing::Point(77, 302);
			this->tb_total->Name = L"tb_total";
			this->tb_total->Size = System::Drawing::Size(113, 31);
			this->tb_total->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(23, 358);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(106, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Special Discount";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(703, 559);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Generate Receipt";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VehicleRepair::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(31, 182);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(304, 375);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 196);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Basic Engine Repair";
			this->label11->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 161);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Basic Engine Repair";
			this->label10->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 121);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Basic Engine Repair";
			this->label9->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Basic Engine Repair";
			this->label8->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 37);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Basic Engine Repair";
			this->label7->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 1;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(164, 321);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 0;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(164, 282);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(164, 239);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(164, 198);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(164, 156);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(164, 118);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(164, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->tb_wiring_rp);
			this->groupBox4->Controls->Add(this->tb_light_rp);
			this->groupBox4->Controls->Add(this->tb_buffer_head_rp);
			this->groupBox4->Controls->Add(this->tb_wheel_allignment);
			this->groupBox4->Controls->Add(this->tb_CD_unit_rp);
			this->groupBox4->Controls->Add(this->tb_per_spare_wheel_rp);
			this->groupBox4->Controls->Add(this->tb_advanced_rp);
			this->groupBox4->Controls->Add(this->tb_basic_er);
			this->groupBox4->Location = System::Drawing::Point(37, 182);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(304, 416);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Repair Items";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &VehicleRepair::groupBox4_Enter);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(178, 371);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Total";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VehicleRepair::button2_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(20, 324);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(71, 13);
			this->label26->TabIndex = 2;
			this->label26->Text = L"Wiring Repair";
			this->label26->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(22, 282);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(64, 13);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Light Repair";
			this->label25->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(22, 239);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(98, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Buffer Head Repair";
			this->label24->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 196);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Wheel Allignment";
			this->label12->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(22, 161);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(65, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"CD unit rpair";
			this->label13->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 121);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(119, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Per SpareWheel Repair";
			this->label14->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(20, 85);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(126, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Advanced Engine Repair";
			this->label15->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(22, 40);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Basic Engine Repair";
			this->label16->Click += gcnew System::EventHandler(this, &VehicleRepair::label7_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(28, 42);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 13);
			this->label17->TabIndex = 1;
			// 
			// tb_wiring_rp
			// 
			this->tb_wiring_rp->Location = System::Drawing::Point(164, 321);
			this->tb_wiring_rp->Name = L"tb_wiring_rp";
			this->tb_wiring_rp->Size = System::Drawing::Size(100, 20);
			this->tb_wiring_rp->TabIndex = 0;
			// 
			// tb_light_rp
			// 
			this->tb_light_rp->Location = System::Drawing::Point(164, 282);
			this->tb_light_rp->Name = L"tb_light_rp";
			this->tb_light_rp->Size = System::Drawing::Size(100, 20);
			this->tb_light_rp->TabIndex = 0;
			// 
			// tb_buffer_head_rp
			// 
			this->tb_buffer_head_rp->Location = System::Drawing::Point(164, 239);
			this->tb_buffer_head_rp->Name = L"tb_buffer_head_rp";
			this->tb_buffer_head_rp->Size = System::Drawing::Size(100, 20);
			this->tb_buffer_head_rp->TabIndex = 0;
			// 
			// tb_wheel_allignment
			// 
			this->tb_wheel_allignment->Location = System::Drawing::Point(164, 198);
			this->tb_wheel_allignment->Name = L"tb_wheel_allignment";
			this->tb_wheel_allignment->Size = System::Drawing::Size(100, 20);
			this->tb_wheel_allignment->TabIndex = 0;
			// 
			// tb_CD_unit_rp
			// 
			this->tb_CD_unit_rp->Location = System::Drawing::Point(164, 156);
			this->tb_CD_unit_rp->Name = L"tb_CD_unit_rp";
			this->tb_CD_unit_rp->Size = System::Drawing::Size(100, 20);
			this->tb_CD_unit_rp->TabIndex = 0;
			// 
			// tb_per_spare_wheel_rp
			// 
			this->tb_per_spare_wheel_rp->Location = System::Drawing::Point(164, 118);
			this->tb_per_spare_wheel_rp->Name = L"tb_per_spare_wheel_rp";
			this->tb_per_spare_wheel_rp->Size = System::Drawing::Size(100, 20);
			this->tb_per_spare_wheel_rp->TabIndex = 0;
			// 
			// tb_advanced_rp
			// 
			this->tb_advanced_rp->Location = System::Drawing::Point(164, 78);
			this->tb_advanced_rp->Name = L"tb_advanced_rp";
			this->tb_advanced_rp->Size = System::Drawing::Size(100, 20);
			this->tb_advanced_rp->TabIndex = 0;
			// 
			// tb_basic_er
			// 
			this->tb_basic_er->Location = System::Drawing::Point(164, 36);
			this->tb_basic_er->Name = L"tb_basic_er";
			this->tb_basic_er->Size = System::Drawing::Size(100, 20);
			this->tb_basic_er->TabIndex = 0;
			this->tb_basic_er->TextChanged += gcnew System::EventHandler(this, &VehicleRepair::tb_basic_er_TextChanged);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(50, 79);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(64, 13);
			this->label27->TabIndex = 6;
			this->label27->Text = L"Job Number";
			this->label27->Click += gcnew System::EventHandler(this, &VehicleRepair::label27_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(183, 79);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(64, 13);
			this->label28->TabIndex = 6;
			this->label28->Text = L"Job Number";
			this->label28->Click += gcnew System::EventHandler(this, &VehicleRepair::label27_Click);
			// 
			// textBox30
			// 
			this->textBox30->Enabled = false;
			this->textBox30->Location = System::Drawing::Point(703, 182);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(292, 367);
			this->textBox30->TabIndex = 7;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &VehicleRepair::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(878, 559);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 39);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Print Receipt";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VehicleRepair::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 26);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 33);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Back to Portal";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(909, 26);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &VehicleRepair::button6_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(37, 166);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(958, 10);
			this->panel1->TabIndex = 15;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(107, 121);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(111, 28);
			this->textBox21->TabIndex = 16;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(314, 121);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(111, 28);
			this->textBox22->TabIndex = 16;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(519, 121);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(111, 28);
			this->textBox23->TabIndex = 16;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(19, 124);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(82, 13);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Vehicle Number";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(249, 124);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 13);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Owner NIC";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(457, 124);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(38, 13);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Milage";
			// 
			// VehicleRepair
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 622);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"VehicleRepair";
			this->Text = L"VehicleRepair";
			this->Load += gcnew System::EventHandler(this, &VehicleRepair::VehicleRepair_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//========================Start Function====================
	private: System::Void AccessToWDAutoWorldDB()
	{
		sqlconn->ConnectionString = "datasource = localhost;port=3306; username=root; \
			password=gallesrilanka@123; database=wdautoworld";
	}
		   //========================End Function======================

		double itax;

		double basicEngineRepiar;
		double advancedEngineRepiar;
		double perSpareWheelRepiar;
		double cdUnitRepiar;
		double wheelAlignment;
		double bufferHeadRepiar;
		double lightRepiar;
		double wireRepiar;





	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void VehicleRepair_Load(System::Object^ sender, System::EventArgs^ e) {

		if (button2->Enabled == true && button7->Enabled == true) {
			button3->Enabled = false;
		}
		else {
			button3->Enabled = true;
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	double totalAmountFornetTax;
	double basicEr, advancedEr, perSpareWr, cdUr, wheelR, bufferR, lightr, wireR;
	double discount, discountTotal, discountNet;
	double variableLabourFee, fixedLabourFee = 10000;

	double taxrate = 17.5,discountRate = 20;

	Random^ random_1 = gcnew Random;
	int irandom = random_1->Next(2037, 32567);
	label28->Text = Convert::ToString(irandom);

	basicEngineRepiar=		Convert::ToDouble(tb_basic_er->Text);
	advancedEngineRepiar =	Convert::ToDouble(tb_advanced_rp->Text);
	perSpareWheelRepiar =	Convert::ToDouble(tb_per_spare_wheel_rp->Text);
	cdUnitRepiar =			Convert::ToDouble(tb_CD_unit_rp->Text);
	wheelAlignment =		Convert::ToDouble(tb_wheel_allignment->Text);
	bufferHeadRepiar =		Convert::ToDouble(tb_buffer_head_rp->Text);
	lightRepiar =			Convert::ToDouble(tb_light_rp->Text);
	wireRepiar	=			Convert::ToDouble(tb_wiring_rp->Text);



	/*basicEr = 1 * basicEngineRepiar;
	advancedEr = 1 * advancedEngineRepiar;
	perSpareWr = 1 * perSpareWheelRepiar;
	cdUr = 1 * cdUnitRepiar;
	wheelR = 1 * wheelAlignment;
	bufferR = 1 * bufferHeadRepiar;
	lightr = 1 * lightRepiar;
	wireR = 1 * wireRepiar;*/


	totalAmountFornetTax = Convert::ToInt32(basicEngineRepiar + advancedEngineRepiar + perSpareWheelRepiar + cdUnitRepiar + wheelAlignment + bufferHeadRepiar + lightRepiar + wireRepiar);
	itax = ((totalAmountFornetTax * taxrate) / 100);
	variableLabourFee = ((totalAmountFornetTax * 10) / 100);
	tb_labour_fee->Text = (System::Convert::ToString(variableLabourFee+fixedLabourFee));
	tb_tax->Text = (System::Convert::ToString(itax));
	tb_sub_total->Text = (System::Convert::ToString(totalAmountFornetTax));


	if (checkBox1->Checked == true)
	{
		discount = ((totalAmountFornetTax + itax) * discountRate) / 100;
		tb_discount->Text = (System::Convert::ToString(discount));
		discountTotal = ((totalAmountFornetTax + itax+variableLabourFee+fixedLabourFee) - discount);
		tb_total->Text = (System::Convert::ToString(discountTotal));

	}
	else
	{
		tb_total->Text = (System::Convert::ToString(totalAmountFornetTax + itax+variableLabourFee+fixedLabourFee));
	}

	if (button2->Enabled == true && button7->Enabled == true) {
		button3->Enabled = false;
	}
	else {
		button3->Enabled = true;
	};

}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {



	textBox30->Text = "";
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "*******************" + "\n");
	textBox30->AppendText("\t WD Officer: " + "\t");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");
	textBox30->AppendText("\t\t" + "Repair Receipt WD" + "\n");

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	printPreviewDialog1->ShowDialog();


}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

	System::Drawing::Font^ fnstring = gcnew System::Drawing::Font("Time New Roman", 16, FontStyle::Regular);

	e->Graphics->DrawString(textBox30->Text, fnstring, Brushes::Black, 100, 100);



}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

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
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		System::Windows::Forms::DialogResult iSave;
		iSave = MessageBox::Show("Confirm you want to save the transaction", "WD AUTO WORLD",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (iSave == System::Windows::Forms::DialogResult::Yes)
		{
			try {
				AccessToWDAutoWorldDB();
				sqlconn->Open();
				sqlcmd->Connection = sqlconn;
				String^ InsertDataWrap = "insert  into wdautoworld.vehiclerepairhistory (ID, jobid, basicEngineRepiar,advancedEngineRepiar,perSpareWheelRepiar,cdUnitRepiar,wheelAlignment,bufferHeadRepiar,lightRepiar,wireRepiar,total,subtotal,labourfee,tax,discount,vehicleNumber,ownerNIC,milage)" +
					"values(" +
					Convert::ToDouble(label28->Text) + "," +
					Convert::ToDouble(label28->Text) + 1 + "," +
					Convert::ToDouble(tb_basic_er->Text) + "," +
					Convert::ToDouble(tb_advanced_rp->Text) + "," +
					Convert::ToDouble(tb_per_spare_wheel_rp->Text) + "," +
					Convert::ToDouble(tb_CD_unit_rp->Text) + "," +
					Convert::ToDouble(tb_wheel_allignment->Text) + "," +
					Convert::ToDouble(tb_buffer_head_rp->Text) + "," +
					Convert::ToDouble(tb_light_rp->Text) + "," +
					Convert::ToDouble(tb_wiring_rp->Text) + "," +
					Convert::ToDouble(tb_total->Text) + "," +
					Convert::ToDouble(tb_sub_total->Text) + "," +
					Convert::ToDouble(tb_labour_fee->Text) + "," +
					Convert::ToDouble(tb_tax->Text) + "," +
					Convert::ToDouble(tb_discount->Text) + ",'" + 		
					textBox21->Text+"','"+
					textBox22->Text+"','"+ 
					textBox23->Text+"')";

				sqlcmd->CommandText = InsertDataWrap;

				sqlcmd->ExecuteNonQuery();
				sqlconn->Close();

				button7->Enabled = false;
				button2->Enabled = false;
				checkBox1->Enabled = false;

				MessageBox::Show("Record Inserted Sucesfully!", "WD AUTO WORLD INSERT",
				MessageBoxButtons::OK, MessageBoxIcon::None);

				if (button2->Enabled == false && button7->Enabled == false) {
					button3->Enabled = true;
				}
			
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);

	}




}
private: System::Void tb_basic_er_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox21_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


}
private: System::Void textBox21_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {


}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {


}
};
}
