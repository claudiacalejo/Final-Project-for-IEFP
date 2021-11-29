#pragma once
#include "encomendas.h"
#include "novoutilizador.h"
#include "novaencomenda.h"


namespace Cakemood {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for formulario
	/// </summary>
	public ref class formulario : public System::Windows::Forms::Form
	{
	public:
		formulario(void)
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
		~formulario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button_encomendas;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_fechar;
	private: System::Windows::Forms::Button^ btn_novaencomenda;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(formulario::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_encomendas = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_fechar = (gcnew System::Windows::Forms::Button());
			this->btn_novaencomenda = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &formulario::pictureBox1_Click);
			// 
			// button_encomendas
			// 
			this->button_encomendas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->button_encomendas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_encomendas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_encomendas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_encomendas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_encomendas->ForeColor = System::Drawing::Color::White;
			this->button_encomendas->Location = System::Drawing::Point(268, 288);
			this->button_encomendas->Name = L"button_encomendas";
			this->button_encomendas->Size = System::Drawing::Size(188, 60);
			this->button_encomendas->TabIndex = 6;
			this->button_encomendas->Text = L"Ver Encomendas";
			this->button_encomendas->UseVisualStyleBackColor = false;
			this->button_encomendas->Click += gcnew System::EventHandler(this, &formulario::button_encomendas_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(268, 474);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 60);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Adicionar utilizador";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &formulario::button1_Click);
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
			this->btn_fechar->TabIndex = 8;
			this->btn_fechar->UseVisualStyleBackColor = true;
			this->btn_fechar->Click += gcnew System::EventHandler(this, &formulario::btn_fechar_Click);
			// 
			// btn_novaencomenda
			// 
			this->btn_novaencomenda->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->btn_novaencomenda->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_novaencomenda->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_novaencomenda->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_novaencomenda->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_novaencomenda->ForeColor = System::Drawing::Color::White;
			this->btn_novaencomenda->Location = System::Drawing::Point(268, 381);
			this->btn_novaencomenda->Name = L"btn_novaencomenda";
			this->btn_novaencomenda->Size = System::Drawing::Size(188, 60);
			this->btn_novaencomenda->TabIndex = 9;
			this->btn_novaencomenda->Text = L"Adicionar encomenda";
			this->btn_novaencomenda->UseVisualStyleBackColor = false;
			this->btn_novaencomenda->Click += gcnew System::EventHandler(this, &formulario::btn_novaencomenda_Click);
			// 
			// formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(724, 561);
			this->Controls->Add(this->btn_novaencomenda);
			this->Controls->Add(this->btn_fechar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_encomendas);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"formulario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formulario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_encomendas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Cakemood::encomendas abrirencomendas;
		abrirencomendas.ShowDialog();
		this->Show();
	}

private: System::Void btn_fechar_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Cakemood::novoutilizador adicionarutilizador;
	adicionarutilizador.ShowDialog();
	this->Show();
	

}
private: System::Void btn_novaencomenda_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Cakemood::novaencomenda adicionarencomenda;
	adicionarencomenda.ShowDialog();
	this -> Show();

}
};
}
