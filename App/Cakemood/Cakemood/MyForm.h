#pragma once
#include "formulario.h"
#include "encomendas.h"


namespace Cakemood {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;


	private: System::Windows::Forms::Button^ btn_fechar;



	public:
		int flag = 0;
		MyForm(void)
		{
			InitializeComponent();

			txt_password->PasswordChar = '*';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txt_utilizador;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_login;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txt_utilizador = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->btn_fechar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(209, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(307, 266);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// txt_utilizador
			// 
			this->txt_utilizador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_utilizador->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->txt_utilizador->Location = System::Drawing::Point(317, 303);
			this->txt_utilizador->Margin = System::Windows::Forms::Padding(5);
			this->txt_utilizador->Name = L"txt_utilizador";
			this->txt_utilizador->Size = System::Drawing::Size(223, 35);
			this->txt_utilizador->TabIndex = 5;
			// 
			// txt_password
			// 
			this->txt_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_password->Location = System::Drawing::Point(317, 365);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(223, 35);
			this->txt_password->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(184, 306);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Utilizador:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(184, 368);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password:";
			// 
			// button_login
			// 
			this->button_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->button_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_login->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_login->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_login->ForeColor = System::Drawing::Color::White;
			this->button_login->Location = System::Drawing::Point(307, 472);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(111, 40);
			this->button_login->TabIndex = 5;
			this->button_login->Text = L"Login";
			this->button_login->UseVisualStyleBackColor = false;
			this->button_login->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_fechar
			// 
			this->btn_fechar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_fechar.BackgroundImage")));
			this->btn_fechar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_fechar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_fechar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btn_fechar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btn_fechar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_fechar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_fechar->Location = System::Drawing::Point(698, 1);
			this->btn_fechar->Name = L"btn_fechar";
			this->btn_fechar->Size = System::Drawing::Size(24, 24);
			this->btn_fechar->TabIndex = 6;
			this->btn_fechar->UseVisualStyleBackColor = true;
			this->btn_fechar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(724, 561);
			this->Controls->Add(this->btn_fechar);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_utilizador);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "datasource = localhost; password = root21; port = 3306; username = root; database = bd_cakemood";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM bd_cakemood.login where utilizador = '" + txt_utilizador->Text + "' and password = '" + txt_password->Text + "'";
		sqlRd = sqlCmd->ExecuteReader();

		int count = 0;
		while (sqlRd->Read()) {
			count++;
		}

		if (count == 1) {
			flag = 1;
			MessageBox::Show("Login Válido.");
			this->Hide();
			Cakemood::formulario abrirformulario;
			abrirformulario.ShowDialog();
			this->Show();
		}
		else {
			MessageBox::Show("Login inválido. Tente Novamente!");
		}

		sqlRd->Close();
		sqlConn->Close();
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
