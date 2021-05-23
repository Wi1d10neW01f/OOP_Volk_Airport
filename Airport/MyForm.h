#pragma once

namespace Airport {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ PIC20;

	private: System::Windows::Forms::PictureBox^ PIC15;
	private: System::Windows::Forms::PictureBox^ PIC19;


	private: System::Windows::Forms::PictureBox^ PIC18;

	private: System::Windows::Forms::PictureBox^ PIC17;

	private: System::Windows::Forms::PictureBox^ PIC16;

	private: System::Windows::Forms::PictureBox^ PIC14;

	private: System::Windows::Forms::PictureBox^ PIC13;

	private: System::Windows::Forms::PictureBox^ PIC12;

	private: System::Windows::Forms::PictureBox^ PIC11;

	private: System::Windows::Forms::PictureBox^ PIC10;


	private: System::Windows::Forms::PictureBox^ PIC5;
	private: System::Windows::Forms::PictureBox^ PIC9;

	private: System::Windows::Forms::PictureBox^ PIC8;

	private: System::Windows::Forms::PictureBox^ PIC7;

	private: System::Windows::Forms::PictureBox^ PIC6;
	private: System::Windows::Forms::PictureBox^ PIC4;
	private: System::Windows::Forms::PictureBox^ PIC3;
	private: System::Windows::Forms::PictureBox^ PIC2;
	private: System::Windows::Forms::PictureBox^ PIC1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ LBL_VOfStrips;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ Choose_HM_Strips;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->PIC20 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC15 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC19 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC18 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC17 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC16 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC14 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC13 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC12 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC11 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC10 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC5 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC9 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC8 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC7 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC6 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC4 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC3 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC2 = (gcnew System::Windows::Forms::PictureBox());
			this->PIC1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->LBL_VOfStrips = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Choose_HM_Strips = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Choose_HM_Strips))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->PIC20);
			this->groupBox1->Controls->Add(this->PIC15);
			this->groupBox1->Controls->Add(this->PIC19);
			this->groupBox1->Controls->Add(this->PIC18);
			this->groupBox1->Controls->Add(this->PIC17);
			this->groupBox1->Controls->Add(this->PIC16);
			this->groupBox1->Controls->Add(this->PIC14);
			this->groupBox1->Controls->Add(this->PIC13);
			this->groupBox1->Controls->Add(this->PIC12);
			this->groupBox1->Controls->Add(this->PIC11);
			this->groupBox1->Controls->Add(this->PIC10);
			this->groupBox1->Controls->Add(this->PIC5);
			this->groupBox1->Controls->Add(this->PIC9);
			this->groupBox1->Controls->Add(this->PIC8);
			this->groupBox1->Controls->Add(this->PIC7);
			this->groupBox1->Controls->Add(this->PIC6);
			this->groupBox1->Controls->Add(this->PIC4);
			this->groupBox1->Controls->Add(this->PIC3);
			this->groupBox1->Controls->Add(this->PIC2);
			this->groupBox1->Controls->Add(this->PIC1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(700, 940);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Landing strips";
			// 
			// PIC20
			// 
			this->PIC20->Location = System::Drawing::Point(430, 337);
			this->PIC20->Name = L"PIC20";
			this->PIC20->Size = System::Drawing::Size(100, 100);
			this->PIC20->TabIndex = 19;
			this->PIC20->TabStop = false;
			// 
			// PIC15
			// 
			this->PIC15->Location = System::Drawing::Point(430, 231);
			this->PIC15->Name = L"PIC15";
			this->PIC15->Size = System::Drawing::Size(100, 100);
			this->PIC15->TabIndex = 18;
			this->PIC15->TabStop = false;
			// 
			// PIC19
			// 
			this->PIC19->Location = System::Drawing::Point(324, 337);
			this->PIC19->Name = L"PIC19";
			this->PIC19->Size = System::Drawing::Size(100, 100);
			this->PIC19->TabIndex = 17;
			this->PIC19->TabStop = false;
			// 
			// PIC18
			// 
			this->PIC18->Location = System::Drawing::Point(218, 337);
			this->PIC18->Name = L"PIC18";
			this->PIC18->Size = System::Drawing::Size(100, 100);
			this->PIC18->TabIndex = 16;
			this->PIC18->TabStop = false;
			// 
			// PIC17
			// 
			this->PIC17->Location = System::Drawing::Point(112, 337);
			this->PIC17->Name = L"PIC17";
			this->PIC17->Size = System::Drawing::Size(100, 100);
			this->PIC17->TabIndex = 15;
			this->PIC17->TabStop = false;
			// 
			// PIC16
			// 
			this->PIC16->Location = System::Drawing::Point(6, 337);
			this->PIC16->Name = L"PIC16";
			this->PIC16->Size = System::Drawing::Size(100, 100);
			this->PIC16->TabIndex = 14;
			this->PIC16->TabStop = false;
			// 
			// PIC14
			// 
			this->PIC14->Location = System::Drawing::Point(324, 231);
			this->PIC14->Name = L"PIC14";
			this->PIC14->Size = System::Drawing::Size(100, 100);
			this->PIC14->TabIndex = 13;
			this->PIC14->TabStop = false;
			// 
			// PIC13
			// 
			this->PIC13->Location = System::Drawing::Point(218, 231);
			this->PIC13->Name = L"PIC13";
			this->PIC13->Size = System::Drawing::Size(100, 100);
			this->PIC13->TabIndex = 12;
			this->PIC13->TabStop = false;
			// 
			// PIC12
			// 
			this->PIC12->Location = System::Drawing::Point(112, 231);
			this->PIC12->Name = L"PIC12";
			this->PIC12->Size = System::Drawing::Size(100, 100);
			this->PIC12->TabIndex = 11;
			this->PIC12->TabStop = false;
			// 
			// PIC11
			// 
			this->PIC11->Location = System::Drawing::Point(6, 231);
			this->PIC11->Name = L"PIC11";
			this->PIC11->Size = System::Drawing::Size(100, 100);
			this->PIC11->TabIndex = 10;
			this->PIC11->TabStop = false;
			// 
			// PIC10
			// 
			this->PIC10->Location = System::Drawing::Point(430, 125);
			this->PIC10->Name = L"PIC10";
			this->PIC10->Size = System::Drawing::Size(100, 100);
			this->PIC10->TabIndex = 9;
			this->PIC10->TabStop = false;
			// 
			// PIC5
			// 
			this->PIC5->Location = System::Drawing::Point(430, 19);
			this->PIC5->Name = L"PIC5";
			this->PIC5->Size = System::Drawing::Size(100, 100);
			this->PIC5->TabIndex = 8;
			this->PIC5->TabStop = false;
			// 
			// PIC9
			// 
			this->PIC9->Location = System::Drawing::Point(324, 125);
			this->PIC9->Name = L"PIC9";
			this->PIC9->Size = System::Drawing::Size(100, 100);
			this->PIC9->TabIndex = 7;
			this->PIC9->TabStop = false;
			// 
			// PIC8
			// 
			this->PIC8->Location = System::Drawing::Point(218, 125);
			this->PIC8->Name = L"PIC8";
			this->PIC8->Size = System::Drawing::Size(100, 100);
			this->PIC8->TabIndex = 6;
			this->PIC8->TabStop = false;
			// 
			// PIC7
			// 
			this->PIC7->Location = System::Drawing::Point(112, 125);
			this->PIC7->Name = L"PIC7";
			this->PIC7->Size = System::Drawing::Size(100, 100);
			this->PIC7->TabIndex = 5;
			this->PIC7->TabStop = false;
			// 
			// PIC6
			// 
			this->PIC6->Location = System::Drawing::Point(6, 125);
			this->PIC6->Name = L"PIC6";
			this->PIC6->Size = System::Drawing::Size(100, 100);
			this->PIC6->TabIndex = 4;
			this->PIC6->TabStop = false;
			// 
			// PIC4
			// 
			this->PIC4->Location = System::Drawing::Point(324, 19);
			this->PIC4->Name = L"PIC4";
			this->PIC4->Size = System::Drawing::Size(100, 100);
			this->PIC4->TabIndex = 3;
			this->PIC4->TabStop = false;
			// 
			// PIC3
			// 
			this->PIC3->Location = System::Drawing::Point(218, 19);
			this->PIC3->Name = L"PIC3";
			this->PIC3->Size = System::Drawing::Size(100, 100);
			this->PIC3->TabIndex = 2;
			this->PIC3->TabStop = false;
			// 
			// PIC2
			// 
			this->PIC2->Location = System::Drawing::Point(112, 19);
			this->PIC2->Name = L"PIC2";
			this->PIC2->Size = System::Drawing::Size(100, 100);
			this->PIC2->TabIndex = 1;
			this->PIC2->TabStop = false;
			// 
			// PIC1
			// 
			this->PIC1->Location = System::Drawing::Point(6, 19);
			this->PIC1->Name = L"PIC1";
			this->PIC1->Size = System::Drawing::Size(100, 100);
			this->PIC1->TabIndex = 0;
			this->PIC1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->LBL_VOfStrips);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->Choose_HM_Strips);
			this->groupBox2->Location = System::Drawing::Point(718, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(254, 940);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Buttons and another things";
			// 
			// LBL_VOfStrips
			// 
			this->LBL_VOfStrips->AutoSize = true;
			this->LBL_VOfStrips->Location = System::Drawing::Point(41, 80);
			this->LBL_VOfStrips->Name = L"LBL_VOfStrips";
			this->LBL_VOfStrips->Size = System::Drawing::Size(83, 13);
			this->LBL_VOfStrips->TabIndex = 2;
			this->LBL_VOfStrips->Text = L"Current Value: 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"How many strips do u wanna see\?";
			// 
			// Choose_HM_Strips
			// 
			this->Choose_HM_Strips->Location = System::Drawing::Point(18, 48);
			this->Choose_HM_Strips->Maximum = 20;
			this->Choose_HM_Strips->Minimum = 1;
			this->Choose_HM_Strips->Name = L"Choose_HM_Strips";
			this->Choose_HM_Strips->Size = System::Drawing::Size(230, 45);
			this->Choose_HM_Strips->TabIndex = 0;
			this->Choose_HM_Strips->Value = 1;
			this->Choose_HM_Strips->Scroll += gcnew System::EventHandler(this, &MyForm::Choose_HM_Strips_Scroll);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 961);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Airport";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Choose_HM_Strips))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Choose_HM_Strips_Scroll(System::Object^ sender, System::EventArgs^ e) {
		LBL_VOfStrips->Text = "Current Value: ";
		LBL_VOfStrips->Text += Convert::ToString(Choose_HM_Strips->Value);
	}
};
}
