#pragma once
#include "plane.h";
#include <time.h>
#include "airship.h"
#include "helicopter.h";
#include <random>
#include <Windows.h>
namespace Airport {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
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
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;




	private: System::Windows::Forms::PictureBox^ PIC1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ LBL_END;
	private: System::Windows::Forms::Label^ LBL_FUEL;








	private: System::Windows::Forms::Label^ LBL_HEIGHT;

	private: System::Windows::Forms::Label^ LBL_SPEED;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ BUT_Helicopter;

	private: System::Windows::Forms::Button^ BUT_Plane;

	private: System::Windows::Forms::Button^ BUT_Airship;
	private: System::Windows::Forms::Button^ BUT_Simulation;
	private: System::Windows::Forms::Label^ LBL_Left;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ LBL_Count;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BUT_Birds;
	private: System::Windows::Forms::Button^ BUT_Rain;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->LBL_HEIGHT = (gcnew System::Windows::Forms::Label());
			this->LBL_SPEED = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->LBL_END = (gcnew System::Windows::Forms::Label());
			this->LBL_FUEL = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PIC1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->BUT_Rain = (gcnew System::Windows::Forms::Button());
			this->BUT_Birds = (gcnew System::Windows::Forms::Button());
			this->LBL_Left = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->LBL_Count = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BUT_Simulation = (gcnew System::Windows::Forms::Button());
			this->BUT_Helicopter = (gcnew System::Windows::Forms::Button());
			this->BUT_Plane = (gcnew System::Windows::Forms::Button());
			this->BUT_Airship = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->LBL_HEIGHT);
			this->groupBox1->Controls->Add(this->LBL_SPEED);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->LBL_END);
			this->groupBox1->Controls->Add(this->LBL_FUEL);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->PIC1);
			this->groupBox1->Location = System::Drawing::Point(12, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(714, 552);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Strips";
			// 
			// LBL_HEIGHT
			// 
			this->LBL_HEIGHT->AutoSize = true;
			this->LBL_HEIGHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_HEIGHT->Location = System::Drawing::Point(159, 515);
			this->LBL_HEIGHT->Name = L"LBL_HEIGHT";
			this->LBL_HEIGHT->Size = System::Drawing::Size(53, 31);
			this->LBL_HEIGHT->TabIndex = 29;
			this->LBL_HEIGHT->Text = L"\?%";
			// 
			// LBL_SPEED
			// 
			this->LBL_SPEED->AutoSize = true;
			this->LBL_SPEED->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_SPEED->Location = System::Drawing::Point(159, 484);
			this->LBL_SPEED->Name = L"LBL_SPEED";
			this->LBL_SPEED->Size = System::Drawing::Size(53, 31);
			this->LBL_SPEED->TabIndex = 28;
			this->LBL_SPEED->Text = L"\?%";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(252, 515);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 31);
			this->label5->TabIndex = 27;
			this->label5->Text = L"HEIGHT";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(252, 484);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 31);
			this->label6->TabIndex = 26;
			this->label6->Text = L"SPEED";
			// 
			// LBL_END
			// 
			this->LBL_END->AutoSize = true;
			this->LBL_END->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LBL_END->Location = System::Drawing::Point(159, 453);
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
			this->LBL_FUEL->Location = System::Drawing::Point(159, 422);
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
			this->label3->Location = System::Drawing::Point(252, 453);
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
			this->label2->Location = System::Drawing::Point(252, 422);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 31);
			this->label2->TabIndex = 22;
			this->label2->Text = L"FUEL";
			// 
			// PIC1
			// 
			this->PIC1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC1.Image")));
			this->PIC1->Location = System::Drawing::Point(6, 19);
			this->PIC1->Name = L"PIC1";
			this->PIC1->Size = System::Drawing::Size(700, 400);
			this->PIC1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PIC1->TabIndex = 0;
			this->PIC1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->BUT_Rain);
			this->groupBox2->Controls->Add(this->BUT_Birds);
			this->groupBox2->Controls->Add(this->LBL_Left);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->LBL_Count);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->BUT_Simulation);
			this->groupBox2->Controls->Add(this->BUT_Helicopter);
			this->groupBox2->Controls->Add(this->BUT_Plane);
			this->groupBox2->Controls->Add(this->BUT_Airship);
			this->groupBox2->Location = System::Drawing::Point(732, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(240, 543);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Buttons and another things";
			// 
			// BUT_Rain
			// 
			this->BUT_Rain->Location = System::Drawing::Point(12, 137);
			this->BUT_Rain->Name = L"BUT_Rain";
			this->BUT_Rain->Size = System::Drawing::Size(222, 23);
			this->BUT_Rain->TabIndex = 35;
			this->BUT_Rain->Text = L"Rain Animation";
			this->BUT_Rain->UseVisualStyleBackColor = true;
			this->BUT_Rain->Click += gcnew System::EventHandler(this, &MyForm::BUT_Rain_Click);
			// 
			// BUT_Birds
			// 
			this->BUT_Birds->Location = System::Drawing::Point(10, 108);
			this->BUT_Birds->Name = L"BUT_Birds";
			this->BUT_Birds->Size = System::Drawing::Size(222, 23);
			this->BUT_Birds->TabIndex = 34;
			this->BUT_Birds->Text = L"Bird Animation";
			this->BUT_Birds->UseVisualStyleBackColor = true;
			this->BUT_Birds->Click += gcnew System::EventHandler(this, &MyForm::BUT_Birds_Click);
			// 
			// LBL_Left
			// 
			this->LBL_Left->AutoSize = true;
			this->LBL_Left->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LBL_Left->Location = System::Drawing::Point(6, 350);
			this->LBL_Left->Name = L"LBL_Left";
			this->LBL_Left->Size = System::Drawing::Size(0, 20);
			this->LBL_Left->TabIndex = 33;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 330);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 20);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Left to simulate:";
			// 
			// LBL_Count
			// 
			this->LBL_Count->AutoSize = true;
			this->LBL_Count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->LBL_Count->Location = System::Drawing::Point(6, 280);
			this->LBL_Count->Name = L"LBL_Count";
			this->LBL_Count->Size = System::Drawing::Size(0, 20);
			this->LBL_Count->TabIndex = 31;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 260);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 20);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Count of simulation:";
			// 
			// BUT_Simulation
			// 
			this->BUT_Simulation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BUT_Simulation->Location = System::Drawing::Point(10, 439);
			this->BUT_Simulation->Name = L"BUT_Simulation";
			this->BUT_Simulation->Size = System::Drawing::Size(222, 98);
			this->BUT_Simulation->TabIndex = 29;
			this->BUT_Simulation->Text = L"Simulation";
			this->BUT_Simulation->UseVisualStyleBackColor = true;
			this->BUT_Simulation->Click += gcnew System::EventHandler(this, &MyForm::BUT_Simulation_Click);
			// 
			// BUT_Helicopter
			// 
			this->BUT_Helicopter->Location = System::Drawing::Point(10, 78);
			this->BUT_Helicopter->Name = L"BUT_Helicopter";
			this->BUT_Helicopter->Size = System::Drawing::Size(222, 23);
			this->BUT_Helicopter->TabIndex = 28;
			this->BUT_Helicopter->Text = L"Spawn Helicopter (land+takeoff)";
			this->BUT_Helicopter->UseVisualStyleBackColor = true;
			this->BUT_Helicopter->Click += gcnew System::EventHandler(this, &MyForm::BUT_Helicopter_Click);
			// 
			// BUT_Plane
			// 
			this->BUT_Plane->Location = System::Drawing::Point(10, 49);
			this->BUT_Plane->Name = L"BUT_Plane";
			this->BUT_Plane->Size = System::Drawing::Size(222, 23);
			this->BUT_Plane->TabIndex = 27;
			this->BUT_Plane->Text = L"Spawn Plane (land+takeoff)";
			this->BUT_Plane->UseVisualStyleBackColor = true;
			this->BUT_Plane->Click += gcnew System::EventHandler(this, &MyForm::BUT_Plane_Click);
			// 
			// BUT_Airship
			// 
			this->BUT_Airship->Location = System::Drawing::Point(10, 20);
			this->BUT_Airship->Name = L"BUT_Airship";
			this->BUT_Airship->Size = System::Drawing::Size(222, 23);
			this->BUT_Airship->TabIndex = 26;
			this->BUT_Airship->Text = L"Spawn Airship (land+takeoff)";
			this->BUT_Airship->UseVisualStyleBackColor = true;
			this->BUT_Airship->Click += gcnew System::EventHandler(this, &MyForm::BUT_Airship_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 567);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Airport";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//constants

		plane ^ myplane = gcnew plane(random(25, 75), random(5, 50), randomSpeed(1), randomHeight(1));
		airship ^ myairship = gcnew airship(random(25, 75), random(5, 50), randomSpeed(0), randomHeight(0));
		helicopter ^ myhelicopter = gcnew helicopter(random(25, 75), random(5, 50), randomSpeed(2), randomHeight(2));
		String ^ path = "C:\\Users\\admin\\source\\repos\\Airport\\Pictures\\";//change me!
		//constants

		//randomazers
		int random(int min, int max) {
			return(rand() % (max - min) + min);
		}
		int randomMinMax() {
			return(rand() % (101 - 0));
		}
		int randomSpeed(int a) {//0==airship, 1==plane, 2==helicopter
			int max, min = 0;
			switch (a) {
			case 0: {
				max = 140;
				min = 120;
				break;
			}
			case 1: {
				max = 250;
				min = 175;
				break;
			}
			case 2: {
				max = 100;
				min = 90;
				break;
			}
			default: {
				break;
			}
			}
			return (rand() % (max - min) + min);
		}
		int randomHeight(int a) {
			int max, min = 0;
			switch (a) {
			case 0: {
				max = 250;
				min = 150;
				break;
			}
			case 1: {
				max = 150;
				break;
			}
			case 2: {
				max = 300;
				break;
			}
			default: {
				break;
			}
			}
			return (rand() % (max - min) + min);
		}
		//randomazers

		//spawners
		void airshipSpawn() {
			myairship->endurance = random(5, 50);
			myairship->speed = randomSpeed(0);
			myairship->fuel = random(25, 75);
			myairship->heigth = randomHeight(0);
			LBL_END->Text = myairship->endurance.ToString();
			LBL_SPEED->Text = myairship->speed.ToString();
			LBL_FUEL->Text = myairship->fuel.ToString();
			LBL_HEIGHT->Text = myairship->heigth.ToString();
			LBL_END->Refresh();
			LBL_SPEED->Refresh();
			LBL_FUEL->Refresh();
			LBL_HEIGHT->Refresh();
			startAnimation(0, 0);
		}
		void planeSpawn() {
			myplane->endurance = random(5, 50);
			myplane->speed = randomSpeed(1);
			myplane->fuel = random(25, 75);
			myplane->heigth = randomHeight(1);
			LBL_END->Text = myplane->endurance.ToString();
			LBL_SPEED->Text = myplane->speed.ToString();
			LBL_FUEL->Text = myplane->fuel.ToString();
			LBL_HEIGHT->Text = myplane->heigth.ToString();
			LBL_END->Refresh();
			LBL_SPEED->Refresh();
			LBL_FUEL->Refresh();
			LBL_HEIGHT->Refresh();
			startAnimation(1, 0);
		}
		void heliSpawn() {
			myhelicopter->fuel = random(5, 50);
			myhelicopter->speed = randomSpeed(2);
			myhelicopter->endurance = random(25, 75);
			myhelicopter->heigth = randomHeight(2);
			LBL_END->Text = myhelicopter->endurance.ToString();
			LBL_SPEED->Text = myhelicopter->speed.ToString();
			LBL_FUEL->Text = myhelicopter->fuel.ToString();
			LBL_HEIGHT->Text = myhelicopter->heigth.ToString();
			LBL_END->Refresh();
			LBL_SPEED->Refresh();
			LBL_FUEL->Refresh();
			LBL_HEIGHT->Refresh();
			startAnimation(2, 0);
		}
	private: System::Void BUT_Airship_Click(System::Object ^ sender, System::EventArgs ^ e) {
		airshipSpawn();
	}
	private: System::Void BUT_Plane_Click(System::Object ^ sender, System::EventArgs ^ e) {
		planeSpawn();
	}
	private: System::Void BUT_Helicopter_Click(System::Object ^ sender, System::EventArgs ^ e) {
		heliSpawn();
	}
			 void spawnSmth(int a) {
				 switch (a) {
				 case 0: {
					 airshipSpawn();
					 break;
				 }
				 case 1: {
					 planeSpawn();
					 break;
				 }
				 case 2: {
					 heliSpawn();
					 break;
				 }
				 }
			 }
			 //spawners
			 //function for manage objects
			 void Refuel(bool Ship, bool Plane, bool Heli) {
				 LBL_FUEL->Text = "";
				 LBL_FUEL->Refresh();
				 if (Ship && !Plane && !Heli) {
					 myairship->refuel();
					 if (myairship->fuel > 100)
						 myairship->fuel = 100;
					 LBL_FUEL->Text = myairship->fuel.ToString();
				 }
				 if (Plane && !Ship && !Heli) {
					 myplane->refuel();
					 if (myplane->fuel > 100)
						 myplane->fuel = 100;
					 LBL_FUEL->Text = myplane->fuel.ToString();
				 }
				 if (Heli && !Ship && !Plane) {
					 myhelicopter->refuel();
					 if (myhelicopter->fuel > 100)
						 myhelicopter->fuel = 100;
					 LBL_FUEL->Text = myhelicopter->fuel.ToString();
				 }
				 LBL_FUEL->Refresh();
			 }
			 void Repair(bool Ship, bool Plane, bool Heli) {
				 LBL_END->Text = "";
				 LBL_END->Refresh();
				 if (Ship && !Plane && !Heli) {
					 myairship->repair();
					 if (myairship->endurance > 100)
						 myairship->endurance = 100;
					 LBL_END->Text = myairship->endurance.ToString();
				 }
				 if (Plane && !Ship && !Heli) {
					 myplane->repair();
					 if (myplane->endurance > 100)
						 myplane->endurance = 100;
					 LBL_END->Text = myplane->endurance.ToString();
				 }
				 if (Heli && !Ship && !Plane) {
					 myhelicopter->repair();
					 if (myhelicopter->endurance > 100)
						 myhelicopter->endurance = 100;
					 LBL_END->Text = myhelicopter->endurance.ToString();
				 }
				 LBL_END->Refresh();
			 }
			 void SpeedDecrease(bool Ship, bool Plane, bool Heli) {
				 if (Ship && !Plane && !Heli) {
					 myairship->decrease();
					 LBL_SPEED->Text = myairship->speed.ToString();
				 }
				 if (Plane && !Ship && !Heli) {
					 myplane->decrease();
					 LBL_SPEED->Text = myplane->speed.ToString();
				 }
				 if (Heli && !Ship && !Plane) {
					 myhelicopter->decrease();
					 LBL_SPEED->Text = myhelicopter->speed.ToString();
				 }
				 LBL_SPEED->Refresh();
			 }
			 void SpeedIncrease(bool Ship, bool Plane, bool Heli) {
				 if (Ship && !Plane && !Heli) {
					 myairship->increase();
					 LBL_SPEED->Text = myairship->speed.ToString();
				 }
				 if (Plane && !Ship && !Heli) {
					 myplane->increase();
					 LBL_SPEED->Text = myplane->speed.ToString();
				 }
				 if (Heli && !Ship && !Plane) {
					 myhelicopter->increase();
					 LBL_SPEED->Text = myhelicopter->speed.ToString();
				 }
				 LBL_SPEED->Refresh();
			 }
			 void HeightDecrease(bool Ship, bool Plane, bool Heli) {
				 if (Ship && !Plane && !Heli) {
					 myairship->down();
					 LBL_HEIGHT->Text = myairship->heigth.ToString();
				 }
				 if (Plane && !Ship && !Heli) {
					 myplane->down();
					 LBL_HEIGHT->Text = myplane->heigth.ToString();
				 }
				 if (Heli && !Ship && !Plane) {
					 myhelicopter->down();
					 LBL_HEIGHT->Text = myhelicopter->heigth.ToString();
				 }
				 LBL_HEIGHT->Refresh();
			 }
			 void HeightIncrease(bool Ship, bool Plane, bool Heli) {
				 if (Ship && !Plane && !Heli) {
					 myairship->climb();
					 LBL_HEIGHT->Text = myairship->heigth.ToString();
				 }
				 if (Plane && !Ship && !Heli) {
					 myplane->climb();
					 LBL_HEIGHT->Text = myplane->heigth.ToString();
				 }
				 if (Heli && !Ship && !Plane) {
					 myhelicopter->climb();
					 LBL_HEIGHT->Text = myhelicopter->heigth.ToString();
				 }
				 LBL_HEIGHT->Refresh();
			 }
			 //function for manage objects

			 //simulation
	private: System::Void BUT_Simulation_Click(System::Object ^ sender, System::EventArgs ^ e) {
		Random^ k = gcnew Random;
		int SimulationCount = 10;
		for (int i = 0; i < SimulationCount; i++) {
			int a = k->Next(0, 3);
			LBL_Count->Text = (i + 1).ToString();
			LBL_Left->Text = (SimulationCount - i - 1).ToString();
			LBL_Count->Refresh();
			LBL_Left->Refresh();
			Thread::Sleep(1000);
			spawnSmth(a);
		}
		PIC1->Image = Image::FromFile(path + "source and psd\\base strips.png");
		System::Windows::Forms::MessageBox::Show("count of simulation: " + SimulationCount.ToString() + "\n" + "Count of birds: "
			+ countBird + "\n" + "Count of rains: " + countRain + "\n" + "Count of Planes: " + countPlane +
			"\n" + "Count of Airships: " + countAirship + "\n" + "Count of Helicopters: " + countHeli +
			"\n" + "Count of rains and Airships: " + RainAir + "\n" + "Count of rains and Planes: " + RainPlane +
			"\n" + "Count of rains and Helicopters: " + RainHeli + "\n" + "Count of birds and Airships: " + BirdAir +
			"\n" + "Count of birds and Planes: " + BirdPlane + "\n" + "Count of birds and Helicopters: " + BirdHeli
			, "Result of simulation", MessageBoxButtons::OK , MessageBoxIcon::Asterisk);
		countBird = 0, countRain = 0, countHeli = 0, countPlane = 0, countAirship = 0;
		BirdAir = 0, BirdHeli = 0, BirdPlane = 0;
		RainAir = 0, RainHeli = 0, RainPlane = 0;
	}
			 //simulation
			 int countBird = 0, countRain = 0, countHeli = 0, countPlane = 0, countAirship = 0;
			 int BirdAir = 0, BirdHeli = 0, BirdPlane = 0;
			 int RainAir = 0, RainHeli = 0, RainPlane = 0;
			 void startAnimation(int type, bool TL) {
				 String^ temp = path;
				 bool Plane = 0, Ship = 0, Heli = 0;
				 int birdRain = randomMinMax();
				 switch (type) {
				 case 0:
					 Ship = 1;
					 countAirship++;
					 break;
				 case 1:
					 Plane = 1;
					 countPlane++;
					 break;
				 case 2:
					 Heli = 1;
					 countHeli++;
					 break;
				 }
				 if (birdRain >= 75) {
					 temp += "rain\\";
					 countRain++;
					 if (Plane)
						 RainPlane++;
					 if (Heli)
						 RainHeli++;
					 if (Ship)
						 RainAir++;
					 rainAnimation(Ship, Plane, Heli, temp);
				 }
				 else if (birdRain <= 25) {
					 Animation(0, 0);
					 countBird++;
					 if (Plane)
						 BirdPlane++;
					 if (Heli)
						 BirdHeli++;
					 if (Ship)
						 BirdAir++;
					 temp += "birds\\";
					 birdAnimation(Ship, Plane, Heli, temp);
				 }
				 else {
					 Animation(0, 0);
					 Animation(0, 1);
				 }
			 }
			 void birdAnimation(bool Ship, bool Plane, bool Heli, String ^ Path) {
				 int maxcount;
				 int countofland;
				 if (Plane) {
					 Path += "plane\\";
					 maxcount = 7;
					 for (int i = 0; i < maxcount; i++) {
						 PIC1->Image = Image::FromFile(Path + i.ToString() + ".png");
						 PIC1->Refresh();
						 SpeedIncrease(Ship, Plane, Heli);
						 HeightIncrease(Ship, Plane, Heli);
						 Thread::Sleep(550);
					 }
				 }
				 if (Heli) {
					 myhelicopter->heigth = 0;
					 myhelicopter->speed = 0;
					 Path += "heli\\";
					 maxcount = 11;
					 countofland = 5;
					 for (int i = 0; i < maxcount; i++) {
						 PIC1->Image = Image::FromFile(Path + i.ToString() + ".png");
						 PIC1->Refresh();
						 if (i > countofland) {
							 SpeedDecrease(Ship, Plane, Heli);
							 HeightDecrease(Ship, Plane, Heli);
						 }
						 else {
							 SpeedIncrease(Ship, Plane, Heli);
							 HeightIncrease(Ship, Plane, Heli);
						 }
						 Thread::Sleep(550);
					 }
				 }
				 if (Ship) {
					 Path += "airship\\";
					 maxcount = 7;
					 countofland = 4;
					 for (int i = 0; i < maxcount; i++) {
						 PIC1->Image = Image::FromFile(Path + i.ToString() + ".png");
						 PIC1->Refresh();
						 if (maxcount >= countofland) {
							 SpeedDecrease(Ship, Plane, Heli);
							 HeightDecrease(Ship, Plane, Heli);
						 }
						 else {
							 SpeedIncrease(Ship, Plane, Heli);
							 HeightIncrease(Ship, Plane, Heli);
						 }
						 Thread::Sleep(550);
					 }
				 }

			 }
			 void rainAnimation(bool Ship, bool Plane, bool Heli, String ^ Path) {
				 int maxcount;
				 PIC1->Image = Image::FromFile(Path + "basestrip.png");
				 Thread::Sleep(550);
				 if (Plane) {
					 LBL_FUEL->Text = myplane->fuel.ToString();
					 LBL_SPEED->Text = myplane->speed.ToString();
					 LBL_END->Text = myplane->endurance.ToString();
					 LBL_HEIGHT->Text = myplane->heigth.ToString();
					 LBL_FUEL->Refresh();
					 LBL_SPEED->Refresh();
					 LBL_END->Refresh();
					 LBL_HEIGHT->Refresh();
					 maxcount = 7;
					 for (int i = 0; i < maxcount; i++) {
						 PIC1->Image = Image::FromFile(Path + "planeLand//" + i.ToString() + ".png");
						 PIC1->Refresh();
						 SpeedDecrease(Ship, Plane, Heli);
						 HeightDecrease(Ship, Plane, Heli);
						 Thread::Sleep(550);
					 }
					 PIC1->Image = Image::FromFile(Path + "plane.png");
					 LBL_HEIGHT->Text = "0";
					 LBL_SPEED->Text = "0";
					 LBL_SPEED->Refresh();
					 LBL_HEIGHT->Refresh();
					 Thread::Sleep(550 * 4);
					 Animation(1, 1);
				 }
				 if (Heli) {
					 Path += "heli\\";
					 LBL_FUEL->Text = myhelicopter->fuel.ToString();
					 LBL_SPEED->Text = myhelicopter->speed.ToString();
					 LBL_END->Text = myhelicopter->endurance.ToString();
					 LBL_HEIGHT->Text = myhelicopter->heigth.ToString();
					 LBL_FUEL->Refresh();
					 LBL_SPEED->Refresh();
					 LBL_END->Refresh();
					 LBL_HEIGHT->Refresh();
					 maxcount = 5;
					 for (int i = 0; i < maxcount; i++) {
						 PIC1->Image = Image::FromFile(Path + "landing\\" + i.ToString() + ".png");
						 PIC1->Refresh();
						 SpeedDecrease(Ship, Plane, Heli);
						 HeightDecrease(Ship, Plane, Heli);
						 Thread::Sleep(550);
					 }
					 LBL_HEIGHT->Text = "0";
					 LBL_SPEED->Text = "0";
					 LBL_SPEED->Refresh();
					 LBL_HEIGHT->Refresh();
					 if (Convert::ToInt32(LBL_FUEL->Text) <= 25) {
						 while (myhelicopter->fuel != 100) {
							 Thread::Sleep(550);
							 Refuel(Ship, Plane, Heli);
						 }
					 }
					 if (Convert::ToInt32(LBL_END->Text) <= 55) {
						 while (myhelicopter->endurance != 100) {
							 Thread::Sleep(550);
							 Repair(Ship, Plane, Heli);
						 }
					 }
					 for (int i = 0; i < maxcount; i++) {
						 PIC1->Image = Image::FromFile(Path + "takeoff\\" + i.ToString() + ".png");
						 PIC1->Refresh();
						 SpeedIncrease(Ship, Plane, Heli);
						 HeightIncrease(Ship, Plane, Heli);
						 Thread::Sleep(550);
					 }
				 }
				 if (Ship) {
					 LBL_FUEL->Text = myairship->fuel.ToString();
					 LBL_SPEED->Text = myairship->speed.ToString();
					 LBL_END->Text = myairship->endurance.ToString();
					 LBL_HEIGHT->Text = myairship->heigth.ToString();
					 LBL_FUEL->Refresh();
					 LBL_SPEED->Refresh();
					 LBL_END->Refresh();
					 LBL_HEIGHT->Refresh();
					 maxcount = 6;
					 for (int i = 0; i < maxcount; i++) {
						 PIC1->Image = Image::FromFile(Path + "airshipLand//" + i.ToString() + ".png");
						 PIC1->Refresh();
						 SpeedDecrease(Ship, Plane, Heli);
						 HeightDecrease(Ship, Plane, Heli);
						 Thread::Sleep(550);
					 }
					 PIC1->Image = Image::FromFile(Path + "airship.png");
					 LBL_HEIGHT->Text = "0";
					 LBL_SPEED->Text = "0";
					 LBL_SPEED->Refresh();
					 LBL_HEIGHT->Refresh();
					 Thread::Sleep(550 * 4);
					 Animation(0, 1);
				 }
			 }
			 void Animation(int type, bool TL) {//TL - 0 = landing, 1 takeoff
				 String^ temp = path;
				 int maxcount;
				 bool Ship, Plane, Heli, needRefuel, needRepair;
				 Ship = 0;
				 Plane = 0;
				 Heli = 0;
				 switch (type) {
				 case 0: {
					 temp += "airship\\";
					 maxcount = 6;
					 Ship = 1;
					 if (!TL)
						 temp += "landing\\";
					 else {
						 temp += "takeoff\\";
						 if (Convert::ToInt32(LBL_FUEL->Text) <= 15) {
							 while (myairship->fuel != 100) {
								 Thread::Sleep(550);
								 Refuel(Ship, Plane, Heli);
							 }
						 }
						 if (Convert::ToInt32(LBL_END->Text) <= 75) {
							 while (myairship->endurance != 100) {
								 Thread::Sleep(550);
								 Repair(Ship, Plane, Heli);
							 }
						 }
					 }
					 break;
				 }
				 case 1: {
					 temp += "plane\\";
					 maxcount = 7;
					 Plane = 1;
					 if (!TL)
						 temp += "landing\\";
					 else {
						 temp += "takeoff\\";
						 if (Convert::ToInt32(LBL_FUEL->Text) <= 35) {
							 while (myplane->fuel != 100) {
								 Thread::Sleep(550);
								 Refuel(Ship, Plane, Heli);
							 }
						 }
						 if (Convert::ToInt32(LBL_END->Text) <= 85) {
							 while (myplane->endurance != 100) {
								 Thread::Sleep(550);
								 Repair(Ship, Plane, Heli);
							 }
						 }
					 }
					 break;

				 }
				 case 2: {
					 temp += "helicopter\\";
					 maxcount = 5;
					 Heli = 1;
					 if (!TL)
						 temp += "landing\\";
					 else {
						 temp += "takeoff\\";
						 if (Convert::ToInt32(LBL_FUEL->Text) <= 25) {
							 while (myhelicopter->fuel != 100) {
								 Thread::Sleep(550);
								 Refuel(Ship, Plane, Heli);
							 }
						 }
						 if (Convert::ToInt32(LBL_END->Text) <= 55) {
							 while (myhelicopter->endurance != 100) {
								 Thread::Sleep(550);
								 Repair(Ship, Plane, Heli);
							 }
						 }
					 }
					 break;
				 }
				 }
				 for (int i = 0; i < maxcount; i++) {
					 PIC1->Image = Image::FromFile(temp + i.ToString() + ".png");
					 PIC1->Refresh();
					 if (!TL) {
						 SpeedDecrease(Ship, Plane, Heli);
						 HeightDecrease(Ship, Plane, Heli);
					 }
					 else {
						 SpeedIncrease(Ship, Plane, Heli);
						 HeightIncrease(Ship, Plane, Heli);
					 }
					 Thread::Sleep(550);
				 }
				 PIC1->Image = Image::FromFile(path + "source and psd\\base strips.png");
				 Ship = 0; Plane = 0; Heli = 0;
				 if (!TL) {
					 LBL_HEIGHT->Text = "0";
					 LBL_SPEED->Text = "0";
					 LBL_SPEED->Refresh();
					 LBL_HEIGHT->Refresh();

				 }
				 else {
					 LBL_END->Text = "?";
					 LBL_FUEL->Text = "?";
					 LBL_HEIGHT->Text = "?";
					 LBL_SPEED->Text = "?";
					 LBL_END->Refresh();
					 LBL_SPEED->Refresh();
					 LBL_FUEL->Refresh();
					 LBL_HEIGHT->Refresh();
				 }
			 }


	private: System::Void BUT_Birds_Click(System::Object ^ sender, System::EventArgs ^ e) {
		birdAnimation(0, 1, 0, path + "birds\\");
		birdAnimation(0, 0, 1, path + "birds\\");
		birdAnimation(1, 0, 0, path + "birds\\");
	}
	private: System::Void BUT_Rain_Click(System::Object ^ sender, System::EventArgs ^ e) {
		rainAnimation(0, 1, 0, path + "rain\\");
		rainAnimation(0, 0, 1, path + "rain\\");
		rainAnimation(1, 0, 0, path + "rain\\");
	}
};
}
