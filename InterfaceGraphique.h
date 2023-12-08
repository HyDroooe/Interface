#pragma once
#include "GestionClient.h"
#include "GestionStock.h"
namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InterfaceGraphique
	/// </summary>
	public ref class InterfaceGraphique : public System::Windows::Forms::Form
	{
	public:
		InterfaceGraphique(void)
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
		~InterfaceGraphique()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InterfaceGraphique::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gérer les Personnels";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceGraphique::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gérer les clients";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InterfaceGraphique::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gérer les commandes";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 325);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(138, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gérer le stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &InterfaceGraphique::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 393);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Gérer les statistiques";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Location = System::Drawing::Point(148, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(559, 73);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Bienvenu a vous !";
			this->label1->Click += gcnew System::EventHandler(this, &InterfaceGraphique::label1_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(156, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(735, 481);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &InterfaceGraphique::panel1_Paint);
			// 
			// InterfaceGraphique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(892, 481);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"InterfaceGraphique";
			this->Text = L"InterfaceGraphique";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {



}
	   private: System::Void ShowForm(Form^ formToShow) {
		   // Clear existing controls from the panel
		   panel1->Controls->Clear();

		   // Add the new form to the panel
		   formToShow->TopLevel = false;
		   formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		   formToShow->Dock = DockStyle::Fill;
		   panel1->Controls->Add(formToShow);
		   formToShow->Show();
	   }
			  
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ShowForm(gcnew Interface::GestionClient());
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ShowForm(gcnew Interface::GestionStock());
}
};
}
