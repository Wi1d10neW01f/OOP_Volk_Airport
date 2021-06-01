#pragma once
#include "plane.h";
#include <time.h>
namespace Airport {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	//using namespace System::Linq;
	using namespace System::Text;


	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		array <System::Windows::Forms::PictureBox^>^ Pb;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			Pb = gcnew array <System::Windows::Forms::PictureBox^>(9);
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
		}/*
	private: BackgroundWorker^ _worker;
	private: void InitWorker() {
		if (_worker != nullptr) {
			_worker->Dispose();
		}
		_worker = gcnew BackgroundWorker();
		_worker->DoWork += DoWork;
	}
			 void DoWork(Object sender, DoWorkEventArgs e) {
				 int highestPercentageReached = 0;
				 if (_worker->CancellationPending) {
					 e.Cancel = true;
				 }
				 else {
					 double i = 0.0;
					 int junk = 0;
					 for (i = 0; i < 199990000; i++) {
						 junk++;
						 int percentComplete = (int)(i / 199990000 * 100);
						 if (percentComplete > highestPercentageReached) {
							 highestPercentageReached = percentComplete;//1111
							 _worker->ReportProgress(percentComplete, result);
						 }
					 }
				 }
	}
			 void RunWorkerCompleted(Object sender, RunWorkerCompletedEventArgs e) {

			 }
			 void ProgressChanged(Object sender, ProgressChangedEventArgs e) {

			 }
			 */
	private: System::Windows::Forms::GroupBox^ groupBox1;



































	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ LBL_VOfStrips;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ Choose_HM_Strips;
	private: System::Windows::Forms::Button^ Debug_1;
	private: System::Windows::Forms::Button^ Debug_STOP;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::PictureBox^ PIC1;
	private: System::Windows::Forms::PictureBox^ PIC20;
	private: System::Windows::Forms::PictureBox^ PIC19;
	private: System::Windows::Forms::PictureBox^ PIC15;
	private: System::Windows::Forms::PictureBox^ PIC18;
	private: System::Windows::Forms::PictureBox^ PIC3;
	private: System::Windows::Forms::PictureBox^ PIC17;
	private: System::Windows::Forms::PictureBox^ PIC4;
	private: System::Windows::Forms::PictureBox^ PIC16;

	private: System::Windows::Forms::PictureBox^ PIC6;
	private: System::Windows::Forms::PictureBox^ PIC8;
	private: System::Windows::Forms::PictureBox^ PIC13;
	private: System::Windows::Forms::PictureBox^ PIC9;
	private: System::Windows::Forms::PictureBox^ PIC12;
	private: System::Windows::Forms::PictureBox^ PIC10;
	private: System::Windows::Forms::PictureBox^ PIC11;
	private: System::Windows::Forms::PictureBox^ PIC2;
	private: System::Windows::Forms::PictureBox^ PIC7;
	private: System::Windows::Forms::PictureBox^ PIC14;
private: System::Windows::Forms::Button^ BUT_DEBUG_ChangeLanding;


