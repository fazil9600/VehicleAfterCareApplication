#pragma once

namespace CarSaleProjectWD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VehicleServiceCheckList
	/// </summary>
	public ref class VehicleServiceCheckList : public System::Windows::Forms::Form
	{
	public:
		VehicleServiceCheckList(void)
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
		~VehicleServiceCheckList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(110, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(557, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WD AUTOWORLD - VEHICLE SERVICE CHECKLIST";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				71.53846F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.46154F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				214)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				148)));
			this->tableLayoutPanel1->Controls->Add(this->checkBox1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->checkBox2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox3, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox4, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox5, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox6, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox7, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox8, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox9, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->checkBox10, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox11, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox12, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox13, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox14, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox15, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox16, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label15, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox4, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox5, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox6, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox7, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox8, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox17, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox18, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox9, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox10, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox11, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox12, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox13, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox14, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox15, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox16, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox17, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox18, 3, 8);
			this->tableLayoutPanel1->Location = System::Drawing::Point(40, 188);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 9;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.13636F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.86364F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(730, 351);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(230, 3);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(230, 45);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(230, 85);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 1;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(230, 137);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 1;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(230, 175);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 1;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(230, 206);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 1;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(230, 235);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 1;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(230, 273);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 1;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(320, 3);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(15, 14);
			this->checkBox9->TabIndex = 1;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(320, 45);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 1;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(320, 85);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 1;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(320, 137);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(15, 14);
			this->checkBox12->TabIndex = 1;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(320, 175);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(15, 14);
			this->checkBox13->TabIndex = 1;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(320, 206);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(15, 14);
			this->checkBox14->TabIndex = 1;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(320, 235);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(15, 14);
			this->checkBox15->TabIndex = 1;
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(320, 273);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(15, 14);
			this->checkBox16->TabIndex = 1;
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Coolant Check";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Oil Check";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(134, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Auto / Manual Transmision";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 134);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Power Steerinh";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 172);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Brakes";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 203);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Window Washer";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 232);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(187, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Check Belts For Sig Of Fray Or Cracks";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 270);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(181, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Check Hosees For Leasks Or Bulges";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 301);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(221, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Check Engine and Ground For Sign of Leaks\'";
			this->label15->Click += gcnew System::EventHandler(this, &VehicleServiceCheckList::label15_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(370, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(208, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(370, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(208, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(370, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(208, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(370, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(208, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(370, 175);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(208, 20);
			this->textBox5->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(370, 206);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(208, 20);
			this->textBox6->TabIndex = 3;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(370, 235);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(208, 20);
			this->textBox7->TabIndex = 3;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(370, 273);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(208, 20);
			this->textBox8->TabIndex = 3;
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(230, 304);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(15, 14);
			this->checkBox17->TabIndex = 1;
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(320, 304);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(15, 14);
			this->checkBox18->TabIndex = 1;
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &VehicleServiceCheckList::checkBox1_CheckedChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(584, 3);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(142, 20);
			this->textBox9->TabIndex = 4;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(584, 45);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(142, 20);
			this->textBox10->TabIndex = 4;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(584, 85);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(142, 20);
			this->textBox11->TabIndex = 4;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(584, 137);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(142, 20);
			this->textBox12->TabIndex = 4;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(584, 175);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(142, 20);
			this->textBox13->TabIndex = 4;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(584, 206);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(142, 20);
			this->textBox14->TabIndex = 4;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(584, 235);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(142, 20);
			this->textBox15->TabIndex = 4;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(584, 273);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(142, 20);
			this->textBox16->TabIndex = 4;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(584, 304);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(142, 20);
			this->textBox17->TabIndex = 4;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(370, 304);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(208, 20);
			this->textBox18->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(134, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ITEM";
			this->label2->Click += gcnew System::EventHandler(this, &VehicleServiceCheckList::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(311, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"OK";
			this->label3->Click += gcnew System::EventHandler(this, &VehicleServiceCheckList::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(386, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"NOT OK";
			this->label4->Click += gcnew System::EventHandler(this, &VehicleServiceCheckList::label2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(517, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 15);
			this->label5->TabIndex = 3;
			this->label5->Text = L"HANDLED BY";
			this->label5->Click += gcnew System::EventHandler(this, &VehicleServiceCheckList::label2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(685, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 15);
			this->label6->TabIndex = 3;
			this->label6->Text = L"COST";
			this->label6->Click += gcnew System::EventHandler(this, &VehicleServiceCheckList::label2_Click);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(625, 554);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(142, 20);
			this->textBox19->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(658, 607);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"SAVE";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 33);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Back to Portal";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// VehicleServiceCheckList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 655);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox19);
			this->Name = L"VehicleServiceCheckList";
			this->Text = L"VehicleServiceCheckList";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
