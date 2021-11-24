#pragma once


namespace Cakemood {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	

	/// <summary>
	/// Summary for novoutilizador
	/// </summary>
	public ref class novoutilizador : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		//MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		//DataTable^ sqlDt = gcnew DataTable();
		//MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		//MySqlDataReader^ sqlRd;

	public:
		novoutilizador(void)
		{
			InitializeComponent();



			txt_novapass->PasswordChar = '*';
			txt_novapass2->PasswordChar = '*';

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~novoutilizador()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ txt_novoutilizador;
	private: System::Windows::Forms::TextBox^ txt_novapass;

	private: System::Windows::Forms::Button^ btn_adicionar;
	private: System::Windows::Forms::Button^ btn_fechar;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_novapass2;
	private: System::Windows::Forms::TextBox^ txt_testecod;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(novoutilizador::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_novoutilizador = (gcnew System::Windows::Forms::TextBox());
			this->txt_novapass = (gcnew System::Windows::Forms::TextBox());
			this->btn_adicionar = (gcnew System::Windows::Forms::Button());
			this->btn_fechar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_novapass2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_testecod = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label1->Location = System::Drawing::Point(136, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(437, 41);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Adicionar novo utilizador";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(117, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 28);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Novo utilizador:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(181, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 28);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Password:";
			// 
			// txt_novoutilizador
			// 
			this->txt_novoutilizador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_novoutilizador->Location = System::Drawing::Point(343, 187);
			this->txt_novoutilizador->Name = L"txt_novoutilizador";
			this->txt_novoutilizador->Size = System::Drawing::Size(248, 35);
			this->txt_novoutilizador->TabIndex = 19;
			// 
			// txt_novapass
			// 
			this->txt_novapass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_novapass->Location = System::Drawing::Point(343, 249);
			this->txt_novapass->Name = L"txt_novapass";
			this->txt_novapass->Size = System::Drawing::Size(248, 35);
			this->txt_novapass->TabIndex = 19;
			this->txt_novapass->TextChanged += gcnew System::EventHandler(this, &novoutilizador::txt_novapass_TextChanged);
			// 
			// btn_adicionar
			// 
			this->btn_adicionar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->btn_adicionar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_adicionar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->btn_adicionar->ForeColor = System::Drawing::Color::White;
			this->btn_adicionar->Location = System::Drawing::Point(278, 392);
			this->btn_adicionar->Name = L"btn_adicionar";
			this->btn_adicionar->Size = System::Drawing::Size(152, 44);
			this->btn_adicionar->TabIndex = 20;
			this->btn_adicionar->Text = L"Adicionar";
			this->btn_adicionar->UseVisualStyleBackColor = false;
			this->btn_adicionar->Click += gcnew System::EventHandler(this, &novoutilizador::btn_adicionar_Click);
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
			this->btn_fechar->Location = System::Drawing::Point(1, 1);
			this->btn_fechar->Name = L"btn_fechar";
			this->btn_fechar->Size = System::Drawing::Size(24, 24);
			this->btn_fechar->TabIndex = 21;
			this->btn_fechar->UseVisualStyleBackColor = true;
			this->btn_fechar->Click += gcnew System::EventHandler(this, &novoutilizador::btn_fechar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(100, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(209, 28);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Repita Password:";
			// 
			// txt_novapass2
			// 
			this->txt_novapass2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_novapass2->Location = System::Drawing::Point(343, 313);
			this->txt_novapass2->Name = L"txt_novapass2";
			this->txt_novapass2->Size = System::Drawing::Size(248, 35);
			this->txt_novapass2->TabIndex = 19;
			// 
			// txt_testecod
			// 
			this->txt_testecod->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_testecod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_testecod->ForeColor = System::Drawing::Color::White;
			this->txt_testecod->Location = System::Drawing::Point(597, 190);
			this->txt_testecod->Name = L"txt_testecod";
			this->txt_testecod->Size = System::Drawing::Size(19, 28);
			this->txt_testecod->TabIndex = 19;
			this->txt_testecod->Visible = false;
			// 
			// novoutilizador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(708, 522);
			this->Controls->Add(this->btn_fechar);
			this->Controls->Add(this->btn_adicionar);
			this->Controls->Add(this->txt_novapass2);
			this->Controls->Add(this->txt_novapass);
			this->Controls->Add(this->txt_testecod);
			this->Controls->Add(this->txt_novoutilizador);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"novoutilizador";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"novoutilizador";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_adicionar_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (this -> txt_novapass ->Text == this->txt_novapass2->Text)
		{
			sqlConn->ConnectionString = "datasource = localhost; password = root21; port = 3306; username = root; database = bd_cakemood";
			//sqlConn->Open();
			//sqlCmd->Connection = sqlConn;

			//sqlCmd->CommandText = "INSERT INTO `bd_cakemood`.`login` (`utilizador`, `password`) VALUES( '"+this->txt_novoutilizador->Text; "', '"+this->txt_novapass->Text; "');";
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `bd_cakemood`.`login` (`utilizador`, `password`) VALUES( '" + this->txt_novoutilizador->Text + "', '" + this->txt_novapass->Text +"') ;", sqlConn);
			MySqlDataReader^ myReader;

			try {
				sqlConn->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("Utilizador guardado");


				while (myReader->Read()) {

				}

			}
			catch (Exception^ ex) {
				MessageBox::Show("Erro ao guardar o novo utilizador");
			}

			myReader->Close();
			sqlConn->Close();
		}
		else {
			MessageBox::Show("Passwords não são iguais. Tente novamente.");
		}




		
	
	}
private: System::Void btn_fechar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void txt_novapass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
