#pragma once
#include <iostream>
#include <thread>
namespace ArduinoCOMPortcommunicationexe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Threading;

	/// <summary>
	/// Summary for ArduinoCOM
	/// </summary>
	public ref class ArduinoCOM : public System::Windows::Forms::Form
	{
	public:
		ArduinoCOM(void)
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
		~ArduinoCOM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ serialPort1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbPorts;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbBaudRate;

	private: System::Windows::Forms::Button^ btnConnect;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ btnSend_int;
	private: System::Windows::Forms::TextBox^ tbSend_int;


	private: System::Windows::Forms::Button^ btnSend_string;
	private: System::Windows::Forms::TextBox^ tbSend_string;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbReceiveData;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Indicator;
	private: System::Windows::Forms::Label^ Indicator2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnScan;
	private: System::Windows::Forms::Label^ Info;
	private: System::Windows::Forms::Button^ btnR;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ lbDis;






	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ArduinoCOM::typeid));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbPorts = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbBaudRate = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->btnSend_int = (gcnew System::Windows::Forms::Button());
			this->tbSend_int = (gcnew System::Windows::Forms::TextBox());
			this->btnSend_string = (gcnew System::Windows::Forms::Button());
			this->tbSend_string = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbReceiveData = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Indicator = (gcnew System::Windows::Forms::Label());
			this->Indicator2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnScan = (gcnew System::Windows::Forms::Button());
			this->Info = (gcnew System::Windows::Forms::Label());
			this->btnR = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->lbDis = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &ArduinoCOM::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Silver;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"COM Ports";
			// 
			// cbPorts
			// 
			this->cbPorts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPorts->FormattingEnabled = true;
			this->cbPorts->Location = System::Drawing::Point(104, 12);
			this->cbPorts->Name = L"cbPorts";
			this->cbPorts->Size = System::Drawing::Size(121, 21);
			this->cbPorts->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"BaudRate";
			// 
			// cbBaudRate
			// 
			this->cbBaudRate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbBaudRate->FormattingEnabled = true;
			this->cbBaudRate->Location = System::Drawing::Point(104, 78);
			this->cbBaudRate->Name = L"cbBaudRate";
			this->cbBaudRate->Size = System::Drawing::Size(121, 21);
			this->cbBaudRate->TabIndex = 3;
			// 
			// btnConnect
			// 
			this->btnConnect->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnConnect->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnConnect->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConnect->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->btnConnect->Location = System::Drawing::Point(252, 13);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(96, 31);
			this->btnConnect->TabIndex = 4;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = false;
			this->btnConnect->Click += gcnew System::EventHandler(this, &ArduinoCOM::btnConnect_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(354, 12);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(252, 31);
			this->progressBar1->TabIndex = 5;
			// 
			// btnSend_int
			// 
			this->btnSend_int->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnSend_int->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSend_int->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSend_int->Location = System::Drawing::Point(16, 142);
			this->btnSend_int->Name = L"btnSend_int";
			this->btnSend_int->Size = System::Drawing::Size(79, 31);
			this->btnSend_int->TabIndex = 6;
			this->btnSend_int->Text = L"Send INT";
			this->btnSend_int->UseVisualStyleBackColor = false;
			this->btnSend_int->Click += gcnew System::EventHandler(this, &ArduinoCOM::btnSend_int_Click);
			// 
			// tbSend_int
			// 
			this->tbSend_int->Location = System::Drawing::Point(117, 142);
			this->tbSend_int->Multiline = true;
			this->tbSend_int->Name = L"tbSend_int";
			this->tbSend_int->Size = System::Drawing::Size(185, 31);
			this->tbSend_int->TabIndex = 7;
			// 
			// btnSend_string
			// 
			this->btnSend_string->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnSend_string->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSend_string->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSend_string->Location = System::Drawing::Point(16, 198);
			this->btnSend_string->Name = L"btnSend_string";
			this->btnSend_string->Size = System::Drawing::Size(79, 55);
			this->btnSend_string->TabIndex = 8;
			this->btnSend_string->Text = L"Send String";
			this->btnSend_string->UseVisualStyleBackColor = false;
			this->btnSend_string->Click += gcnew System::EventHandler(this, &ArduinoCOM::btnSend_string_Click);
			// 
			// tbSend_string
			// 
			this->tbSend_string->Location = System::Drawing::Point(117, 198);
			this->tbSend_string->Multiline = true;
			this->tbSend_string->Name = L"tbSend_string";
			this->tbSend_string->Size = System::Drawing::Size(185, 79);
			this->tbSend_string->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(415, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Recieved Data";
			// 
			// tbReceiveData
			// 
			this->tbReceiveData->Location = System::Drawing::Point(337, 142);
			this->tbReceiveData->MaximumSize = System::Drawing::Size(260, 135);
			this->tbReceiveData->MinimumSize = System::Drawing::Size(260, 135);
			this->tbReceiveData->Multiline = true;
			this->tbReceiveData->Name = L"tbReceiveData";
			this->tbReceiveData->ReadOnly = true;
			this->tbReceiveData->Size = System::Drawing::Size(260, 135);
			this->tbReceiveData->TabIndex = 11;
			this->tbReceiveData->TextChanged += gcnew System::EventHandler(this, &ArduinoCOM::tbReceiveData_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Silver;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(91, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Send Data";
			// 
			// Indicator
			// 
			this->Indicator->AutoSize = true;
			this->Indicator->BackColor = System::Drawing::Color::Black;
			this->Indicator->Font = (gcnew System::Drawing::Font(L"Dutch801 XBd BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Indicator->ForeColor = System::Drawing::Color::Green;
			this->Indicator->Location = System::Drawing::Point(248, 296);
			this->Indicator->Name = L"Indicator";
			this->Indicator->Size = System::Drawing::Size(114, 20);
			this->Indicator->TabIndex = 13;
			this->Indicator->Text = L"CONNECTED";
			this->Indicator->Visible = false;
			// 
			// Indicator2
			// 
			this->Indicator2->AutoSize = true;
			this->Indicator2->BackColor = System::Drawing::Color::Black;
			this->Indicator2->Font = (gcnew System::Drawing::Font(L"Dutch801 XBd BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Indicator2->ForeColor = System::Drawing::Color::Red;
			this->Indicator2->Location = System::Drawing::Point(232, 296);
			this->Indicator2->Name = L"Indicator2";
			this->Indicator2->Size = System::Drawing::Size(158, 20);
			this->Indicator2->TabIndex = 14;
			this->Indicator2->Text = L"DISCONNECTED !!";
			this->Indicator2->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Silver;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(101, 298);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 18);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Connection Status :";
			// 
			// btnScan
			// 
			this->btnScan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnScan->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnScan->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnScan->Location = System::Drawing::Point(104, 39);
			this->btnScan->Name = L"btnScan";
			this->btnScan->Size = System::Drawing::Size(121, 33);
			this->btnScan->TabIndex = 16;
			this->btnScan->Text = L"Scan Com";
			this->btnScan->UseVisualStyleBackColor = false;
			this->btnScan->Click += gcnew System::EventHandler(this, &ArduinoCOM::btnScan_Click);
			// 
			// Info
			// 
			this->Info->AutoSize = true;
			this->Info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Info->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Info->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Info->Location = System::Drawing::Point(397, 296);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(32, 17);
			this->Info->TabIndex = 17;
			this->Info->Text = L"Info";
			this->Info->Visible = false;
			// 
			// btnR
			// 
			this->btnR->Location = System::Drawing::Point(546, 65);
			this->btnR->Name = L"btnR";
			this->btnR->Size = System::Drawing::Size(75, 23);
			this->btnR->TabIndex = 18;
			this->btnR->Text = L"rec";
			this->btnR->UseVisualStyleBackColor = true;
			this->btnR->Click += gcnew System::EventHandler(this, &ArduinoCOM::btnR_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(374, 55);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(38, 17);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"cn";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ArduinoCOM::checkBox1_CheckedChanged);
			// 
			// lbDis
			// 
			this->lbDis->AutoSize = true;
			this->lbDis->BackColor = System::Drawing::Color::Transparent;
			this->lbDis->Location = System::Drawing::Point(533, 114);
			this->lbDis->Name = L"lbDis";
			this->lbDis->Size = System::Drawing::Size(37, 13);
			this->lbDis->TabIndex = 20;
			this->lbDis->Text = L"check";
			// 
			// ArduinoCOM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(629, 326);
			this->Controls->Add(this->lbDis);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->btnR);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->btnScan);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Indicator2);
			this->Controls->Add(this->Indicator);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbReceiveData);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbSend_string);
			this->Controls->Add(this->btnSend_string);
			this->Controls->Add(this->tbSend_int);
			this->Controls->Add(this->btnSend_int);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->cbBaudRate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbPorts);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(645, 365);
			this->MinimumSize = System::Drawing::Size(645, 365);
			this->Name = L"ArduinoCOM";
			this->Text = L"ArduinoCOM";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void ArduinoCOM_Load(System::Object^ sender, System::EventArgs^ e) {
		array<Object^>^ comports = SerialPort::GetPortNames();
		cbPorts->Items->AddRange(comports);
		cbPorts->SelectedIndex = 0;
		array<Object^>^ Baud_rate = { 9600, 192000, 57600, 115200 };
		cbBaudRate->Items->AddRange(Baud_rate);
		cbBaudRate->SelectedIndex = 0;
		
	}

	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btnConnect->Text == "Connect") {
			if (cbPorts->Text != "COM3") {
				try {
					if (serialPort1->IsOpen) {
						serialPort1->Close();
					}
					this->Indicator2->Visible = false;
					serialPort1->PortName = cbPorts->Text;
					serialPort1->BaudRate = Int32::Parse(cbBaudRate->Text);
					serialPort1->Open();
					checkBox1->Checked = true;
					this->timer1->Start();
					
				}
				catch (...) {
					MessageBox::Show("Check your Port connection", "Warning");

				}
			}
			else {
				MessageBox::Show("Select an external connected Port" + "\n" + "Try scanning and connect to an external port", "Warning");
			}

		}
		else if (btnConnect->Text == "Disconnect") {
			this->Indicator->Visible = false;
			this->Info->Visible = false;
			this->timer1->Stop();
			checkBox1->Checked = false;
			int decrement = 10;
			while (progressBar1->Value > progressBar1->Minimum)
			{
				progressBar1->Value -= decrement;
				Thread::Sleep(100);
			}
			serialPort1->Close();
			this->Indicator2->Visible = true;
			this->btnConnect->Text = "Connect";

		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar1->Increment(8);
		int maxValue = progressBar1->Maximum;
		int currentValue = progressBar1->Value;

		if (currentValue == maxValue) {
			this->Info->Text = "Port:" + " " + cbPorts->Text + ", " + "Baudrate:" + " " + cbBaudRate->Text;
			this->Indicator->Visible = true;
			this->Info->Visible = true;
			this->btnConnect->Text = "Disconnect";
		}
	}

	private: System::Void btnSend_int_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btnConnect->Text == "Disconnect") {//means com is connected
			try {
				int SendIntData = Convert::ToInt32(tbSend_int->Text);
				array<Byte>^ int_byte = BitConverter::GetBytes(SendIntData);
				serialPort1->Write(int_byte, 0, int_byte->Length);
			}
			catch (...) {
				MessageBox::Show("Enter a Valid integer", "Warning");
			}
		}
		else {
			MessageBox::Show("Connect to a com port", "Warning");
		}
	}
	private: System::Void btnSend_string_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (btnConnect->Text == "Disconnect") {
			serialPort1->WriteLine(tbSend_string->Text);
			background(0);
			this->tbSend_string->Clear();
		}
		else if (tbSend_string->Text->Length == 0) {
			MessageBox::Show("No data available to send" + "\n" + "Please enter a string", "Warning!");
		}
		else if (btnConnect->Text == "Connect") {
			MessageBox::Show("Connect to a com port", "Warning");
		}
	}
	private: System::Void tbReceiveData_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//tbReceiveData->AppendText(serialPort1->ReadExisting() + "\n");
	}
	private: System::Void btnScan_Click(System::Object^ sender, System::EventArgs^ e) {
		this->cbPorts->Items->Clear();
		this->cbBaudRate->Items->Clear();
		array<Object^>^ comports = SerialPort::GetPortNames();
		cbPorts->Items->AddRange(comports);
		cbPorts->SelectedIndex = 0;
		array<Object^>^ Baud_rate = { 9600, 192000, 57600, 115200 };
		cbBaudRate->Items->AddRange(Baud_rate);
		cbBaudRate->SelectedIndex = 0;
	}
	private: System::Void btnR_Click(System::Object^ sender, System::EventArgs^ e) {
		//tbReceiveData->AppendText(serialPort1->ReadLine() + "\n");
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	Void background(int i) {
		for (i = 0; i <= 2; i++) {
			try {
				// Read and append data from the serial port
				String^ receivedData = serialPort1->ReadLine();
				tbReceiveData->AppendText(receivedData + "\n");
			}
			catch (...) {
				this->lbDis->Text = "No data";
			}
		}
	}
};
}