private: System::Windows::Forms::Timer^ ChangePic;
private: System::Windows::Forms::Button^ BUT_Change_TakeOff;
private: System::Windows::Forms::PictureBox^ PIC5;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ LBL_END;
private: System::Windows::Forms::Label^ LBL_FUEL;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ LBL_Random;










	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->LBL_END = (gcnew System::Windows::Forms::Label());
			this->LBL_FUEL = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->LBL_Random = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BUT_Change_TakeOff = (gcnew System::Windows::Forms::Button());
			this->BUT_DEBUG_ChangeLanding = (gcnew System::Windows::Forms::Button());
			this->Debug_STOP = (gcnew System::Windows::Forms::Button());
			this->Debug_1 = (gcnew System::Windows::Forms::Button());
			this->LBL_VOfStrips = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Choose_HM_Strips = (gcnew System::Windows::Forms::TrackBar());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ChangePic = (gcnew System::Windows::Forms::Timer(this->components));
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
			this->groupBox1->Controls->Add(this->LBL_END);
			this->groupBox1->Controls->Add(this->LBL_FUEL);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
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
			this->groupBox1->Location = System::Drawing::Point(12, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(714, 949);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Strips";
			// 
			// LBL_END
			// 
			this->LBL_END->AutoSize = true;
			this->LBL_END->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_END->Location = System::Drawing::Point(151, 742);
			this->LBL_END->Name = L"LBL_END";
			this->LBL_END->Size = System::Drawing::Size(53, 31);
			this->LBL_END->TabIndex = 25;
			this->LBL_END->Text = L"\?%";
			// 
			// LBL_FUEL
			// 
			this->LBL_FUEL->AutoSize = true;
			this->LBL_FUEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_FUEL->Location = System::Drawing::Point(151, 700);
			this->LBL_FUEL->Name = L"LBL_FUEL";
			this->LBL_FUEL->Size = System::Drawing::Size(53, 31);
			this->LBL_FUEL->TabIndex = 24;
			this->LBL_FUEL->Text = L"\?%";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(244, 742);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 31);
			this->label3->TabIndex = 23;
			this->label3->Text = L"ENDURANCE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(244, 700);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 31);
			this->label2->TabIndex = 22;
			this->label2->Text = L"FUEL";
			// 
			// PIC20
			// 
			this->PIC20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC20.Image")));
			this->PIC20->Location = System::Drawing::Point(614, 918);
			this->PIC20->Name = L"PIC20";
			this->PIC20->Size = System::Drawing::Size(10, 10);
			this->PIC20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC20->TabIndex = 19;
			this->PIC20->TabStop = false;
			// 
			// PIC15
			// 
			this->PIC15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC15.Image")));
			this->PIC15->Location = System::Drawing::Point(614, 902);
			this->PIC15->Name = L"PIC15";
			this->PIC15->Size = System::Drawing::Size(10, 10);
			this->PIC15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC15->TabIndex = 18;
			this->PIC15->TabStop = false;
			// 
			// PIC19
			// 
			this->PIC19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC19.Image")));
			this->PIC19->Location = System::Drawing::Point(474, 918);
			this->PIC19->Name = L"PIC19";
			this->PIC19->Size = System::Drawing::Size(10, 10);
			this->PIC19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC19->TabIndex = 17;
			this->PIC19->TabStop = false;
			// 
			// PIC18
			// 
			this->PIC18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC18.Image")));
			this->PIC18->Location = System::Drawing::Point(334, 918);
			this->PIC18->Name = L"PIC18";
			this->PIC18->Size = System::Drawing::Size(10, 10);
			this->PIC18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC18->TabIndex = 16;
			this->PIC18->TabStop = false;
			// 
			// PIC17
			// 
			this->PIC17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC17.Image")));
			this->PIC17->Location = System::Drawing::Point(194, 918);
			this->PIC17->Name = L"PIC17";
			this->PIC17->Size = System::Drawing::Size(10, 10);
			this->PIC17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC17->TabIndex = 15;
			this->PIC17->TabStop = false;
			// 
			// PIC16
			// 
			this->PIC16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC16.Image")));
			this->PIC16->Location = System::Drawing::Point(54, 918);
			this->PIC16->Name = L"PIC16";
			this->PIC16->Size = System::Drawing::Size(10, 10);
			this->PIC16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC16->TabIndex = 14;
			this->PIC16->TabStop = false;
			// 
			// PIC14
			// 
			this->PIC14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC14.Image")));
			this->PIC14->Location = System::Drawing::Point(474, 902);
			this->PIC14->Name = L"PIC14";
			this->PIC14->Size = System::Drawing::Size(10, 10);
			this->PIC14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC14->TabIndex = 13;
			this->PIC14->TabStop = false;
			// 
			// PIC13
			// 
			this->PIC13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC13.Image")));
			this->PIC13->Location = System::Drawing::Point(334, 902);
			this->PIC13->Name = L"PIC13";
			this->PIC13->Size = System::Drawing::Size(10, 10);
			this->PIC13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC13->TabIndex = 12;
			this->PIC13->TabStop = false;
			// 
			// PIC12
			// 
			this->PIC12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC12.Image")));
			this->PIC12->Location = System::Drawing::Point(194, 902);
			this->PIC12->Name = L"PIC12";
			this->PIC12->Size = System::Drawing::Size(10, 10);
			this->PIC12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC12->TabIndex = 11;
			this->PIC12->TabStop = false;
			// 
			// PIC11
			// 
			this->PIC11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC11.Image")));
			this->PIC11->Location = System::Drawing::Point(54, 902);
			this->PIC11->Name = L"PIC11";
			this->PIC11->Size = System::Drawing::Size(10, 10);
			this->PIC11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC11->TabIndex = 10;
			this->PIC11->TabStop = false;
			// 
			// PIC10
			// 
			this->PIC10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC10.Image")));
			this->PIC10->Location = System::Drawing::Point(614, 886);
			this->PIC10->Name = L"PIC10";
			this->PIC10->Size = System::Drawing::Size(10, 10);
			this->PIC10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC10->TabIndex = 9;
			this->PIC10->TabStop = false;
			// 
			// PIC5
			// 
			this->PIC5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC5.Image")));
			this->PIC5->Location = System::Drawing::Point(614, 870);
			this->PIC5->Name = L"PIC5";
			this->PIC5->Size = System::Drawing::Size(10, 10);
			this->PIC5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC5->TabIndex = 8;
			this->PIC5->TabStop = false;
			// 
			// PIC9
			// 
			this->PIC9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC9.Image")));
			this->PIC9->Location = System::Drawing::Point(474, 886);
			this->PIC9->Name = L"PIC9";
			this->PIC9->Size = System::Drawing::Size(10, 10);
			this->PIC9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC9->TabIndex = 7;
			this->PIC9->TabStop = false;
			// 
			// PIC8
			// 
			this->PIC8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC8.Image")));
			this->PIC8->Location = System::Drawing::Point(334, 886);
			this->PIC8->Name = L"PIC8";
			this->PIC8->Size = System::Drawing::Size(10, 10);
			this->PIC8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC8->TabIndex = 6;
			this->PIC8->TabStop = false;
			// 
			// PIC7
			// 
			this->PIC7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC7.Image")));
			this->PIC7->Location = System::Drawing::Point(194, 884);
			this->PIC7->Name = L"PIC7";
			this->PIC7->Size = System::Drawing::Size(10, 10);
			this->PIC7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC7->TabIndex = 5;
			this->PIC7->TabStop = false;
			// 
			// PIC6
			// 
			this->PIC6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC6.Image")));
			this->PIC6->Location = System::Drawing::Point(54, 884);
			this->PIC6->Name = L"PIC6";
			this->PIC6->Size = System::Drawing::Size(10, 10);
			this->PIC6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC6->TabIndex = 4;
			this->PIC6->TabStop = false;
			// 
			// PIC4
			// 
			this->PIC4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC4.Image")));
			this->PIC4->Location = System::Drawing::Point(474, 870);
			this->PIC4->Name = L"PIC4";
			this->PIC4->Size = System::Drawing::Size(10, 10);
			this->PIC4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC4->TabIndex = 3;
			this->PIC4->TabStop = false;
			// 
			// PIC3
			// 
			this->PIC3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC3.Image")));
			this->PIC3->Location = System::Drawing::Point(334, 870);
			this->PIC3->Name = L"PIC3";
			this->PIC3->Size = System::Drawing::Size(10, 10);
			this->PIC3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC3->TabIndex = 2;
			this->PIC3->TabStop = false;
			// 
			// PIC2
			// 
			this->PIC2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC2.Image")));
			this->PIC2->Location = System::Drawing::Point(194, 870);
			this->PIC2->Name = L"PIC2";
			this->PIC2->Size = System::Drawing::Size(10, 10);
			this->PIC2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC2->TabIndex = 1;
			this->PIC2->TabStop = false;
			// 
			// PIC1
			// 
			this->PIC1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC1.Image")));
			this->PIC1->Location = System::Drawing::Point(6, 19);
			this->PIC1->Name = L"PIC1";
			this->PIC1->Size = System::Drawing::Size(640, 670);
			this->PIC1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC1->TabIndex = 0;
			this->PIC1->TabStop = false;
			this->PIC1->Click += gcnew System::EventHandler(this, &MyForm::PIC1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->LBL_Random);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->BUT_Change_TakeOff);
			this->groupBox2->Controls->Add(this->BUT_DEBUG_ChangeLanding);
			this->groupBox2->Controls->Add(this->Debug_STOP);
			this->groupBox2->Controls->Add(this->Debug_1);
			this->groupBox2->Controls->Add(this->LBL_VOfStrips);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->Choose_HM_Strips);
			this->groupBox2->Location = System::Drawing::Point(732, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(240, 940);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Buttons and another things";
			// 
			// LBL_Random
			// 
			this->LBL_Random->AutoSize = true;
			this->LBL_Random->Location = System::Drawing::Point(18, 283);
			this->LBL_Random->Name = L"LBL_Random";
			this->LBL_Random->Size = System::Drawing::Size(35, 13);
			this->LBL_Random->TabIndex = 22;
			this->LBL_Random->Text = L"label4";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"check random";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// BUT_Change_TakeOff
			// 
			this->BUT_Change_TakeOff->Location = System::Drawing::Point(18, 194);
			this->BUT_Change_TakeOff->Name = L"BUT_Change_TakeOff";
			this->BUT_Change_TakeOff->Size = System::Drawing::Size(222, 23);
			this->BUT_Change_TakeOff->TabIndex = 20;
			this->BUT_Change_TakeOff->Text = L"Change Take Off";
			this->BUT_Change_TakeOff->UseVisualStyleBackColor = true;
			this->BUT_Change_TakeOff->Click += gcnew System::EventHandler(this, &MyForm::BUT_Change_TakeOff_Click);
			// 
			// BUT_DEBUG_ChangeLanding
			// 
			this->BUT_DEBUG_ChangeLanding->Location = System::Drawing::Point(18, 223);
			this->BUT_DEBUG_ChangeLanding->Name = L"BUT_DEBUG_ChangeLanding";
			this->BUT_DEBUG_ChangeLanding->Size = System::Drawing::Size(222, 23);
			this->BUT_DEBUG_ChangeLanding->TabIndex = 5;
			this->BUT_DEBUG_ChangeLanding->Text = L"Change landing";
			this->BUT_DEBUG_ChangeLanding->UseVisualStyleBackColor = true;
			this->BUT_DEBUG_ChangeLanding->Click += gcnew System::EventHandler(this, &MyForm::BUT_DEBUG_ChangeLanding_Click);
			// 
			// Debug_STOP
			// 
			this->Debug_STOP->Location = System::Drawing::Point(18, 154);
			this->Debug_STOP->Name = L"Debug_STOP";
			this->Debug_STOP->Size = System::Drawing::Size(230, 23);
			this->Debug_STOP->TabIndex = 4;
			this->Debug_STOP->Text = L"STOP ANY DEBUG";
			this->Debug_STOP->UseVisualStyleBackColor = true;
			this->Debug_STOP->Click += gcnew System::EventHandler(this, &MyForm::Debug_STOP_Click);
			// 
			// Debug_1
			// 
			this->Debug_1->Location = System::Drawing::Point(18, 125);
			this->Debug_1->Name = L"Debug_1";
			this->Debug_1->Size = System::Drawing::Size(230, 23);
			this->Debug_1->TabIndex = 3;
			this->Debug_1->Text = L"Debug check strips";
			this->Debug_1->UseVisualStyleBackColor = true;
			this->Debug_1->Click += gcnew System::EventHandler(this, &MyForm::Debug_1_Click);
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
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::Timer1_Tick);
			// 
			// ChangePic
			// 
			this->ChangePic->Interval = 500;
			this->ChangePic->Tick += gcnew System::EventHandler(this, &MyForm::ChangePic_Tick);
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
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
			 bool stopStrips = false;
	private: System::Void Debug_1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Debug_1->Enabled = false;
		this->Debug_STOP->Enabled = true;
		stopStrips = false;
		}

			// <array> PictureBox pici = { PIC1, PIC2, PIC3 };
			 void unshowAll() {
				 PIC2->Visible = false; PIC3->Visible = false; PIC4->Visible = false; PIC5->Visible = false; PIC6->Visible = false;
				 PIC7->Visible = false; PIC8->Visible = false; PIC9->Visible = false; PIC10->Visible = false; PIC11->Visible = false; PIC12->Visible = false;
				 PIC13->Visible = false; PIC14->Visible = false; PIC15->Visible = false; PIC16->Visible = false; PIC17->Visible = false; PIC18->Visible = false;
				 PIC19->Visible = false; PIC20->Visible = false;
			 }
			 void showAll() {
				 PIC2->Visible = true; PIC3->Visible = true; PIC4->Visible = true; PIC5->Visible = true; PIC6->Visible = true;
				 PIC7->Visible = true; PIC8->Visible = true; PIC9->Visible = true; PIC10->Visible = true; PIC11->Visible = true; PIC12->Visible = true;
				 PIC13->Visible = true; PIC14->Visible = true; PIC15->Visible = true; PIC16->Visible = true; PIC17->Visible = true; PIC18->Visible = true;
				 PIC19->Visible = true; PIC20->Visible = true;
			 }
			 void ShowStrips(int count) {
				 switch (count) {
				 case 1:
					 unshowAll();
					 break;
				 case 2:
					 unshowAll();
					 PIC2->Visible = 1;
					 break;
				 case 3:
					 unshowAll();
					/* for (int i = 1; i < 21; i++) {
						 Control result = this->Controls->Find("PIC" + Convert::ToString(i), true);
					 }*/
					 PIC2->Visible = 1;
					 PIC3->Visible = 1;
					 break;
				 case 4:
					 unshowAll();
					 PIC2->Visible = 1;
					 PIC3->Visible = 1;
					 PIC4->Visible = 1;
					 break;
				 case 5:
					 unshowAll();
					 PIC2->Visible = 1;
					 PIC3->Visible = 1;
					 PIC4->Visible = 1;
					 PIC5->Visible = 1;
					 break;
				 case 6:
					 unshowAll();
					 PIC2->Visible = 1;
					 PIC3->Visible = 1;
					 PIC4->Visible = 1;
					 PIC5->Visible = 1;
					 PIC6->Visible = 1;
					 break;
				 case 7:
					 unshowAll();
					 PIC2->Visible = 1;
					 PIC3->Visible = 1;
					 PIC4->Visible = 1;
					 PIC5->Visible = 1;
					 PIC6->Visible = 1;
					 PIC7->Visible = 1;
					 break;
				 case 8:
					 unshowAll();
					 PIC2->Visible = 1;
					 PIC3->Visible = 1;
					 PIC4->Visible = 1;
					 PIC5->Visible = 1;
					 PIC6->Visible = 1;
					 PIC7->Visible = 1;
					 PIC8->Visible = 1;
					 break;
				 case 9:
					 unshowAll();
					 PIC2->Visible = 1;
					 PIC3->Visible = 1;
					 PIC4->Visible = 1;
					 PIC5->Visible = 1;
					 PIC6->Visible = 1;
					 PIC7->Visible = 1;
					 PIC8->Visible = 1;
					 PIC9->Visible = 1;
					 break;
				 case 10:
					 unshowAll();
					 PIC2->Visible = 1;
					 PIC3->Visible = 1;
					 PIC4->Visible = 1;
					 PIC5->Visible = 1;
					 PIC6->Visible = 1;
					 PIC7->Visible = 1;
					 PIC8->Visible = 1;
					 PIC9->Visible = 1;
					 PIC10->Visible = 1;
					 break;
				 case 11:
					 showAll();
					 PIC12->Visible = 0;
					 PIC13->Visible = 0;
					 PIC14->Visible = 0;
					 PIC15->Visible = 0;
					 PIC16->Visible = 0;
					 PIC17->Visible = 0;
					 PIC18->Visible = 0;
					 PIC19->Visible = 0;
					 PIC20->Visible = 0;
					 break;
				 case 12:
					 showAll();
					 PIC13->Visible = 0;
					 PIC14->Visible = 0;
					 PIC15->Visible = 0;
					 PIC16->Visible = 0;
					 PIC17->Visible = 0;
					 PIC18->Visible = 0;
					 PIC19->Visible = 0;
					 PIC20->Visible = 0;
					 break;
				 case 13:
					 showAll();
					 PIC14->Visible = 0;
					 PIC15->Visible = 0;
					 PIC16->Visible = 0;
					 PIC17->Visible = 0;
					 PIC18->Visible = 0;
					 PIC19->Visible = 0;
					 PIC20->Visible = 0;
					 break;
				 case 14:
					 showAll();
					 PIC15->Visible = 0;
					 PIC16->Visible = 0;
					 PIC17->Visible = 0;
					 PIC18->Visible = 0;
					 PIC19->Visible = 0;
					 PIC20->Visible = 0;
					 break;
				 case 15:
					 showAll();
					 PIC16->Visible = 0;
					 PIC17->Visible = 0;
					 PIC18->Visible = 0;
					 PIC19->Visible = 0;
					 PIC20->Visible = 0;
					 break;
				 case 16:
					 showAll();
					 PIC17->Visible = 0;
					 PIC18->Visible = 0;
					 PIC19->Visible = 0;
					 PIC20->Visible = 0;
					 break;
				 case 17:
					 showAll();
					 PIC8->Visible = 1;
					 PIC9->Visible = 1;
					 PIC10->Visible = 1;
					 break;
				 case 18:
					 showAll();
					 PIC19->Visible = 0;
					 PIC20->Visible = 0;
					 break;
				 case 19:
					 showAll();
					 PIC20->Visible = 0;
					 break;
				 case 20:
					 showAll();
					 break;


				 }


			 }
	plane^ myplane = gcnew plane();
	private: System::Void Debug_STOP_Click(System::Object^ sender, System::EventArgs^ e) {
		stopStrips = true;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!stopStrips)
			ShowStrips(1);//Choose_HM_Strips->Value);
	}
	String^ path;
	bool takeoff = true;
	private: System::Void BUT_DEBUG_ChangeLanding_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaneSpawn(random(), random(), "landing");
		LBL_END->Text = "?";
		LBL_FUEL->Text = "?";
	}
	int count = 0;//ono ebanulos'
	private: System::Void ChangePic_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!takeoff) {
		//count++;
		//PIC1->Image = Image::FromFile(Convert::ToString(path + "Full\\Full\\"+count+".png"));// image.resource("img0.png");
	}
	if (count == 4) {
		count = 0;
		takeoff = true;
	}
}
	Thread^ th;
	private: System::Void BUT_Change_TakeOff_Click(System::Object^ sender, System::EventArgs^ e) {
	PlaneSpawn(random(), random(), "take off");
	LBL_END->Text = "?";
	LBL_FUEL->Text = "?";
}	
	void PlaneSpawn(int fuel, int endurance, String^ TOorLand) {
		myplane->setFuel(fuel);
		myplane->setEnd(endurance);
		SetFuelAndEndurance(fuel, endurance);
		Animation(TOorLand);
		//Threading:Thread::Sleep(1000);	 
	}
	void SetFuelAndEndurance(int fuel, int endurance) {
			 LBL_FUEL->Text = myplane->getFuel().ToString();//fuel.ToString();
			 LBL_END->Text = myplane->getEnd().ToString();//endurance.ToString();
			 LBL_FUEL->Refresh();
			 LBL_END->Refresh();
		 }
	void Animation(String^ TOorLand) {
			//path = L"C:\\Users\\admin\\source\\repos\\Wi1d10neW01f\\OOP_Volk_Airport\\Pictures\\";
			path = L"C:\\Users\\admin\\source\\repos\\Airport\\Pictures\\";
			for (int i = 1; i < 5; i++) {
				String^ temp = Convert::ToString(path + TOorLand +	"\\" + i + ".png");
				PIC1->Image = Image::FromFile(temp);// image.resource("img0.png");
				PIC1->Refresh();
				Threading:Thread::Sleep(500);
			}
			PIC1->Image = Image::FromFile(Convert::ToString(path + "base strips.png"));
		 }
	int random() {
			 Random^ k = gcnew Random(); 
			 int a = k->Next(0, 101);
			 LBL_Random->Text = a.ToString();
			 return a;
		 }
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
//	int k = random();
//	LBL_Random->Text = k.ToString();
	random();
}
	private: System::Void PIC1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
