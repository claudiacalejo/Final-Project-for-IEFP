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
	/// Summary for novaencomenda
	/// </summary>
	public ref class novaencomenda : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
	public:
		novaencomenda(void)
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
		~novaencomenda()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ txt_nomecliente;
	private: System::Windows::Forms::TextBox^ txt_email;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_fechar;

	private: System::Windows::Forms::TextBox^ txt_dataentrega;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_bolo;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_massabolo;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_merengue;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_recheiosuspiro;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_coberturarecheio;

	private: System::Windows::Forms::TextBox^ txt_extras;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txt_pavlova;


	private: System::Windows::Forms::TextBox^ txt_telefone;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txt_cheesecake;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txt_tamanho;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(novaencomenda::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_nomecliente = (gcnew System::Windows::Forms::TextBox());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_fechar = (gcnew System::Windows::Forms::Button());
			this->txt_dataentrega = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_bolo = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_massabolo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_merengue = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_recheiosuspiro = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_coberturarecheio = (gcnew System::Windows::Forms::TextBox());
			this->txt_extras = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txt_pavlova = (gcnew System::Windows::Forms::TextBox());
			this->txt_telefone = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txt_cheesecake = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_tamanho = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label1->Location = System::Drawing::Point(416, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 28);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Nova encomenda";
			this->label1->Click += gcnew System::EventHandler(this, &novaencomenda::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 19);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Nome:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 19);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Email:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(764, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 19);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Telefone:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(750, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 19);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Data entrega:";
			this->label6->Click += gcnew System::EventHandler(this, &novaencomenda::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(17, 198);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 19);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Bolo:";
			// 
			// txt_nomecliente
			// 
			this->txt_nomecliente->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nomecliente->Location = System::Drawing::Point(80, 54);
			this->txt_nomecliente->Name = L"txt_nomecliente";
			this->txt_nomecliente->Size = System::Drawing::Size(656, 27);
			this->txt_nomecliente->TabIndex = 0;
			// 
			// txt_email
			// 
			this->txt_email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_email->Location = System::Drawing::Point(80, 100);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(656, 27);
			this->txt_email->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(869, 447);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 47);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Inserir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &novaencomenda::button1_Click);
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
			this->btn_fechar->Location = System::Drawing::Point(1, 13);
			this->btn_fechar->Name = L"btn_fechar";
			this->btn_fechar->Size = System::Drawing::Size(24, 24);
			this->btn_fechar->TabIndex = 22;
			this->btn_fechar->UseVisualStyleBackColor = true;
			this->btn_fechar->Click += gcnew System::EventHandler(this, &novaencomenda::btn_fechar_Click);
			// 
			// txt_dataentrega
			// 
			this->txt_dataentrega->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dataentrega->Location = System::Drawing::Point(883, 97);
			this->txt_dataentrega->Name = L"txt_dataentrega";
			this->txt_dataentrega->Size = System::Drawing::Size(161, 27);
			this->txt_dataentrega->TabIndex = 3;
			this->txt_dataentrega->TextChanged += gcnew System::EventHandler(this, &novaencomenda::txt_dataentrega_TextChanged);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(-107, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(10, 24);
			this->button2->TabIndex = 22;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(751, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"(aaaa/mm/dd)";
			this->label5->Click += gcnew System::EventHandler(this, &novaencomenda::label6_Click);
			// 
			// txt_bolo
			// 
			this->txt_bolo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_bolo->ForeColor = System::Drawing::Color::Black;
			this->txt_bolo->Location = System::Drawing::Point(80, 195);
			this->txt_bolo->Name = L"txt_bolo";
			this->txt_bolo->Size = System::Drawing::Size(192, 27);
			this->txt_bolo->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(313, 198);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(123, 19);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Massa do Bolo:";
			this->label8->Click += gcnew System::EventHandler(this, &novaencomenda::label8_Click_1);
			// 
			// txt_massabolo
			// 
			this->txt_massabolo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_massabolo->ForeColor = System::Drawing::Color::Black;
			this->txt_massabolo->Location = System::Drawing::Point(442, 195);
			this->txt_massabolo->Name = L"txt_massabolo";
			this->txt_massabolo->Size = System::Drawing::Size(198, 27);
			this->txt_massabolo->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(13, 327);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 19);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Merengue:";
			// 
			// txt_merengue
			// 
			this->txt_merengue->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_merengue->ForeColor = System::Drawing::Color::Black;
			this->txt_merengue->Location = System::Drawing::Point(112, 324);
			this->txt_merengue->Name = L"txt_merengue";
			this->txt_merengue->Size = System::Drawing::Size(161, 27);
			this->txt_merengue->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(13, 370);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 19);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Recheio:";
			// 
			// txt_recheiosuspiro
			// 
			this->txt_recheiosuspiro->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_recheiosuspiro->ForeColor = System::Drawing::Color::Black;
			this->txt_recheiosuspiro->Location = System::Drawing::Point(112, 368);
			this->txt_recheiosuspiro->Name = L"txt_recheiosuspiro";
			this->txt_recheiosuspiro->Size = System::Drawing::Size(161, 27);
			this->txt_recheiosuspiro->TabIndex = 9;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label11->Location = System::Drawing::Point(210, 158);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(637, 23);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Bolo decorado | Naked Cake | Semi- Naked Cake | Number Cake";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(659, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(161, 19);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Cobertura/Recheio:";
			// 
			// txt_coberturarecheio
			// 
			this->txt_coberturarecheio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_coberturarecheio->ForeColor = System::Drawing::Color::Black;
			this->txt_coberturarecheio->Location = System::Drawing::Point(826, 195);
			this->txt_coberturarecheio->Name = L"txt_coberturarecheio";
			this->txt_coberturarecheio->Size = System::Drawing::Size(218, 27);
			this->txt_coberturarecheio->TabIndex = 6;
			this->txt_coberturarecheio->TextChanged += gcnew System::EventHandler(this, &novaencomenda::textBox1_TextChanged);
			// 
			// txt_extras
			// 
			this->txt_extras->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_extras->ForeColor = System::Drawing::Color::Black;
			this->txt_extras->Location = System::Drawing::Point(81, 235);
			this->txt_extras->Name = L"txt_extras";
			this->txt_extras->Size = System::Drawing::Size(193, 27);
			this->txt_extras->TabIndex = 7;
			this->txt_extras->TextChanged += gcnew System::EventHandler(this, &novaencomenda::textBox4_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(17, 238);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 19);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Extras:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label14->Location = System::Drawing::Point(89, 292);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(120, 23);
			this->label14->TabIndex = 18;
			this->label14->Text = L"Bolo Suspiro";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label15->Location = System::Drawing::Point(421, 292);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(260, 23);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Pavlova ou Bolo de Crepes";
			// 
			// txt_pavlova
			// 
			this->txt_pavlova->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pavlova->ForeColor = System::Drawing::Color::Black;
			this->txt_pavlova->Location = System::Drawing::Point(494, 329);
			this->txt_pavlova->Name = L"txt_pavlova";
			this->txt_pavlova->Size = System::Drawing::Size(161, 27);
			this->txt_pavlova->TabIndex = 10;
			// 
			// txt_telefone
			// 
			this->txt_telefone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_telefone->Location = System::Drawing::Point(883, 53);
			this->txt_telefone->Name = L"txt_telefone";
			this->txt_telefone->Size = System::Drawing::Size(161, 27);
			this->txt_telefone->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label17->Location = System::Drawing::Point(840, 292);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(128, 23);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Cheesecake";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(803, 331);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(58, 19);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Sabor:";
			// 
			// txt_cheesecake
			// 
			this->txt_cheesecake->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cheesecake->ForeColor = System::Drawing::Color::Black;
			this->txt_cheesecake->Location = System::Drawing::Point(883, 329);
			this->txt_cheesecake->Name = L"txt_cheesecake";
			this->txt_cheesecake->Size = System::Drawing::Size(161, 27);
			this->txt_cheesecake->TabIndex = 11;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(421, 331);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(58, 19);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Sabor:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label16->Location = System::Drawing::Point(480, 426);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 23);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Tamanho";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(338, 461);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(165, 19);
			this->label20->TabIndex = 19;
			this->label20->Text = L"Tamanho desejado:";
			// 
			// txt_tamanho
			// 
			this->txt_tamanho->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_tamanho->ForeColor = System::Drawing::Color::Black;
			this->txt_tamanho->Location = System::Drawing::Point(509, 458);
			this->txt_tamanho->Name = L"txt_tamanho";
			this->txt_tamanho->Size = System::Drawing::Size(161, 27);
			this->txt_tamanho->TabIndex = 12;
			// 
			// novaencomenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1056, 522);
			this->Controls->Add(this->txt_extras);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_fechar);
			this->Controls->Add(this->txt_dataentrega);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_recheiosuspiro);
			this->Controls->Add(this->txt_cheesecake);
			this->Controls->Add(this->txt_pavlova);
			this->Controls->Add(this->txt_tamanho);
			this->Controls->Add(this->txt_merengue);
			this->Controls->Add(this->txt_massabolo);
			this->Controls->Add(this->txt_coberturarecheio);
			this->Controls->Add(this->txt_bolo);
			this->Controls->Add(this->txt_telefone);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->txt_nomecliente);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"novaencomenda";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"novaencomenda";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	sqlConn->ConnectionString = "datasource = localhost; password = root21; port = 3306; username = root; database = bd_cakemood";

	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("INSERT INTO `bd_cakemood`.`encomenda` (`nome_cliente`, `email_cliente`, `telefone`,`data_entrega`,`bolo`,`massa_bolo`,`cobertura_recheio`,`extras`,`sabor_merengue`, `recheio_suspiro`,`pavlova_ou_crepes`,`cheesecake`,`tamanho` ) VALUES( '" + this->txt_nomecliente->Text + "', '" + this->txt_email->Text + "', '" + this->txt_telefone->Text + "', '" + this->txt_dataentrega->Text + "', '" + this->txt_bolo->Text + "', '" + this->txt_massabolo->Text + "', '" + this->txt_coberturarecheio->Text + "', '" + this->txt_extras->Text + "', '" + this->txt_merengue->Text + "', '" + this->txt_recheiosuspiro->Text + "', '" + this->txt_pavlova->Text + "', '" + this->txt_cheesecake->Text + "', '" + this->txt_tamanho->Text + "' ) ;", sqlConn);
	MySqlDataReader^ myReader;

	try {
		sqlConn->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Encomenda guardada");


		while (myReader->Read()) {

		}

	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao guardar a nova encomenda");
	}

	myReader->Close();
	sqlConn->Close();


}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_dataentrega_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_fechar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
