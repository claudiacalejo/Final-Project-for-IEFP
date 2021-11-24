#pragma once
#include "stdlib.h"

namespace Cakemood {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for encomendas
	/// </summary>
	public ref class encomendas : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;
		


	private: System::Windows::Forms::Button^ btn_procura;
	private: System::Windows::Forms::TextBox^ txt_procura;


	private: System::Windows::Forms::Label^ lbl_data;
	private: System::Windows::Forms::Button^ btn_sair;
	private: System::Windows::Forms::Button^ btm_mostrar;
	private: System::Windows::Forms::Label^ lbl_time;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_imprimir;
	private: System::Windows::Forms::Timer^ timer1;
		   

	public:
		encomendas(void)
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
		~encomendas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_fechar;
	protected:

	protected:













	private: System::Windows::Forms::DataGridView^ dataGrid1;






	private: System::ComponentModel::IContainer^ components;
















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(encomendas::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btn_fechar = (gcnew System::Windows::Forms::Button());
			this->dataGrid1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_procura = (gcnew System::Windows::Forms::Button());
			this->txt_procura = (gcnew System::Windows::Forms::TextBox());
			this->lbl_data = (gcnew System::Windows::Forms::Label());
			this->btn_sair = (gcnew System::Windows::Forms::Button());
			this->btm_mostrar = (gcnew System::Windows::Forms::Button());
			this->lbl_time = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_imprimir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid1))->BeginInit();
			this->SuspendLayout();
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
			this->btn_fechar->Location = System::Drawing::Point(-1, 0);
			this->btn_fechar->Name = L"btn_fechar";
			this->btn_fechar->Size = System::Drawing::Size(24, 24);
			this->btn_fechar->TabIndex = 9;
			this->btn_fechar->UseVisualStyleBackColor = true;
			this->btn_fechar->Click += gcnew System::EventHandler(this, &encomendas::btn_fechar_Click);
			// 
			// dataGrid1
			// 
			this->dataGrid1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGrid1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGrid1->Location = System::Drawing::Point(12, 75);
			this->dataGrid1->Name = L"dataGrid1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGrid1->Size = System::Drawing::Size(1032, 386);
			this->dataGrid1->TabIndex = 11;
			// 
			// btn_procura
			// 
			this->btn_procura->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->btn_procura->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_procura->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_procura->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btn_procura->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_procura->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_procura->ForeColor = System::Drawing::Color::White;
			this->btn_procura->Location = System::Drawing::Point(938, 16);
			this->btn_procura->Name = L"btn_procura";
			this->btn_procura->Size = System::Drawing::Size(106, 40);
			this->btn_procura->TabIndex = 12;
			this->btn_procura->Text = L"Procurar";
			this->btn_procura->UseVisualStyleBackColor = false;
			this->btn_procura->Click += gcnew System::EventHandler(this, &encomendas::btn_procura_Click);
			this->btn_procura->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &encomendas::btn_procura_KeyPress);
			// 
			// txt_procura
			// 
			this->txt_procura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_procura->Location = System::Drawing::Point(716, 23);
			this->txt_procura->Multiline = true;
			this->txt_procura->Name = L"txt_procura";
			this->txt_procura->Size = System::Drawing::Size(216, 29);
			this->txt_procura->TabIndex = 13;
			this->txt_procura->TextChanged += gcnew System::EventHandler(this, &encomendas::txt_procura_TextChanged);
			this->txt_procura->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &encomendas::txt_procura_KeyPress);
			// 
			// lbl_data
			// 
			this->lbl_data->AutoSize = true;
			this->lbl_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_data->Location = System::Drawing::Point(33, 25);
			this->lbl_data->Name = L"lbl_data";
			this->lbl_data->Size = System::Drawing::Size(44, 20);
			this->lbl_data->TabIndex = 15;
			this->lbl_data->Text = L"Data";
			// 
			// btn_sair
			// 
			this->btn_sair->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->btn_sair->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_sair->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_sair->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btn_sair->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sair->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sair->ForeColor = System::Drawing::Color::Transparent;
			this->btn_sair->Location = System::Drawing::Point(557, 470);
			this->btn_sair->Name = L"btn_sair";
			this->btn_sair->Size = System::Drawing::Size(111, 40);
			this->btn_sair->TabIndex = 12;
			this->btn_sair->Text = L"Sair";
			this->btn_sair->UseVisualStyleBackColor = false;
			this->btn_sair->Click += gcnew System::EventHandler(this, &encomendas::btn_sair_Click);
			// 
			// btm_mostrar
			// 
			this->btm_mostrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->btm_mostrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btm_mostrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btm_mostrar->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btm_mostrar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btm_mostrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btm_mostrar->ForeColor = System::Drawing::Color::White;
			this->btm_mostrar->Location = System::Drawing::Point(388, 470);
			this->btm_mostrar->Name = L"btm_mostrar";
			this->btm_mostrar->Size = System::Drawing::Size(111, 40);
			this->btm_mostrar->TabIndex = 12;
			this->btm_mostrar->Text = L"Limpar";
			this->btm_mostrar->UseVisualStyleBackColor = false;
			this->btm_mostrar->Click += gcnew System::EventHandler(this, &encomendas::btm_mostrar_Click);
			// 
			// lbl_time
			// 
			this->lbl_time->AutoSize = true;
			this->lbl_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_time->Location = System::Drawing::Point(33, 5);
			this->lbl_time->Name = L"lbl_time";
			this->lbl_time->Size = System::Drawing::Size(52, 20);
			this->lbl_time->TabIndex = 15;
			this->lbl_time->Text = L"Horas";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &encomendas::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label1->Location = System::Drawing::Point(363, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 56);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Encomendas";
			this->label1->Click += gcnew System::EventHandler(this, &encomendas::label1_Click);
			// 
			// btn_imprimir
			// 
			this->btn_imprimir->Location = System::Drawing::Point(221, 480);
			this->btn_imprimir->Name = L"btn_imprimir";
			this->btn_imprimir->Size = System::Drawing::Size(75, 23);
			this->btn_imprimir->TabIndex = 17;
			this->btn_imprimir->Text = L"button1";
			this->btn_imprimir->UseVisualStyleBackColor = true;
			this->btn_imprimir->Click += gcnew System::EventHandler(this, &encomendas::btn_imprimir_Click);
			// 
			// encomendas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1056, 522);
			this->Controls->Add(this->btn_imprimir);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_time);
			this->Controls->Add(this->lbl_data);
			this->Controls->Add(this->txt_procura);
			this->Controls->Add(this->btm_mostrar);
			this->Controls->Add(this->btn_sair);
			this->Controls->Add(this->btn_procura);
			this->Controls->Add(this->dataGrid1);
			this->Controls->Add(this->btn_fechar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(1, 1);
			this->Name = L"encomendas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"encomendas";
			this->Load += gcnew System::EventHandler(this, &encomendas::encomendas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_fechar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime dt = DateTime::Now;
		lbl_time->Text = dt.Now.ToLongTimeString();

	}
private: System::Void encomendas_Load(System::Object^ sender, System::EventArgs^ e) {
	DateTime dt = DateTime::Now;
	lbl_data->Text = dt.Now.ToLongDateString();

	timer1->Start();

	sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = root21; database = bd_cakemood";
	sqlConn->Open();
	sqlCmd->Connection = sqlConn;
	sqlCmd->CommandText = "SELECT * FROM bd_cakemood.encomenda";
	sqlRd = sqlCmd->ExecuteReader();
	sqlDt->Load(sqlRd);
	sqlRd->Close();
	sqlConn->Close();
	dataGrid1->DataSource = sqlDt;
}
private: System::Void btn_sair_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	iExit = MessageBox::Show("Pretende sair?", "Cake Mood", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	if (iExit == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
private: System::Void txt_procura_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	try 
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("nome_cliente like '%{0}%'", txt_procura->Text);
			dataGrid1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void btn_procura_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("nome_cliente like '%{0}%'", txt_procura->Text);
			dataGrid1->DataSource = dv->ToTable();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btn_procura_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	try
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("nome_cliente like '%{0}%'", txt_procura->Text);
			dataGrid1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btm_mostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	encomendas^ novapesquisa = gcnew encomendas();
	novapesquisa -> Show();


}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_procura_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_imprimir_Click(System::Object^ sender, System::EventArgs^ e) {
	system("start http://localhost/final/index.html ");
}
};
}
