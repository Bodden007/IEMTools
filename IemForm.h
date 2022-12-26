#pragma once

namespace IEMTools {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для IemForm
	/// </summary>
	public ref class IemForm : public System::Windows::Forms::Form
	{
	public:
		IemForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~IemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ serialPort;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ connectionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ portToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openPortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closePortToolStripMenuItem;




	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBoxPortSelection;

	private: System::Windows::Forms::Label^ labelComPortConnection;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ labelDataTime;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::Label^ chart1label1;
	private: System::Windows::Forms::Label^ chart1label1Data1;

	private: System::Windows::Forms::Label^ chart1label1Name1;



	private: System::Windows::Forms::Label^ chart1label2;
	private: System::Windows::Forms::Label^ chart1label2Name2;
	private: System::Windows::Forms::Label^ chart1label2Data2;



	private: System::Windows::Forms::Label^ chart1label3Name3;
	private: System::Windows::Forms::Label^ chart1label3Data3;





	private: System::Windows::Forms::Label^ chart1label3;
	private: System::Windows::Forms::Label^ chart2label2Name2;
	private: System::Windows::Forms::Label^ chart2label2Data2;




	private: System::Windows::Forms::Label^ chartlabel2;

	private: System::Windows::Forms::Label^ chart2label1Name1;
	private: System::Windows::Forms::Label^ chart2label1Data1;




	private: System::Windows::Forms::Label^ chart2label1;
	private: System::Windows::Forms::Label^ chart3label2Name2;
	private: System::Windows::Forms::Label^ chart3label2Data2;
	private: System::Windows::Forms::Label^ chart3label2;
	private: System::Windows::Forms::Label^ chart3label1Name1;
	private: System::Windows::Forms::Label^ chart3label1Data1;
	private: System::Windows::Forms::Label^ chart3label1;
	private: System::Windows::Forms::Label^ chart4label2Name2;
	private: System::Windows::Forms::Label^ chart4label2Data2;
	private: System::Windows::Forms::Label^ chart4label2;
	private: System::Windows::Forms::Label^ chart4label1Name1;
	private: System::Windows::Forms::Label^ chart4label1Data1;
	private: System::Windows::Forms::Label^ chart4label1;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IemForm::typeid));
			this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->connectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->portToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripComboBoxPortSelection = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->openPortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closePortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->labelComPortConnection = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelDataTime = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1label1 = (gcnew System::Windows::Forms::Label());
			this->chart1label1Data1 = (gcnew System::Windows::Forms::Label());
			this->chart1label1Name1 = (gcnew System::Windows::Forms::Label());
			this->chart1label2 = (gcnew System::Windows::Forms::Label());
			this->chart1label2Name2 = (gcnew System::Windows::Forms::Label());
			this->chart1label2Data2 = (gcnew System::Windows::Forms::Label());
			this->chart1label3Name3 = (gcnew System::Windows::Forms::Label());
			this->chart1label3Data3 = (gcnew System::Windows::Forms::Label());
			this->chart1label3 = (gcnew System::Windows::Forms::Label());
			this->chart2label2Name2 = (gcnew System::Windows::Forms::Label());
			this->chart2label2Data2 = (gcnew System::Windows::Forms::Label());
			this->chartlabel2 = (gcnew System::Windows::Forms::Label());
			this->chart2label1Name1 = (gcnew System::Windows::Forms::Label());
			this->chart2label1Data1 = (gcnew System::Windows::Forms::Label());
			this->chart2label1 = (gcnew System::Windows::Forms::Label());
			this->chart3label2Name2 = (gcnew System::Windows::Forms::Label());
			this->chart3label2Data2 = (gcnew System::Windows::Forms::Label());
			this->chart3label2 = (gcnew System::Windows::Forms::Label());
			this->chart3label1Name1 = (gcnew System::Windows::Forms::Label());
			this->chart3label1Data1 = (gcnew System::Windows::Forms::Label());
			this->chart3label1 = (gcnew System::Windows::Forms::Label());
			this->chart4label2Name2 = (gcnew System::Windows::Forms::Label());
			this->chart4label2Data2 = (gcnew System::Windows::Forms::Label());
			this->chart4label2 = (gcnew System::Windows::Forms::Label());
			this->chart4label1Name1 = (gcnew System::Windows::Forms::Label());
			this->chart4label1Data1 = (gcnew System::Windows::Forms::Label());
			this->chart4label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->SuspendLayout();
			// 
			// serialPort
			// 
			this->serialPort->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &IemForm::serialPort_DataReceived);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->менюToolStripMenuItem,
					this->connectionToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(78, 29);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// connectionToolStripMenuItem
			// 
			this->connectionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->portToolStripMenuItem,
					this->openPortToolStripMenuItem, this->closePortToolStripMenuItem
			});
			this->connectionToolStripMenuItem->Name = L"connectionToolStripMenuItem";
			this->connectionToolStripMenuItem->Size = System::Drawing::Size(143, 29);
			this->connectionToolStripMenuItem->Text = L"Подключение";
			this->connectionToolStripMenuItem->Click += gcnew System::EventHandler(this, &IemForm::connectionToolStripMenuItem_Click);
			// 
			// portToolStripMenuItem
			// 
			this->portToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripComboBoxPortSelection });
			this->portToolStripMenuItem->Name = L"portToolStripMenuItem";
			this->portToolStripMenuItem->Size = System::Drawing::Size(217, 34);
			this->portToolStripMenuItem->Text = L"Порт";
			this->portToolStripMenuItem->Click += gcnew System::EventHandler(this, &IemForm::portToolStripMenuItem_Click);
			// 
			// toolStripComboBoxPortSelection
			// 
			this->toolStripComboBoxPortSelection->Name = L"toolStripComboBoxPortSelection";
			this->toolStripComboBoxPortSelection->Size = System::Drawing::Size(121, 33);
			this->toolStripComboBoxPortSelection->Click += gcnew System::EventHandler(this, &IemForm::toolStripComboBoxPortSelection_Click);
			// 
			// openPortToolStripMenuItem
			// 
			this->openPortToolStripMenuItem->Name = L"openPortToolStripMenuItem";
			this->openPortToolStripMenuItem->Size = System::Drawing::Size(217, 34);
			this->openPortToolStripMenuItem->Text = L"Подключить";
			this->openPortToolStripMenuItem->Click += gcnew System::EventHandler(this, &IemForm::openPortToolStripMenuItem_Click);
			// 
			// closePortToolStripMenuItem
			// 
			this->closePortToolStripMenuItem->Name = L"closePortToolStripMenuItem";
			this->closePortToolStripMenuItem->Size = System::Drawing::Size(217, 34);
			this->closePortToolStripMenuItem->Text = L"Отключить";
			this->closePortToolStripMenuItem->Click += gcnew System::EventHandler(this, &IemForm::closePortToolStripMenuItem_Click);
			// 
			// labelComPortConnection
			// 
			this->labelComPortConnection->AutoSize = true;
			this->labelComPortConnection->Location = System::Drawing::Point(457, 9);
			this->labelComPortConnection->Name = L"labelComPortConnection";
			this->labelComPortConnection->Size = System::Drawing::Size(50, 20);
			this->labelComPortConnection->TabIndex = 2;
			this->labelComPortConnection->Text = L"NULL";
			this->labelComPortConnection->Click += gcnew System::EventHandler(this, &IemForm::labelComPortConnection_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &IemForm::timer1_Tick);
			// 
			// labelDataTime
			// 
			this->labelDataTime->AutoSize = true;
			this->labelDataTime->Location = System::Drawing::Point(576, 10);
			this->labelDataTime->Name = L"labelDataTime";
			this->labelDataTime->Size = System::Drawing::Size(82, 20);
			this->labelDataTime->TabIndex = 3;
			this->labelDataTime->Text = L"Data Time";
			this->labelDataTime->Click += gcnew System::EventHandler(this, &IemForm::labelDataTime_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::MistyRose;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(31, 57);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"RateDS";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Blue;
			series2->Name = L"RatePS";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Green;
			series3->Name = L"FlowMeter";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(720, 424);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &IemForm::chart1_Click);
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::MistyRose;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			this->chart2->Location = System::Drawing::Point(31, 552);
			this->chart2->Name = L"chart2";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Red;
			series4->Name = L"Series1";
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Blue;
			series5->Name = L"Series2";
			this->chart2->Series->Add(series4);
			this->chart2->Series->Add(series5);
			this->chart2->Size = System::Drawing::Size(720, 424);
			this->chart2->TabIndex = 5;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &IemForm::chart2_Click);
			// 
			// chart3
			// 
			this->chart3->BackColor = System::Drawing::Color::MistyRose;
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			this->chart3->Location = System::Drawing::Point(979, 57);
			this->chart3->Name = L"chart3";
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::Red;
			series6->Name = L"HPVT";
			series7->BorderWidth = 3;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series7->Name = L"F300";
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Size = System::Drawing::Size(720, 424);
			this->chart3->TabIndex = 6;
			this->chart3->Text = L"chart3";
			this->chart3->Click += gcnew System::EventHandler(this, &IemForm::chart3_Click);
			// 
			// chart4
			// 
			this->chart4->BackColor = System::Drawing::Color::MistyRose;
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			this->chart4->Location = System::Drawing::Point(979, 552);
			this->chart4->Name = L"chart4";
			series8->BorderWidth = 3;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Color = System::Drawing::Color::Red;
			series8->Name = L"Series1";
			series9->BorderWidth = 3;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Color = System::Drawing::Color::Blue;
			series9->Name = L"Series2";
			this->chart4->Series->Add(series8);
			this->chart4->Series->Add(series9);
			this->chart4->Size = System::Drawing::Size(720, 424);
			this->chart4->TabIndex = 7;
			this->chart4->Text = L"chart4";
			this->chart4->Click += gcnew System::EventHandler(this, &IemForm::chart4_Click);
			// 
			// chart1label1
			// 
			this->chart1label1->AutoSize = true;
			this->chart1label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chart1label1->ForeColor = System::Drawing::Color::Red;
			this->chart1label1->Location = System::Drawing::Point(780, 122);
			this->chart1label1->Name = L"chart1label1";
			this->chart1label1->Size = System::Drawing::Size(109, 29);
			this->chart1label1->TabIndex = 8;
			this->chart1label1->Text = L"Rate DS\r\n";
			// 
			// chart1label1Data1
			// 
			this->chart1label1Data1->AutoSize = true;
			this->chart1label1Data1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart1label1Data1->Location = System::Drawing::Point(780, 170);
			this->chart1label1Data1->Name = L"chart1label1Data1";
			this->chart1label1Data1->Size = System::Drawing::Size(65, 29);
			this->chart1label1Data1->TabIndex = 9;
			this->chart1label1Data1->Text = L"0000";
			this->chart1label1Data1->Click += gcnew System::EventHandler(this, &IemForm::Chart1label1Data_Click);
			// 
			// chart1label1Name1
			// 
			this->chart1label1Name1->AutoSize = true;
			this->chart1label1Name1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart1label1Name1->Location = System::Drawing::Point(877, 170);
			this->chart1label1Name1->Name = L"chart1label1Name1";
			this->chart1label1Name1->Size = System::Drawing::Size(50, 29);
			this->chart1label1Name1->TabIndex = 10;
			this->chart1label1Name1->Text = L"bbl";
			// 
			// chart1label2
			// 
			this->chart1label2->AutoSize = true;
			this->chart1label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chart1label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->chart1label2->Location = System::Drawing::Point(780, 218);
			this->chart1label2->Name = L"chart1label2";
			this->chart1label2->Size = System::Drawing::Size(108, 29);
			this->chart1label2->TabIndex = 11;
			this->chart1label2->Text = L"Rate PS";
			// 
			// chart1label2Name2
			// 
			this->chart1label2Name2->AutoSize = true;
			this->chart1label2Name2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart1label2Name2->Location = System::Drawing::Point(877, 266);
			this->chart1label2Name2->Name = L"chart1label2Name2";
			this->chart1label2Name2->Size = System::Drawing::Size(50, 29);
			this->chart1label2Name2->TabIndex = 13;
			this->chart1label2Name2->Text = L"bbl";
			// 
			// chart1label2Data2
			// 
			this->chart1label2Data2->AutoSize = true;
			this->chart1label2Data2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart1label2Data2->Location = System::Drawing::Point(780, 266);
			this->chart1label2Data2->Name = L"chart1label2Data2";
			this->chart1label2Data2->Size = System::Drawing::Size(65, 29);
			this->chart1label2Data2->TabIndex = 12;
			this->chart1label2Data2->Text = L"0000";
			// 
			// chart1label3Name3
			// 
			this->chart1label3Name3->AutoSize = true;
			this->chart1label3Name3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart1label3Name3->Location = System::Drawing::Point(877, 369);
			this->chart1label3Name3->Name = L"chart1label3Name3";
			this->chart1label3Name3->Size = System::Drawing::Size(49, 29);
			this->chart1label3Name3->TabIndex = 16;
			this->chart1label3Name3->Text = L"gal";
			// 
			// chart1label3Data3
			// 
			this->chart1label3Data3->AutoSize = true;
			this->chart1label3Data3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart1label3Data3->Location = System::Drawing::Point(780, 369);
			this->chart1label3Data3->Name = L"chart1label3Data3";
			this->chart1label3Data3->Size = System::Drawing::Size(65, 29);
			this->chart1label3Data3->TabIndex = 15;
			this->chart1label3Data3->Text = L"0000";
			// 
			// chart1label3
			// 
			this->chart1label3->AutoSize = true;
			this->chart1label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chart1label3->ForeColor = System::Drawing::Color::Green;
			this->chart1label3->Location = System::Drawing::Point(780, 321);
			this->chart1label3->Name = L"chart1label3";
			this->chart1label3->Size = System::Drawing::Size(144, 29);
			this->chart1label3->TabIndex = 14;
			this->chart1label3->Text = L"Flow Meter";
			this->chart1label3->UseMnemonic = false;
			// 
			// chart2label2Name2
			// 
			this->chart2label2Name2->AutoSize = true;
			this->chart2label2Name2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart2label2Name2->Location = System::Drawing::Point(877, 818);
			this->chart2label2Name2->Name = L"chart2label2Name2";
			this->chart2label2Name2->Size = System::Drawing::Size(48, 29);
			this->chart2label2Name2->TabIndex = 22;
			this->chart2label2Name2->Text = L"psi";
			// 
			// chart2label2Data2
			// 
			this->chart2label2Data2->AutoSize = true;
			this->chart2label2Data2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart2label2Data2->Location = System::Drawing::Point(780, 818);
			this->chart2label2Data2->Name = L"chart2label2Data2";
			this->chart2label2Data2->Size = System::Drawing::Size(65, 29);
			this->chart2label2Data2->TabIndex = 21;
			this->chart2label2Data2->Text = L"0000";
			this->chart2label2Data2->Click += gcnew System::EventHandler(this, &IemForm::chart2label2Data2_Click);
			// 
			// chartlabel2
			// 
			this->chartlabel2->AutoSize = true;
			this->chartlabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chartlabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->chartlabel2->Location = System::Drawing::Point(780, 770);
			this->chartlabel2->Name = L"chartlabel2";
			this->chartlabel2->Size = System::Drawing::Size(121, 29);
			this->chartlabel2->TabIndex = 20;
			this->chartlabel2->Text = L"Press PS";
			// 
			// chart2label1Name1
			// 
			this->chart2label1Name1->AutoSize = true;
			this->chart2label1Name1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart2label1Name1->Location = System::Drawing::Point(877, 722);
			this->chart2label1Name1->Name = L"chart2label1Name1";
			this->chart2label1Name1->Size = System::Drawing::Size(48, 29);
			this->chart2label1Name1->TabIndex = 19;
			this->chart2label1Name1->Text = L"psi";
			// 
			// chart2label1Data1
			// 
			this->chart2label1Data1->AutoSize = true;
			this->chart2label1Data1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart2label1Data1->Location = System::Drawing::Point(780, 722);
			this->chart2label1Data1->Name = L"chart2label1Data1";
			this->chart2label1Data1->Size = System::Drawing::Size(65, 29);
			this->chart2label1Data1->TabIndex = 18;
			this->chart2label1Data1->Text = L"0000";
			this->chart2label1Data1->Click += gcnew System::EventHandler(this, &IemForm::chart2label1Data1_Click);
			// 
			// chart2label1
			// 
			this->chart2label1->AutoSize = true;
			this->chart2label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chart2label1->ForeColor = System::Drawing::Color::Red;
			this->chart2label1->Location = System::Drawing::Point(780, 674);
			this->chart2label1->Name = L"chart2label1";
			this->chart2label1->Size = System::Drawing::Size(122, 29);
			this->chart2label1->TabIndex = 17;
			this->chart2label1->Text = L"Press DS\r\n";
			// 
			// chart3label2Name2
			// 
			this->chart3label2Name2->AutoSize = true;
			this->chart3label2Name2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart3label2Name2->Location = System::Drawing::Point(1831, 314);
			this->chart3label2Name2->Name = L"chart3label2Name2";
			this->chart3label2Name2->Size = System::Drawing::Size(58, 29);
			this->chart3label2Name2->TabIndex = 28;
			this->chart3label2Name2->Text = L"ppg";
			// 
			// chart3label2Data2
			// 
			this->chart3label2Data2->AutoSize = true;
			this->chart3label2Data2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart3label2Data2->Location = System::Drawing::Point(1734, 314);
			this->chart3label2Data2->Name = L"chart3label2Data2";
			this->chart3label2Data2->Size = System::Drawing::Size(65, 29);
			this->chart3label2Data2->TabIndex = 27;
			this->chart3label2Data2->Text = L"0000";
			// 
			// chart3label2
			// 
			this->chart3label2->AutoSize = true;
			this->chart3label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chart3label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->chart3label2->Location = System::Drawing::Point(1734, 266);
			this->chart3label2->Name = L"chart3label2";
			this->chart3label2->Size = System::Drawing::Size(78, 29);
			this->chart3label2->TabIndex = 26;
			this->chart3label2->Text = L"F 300";
			// 
			// chart3label1Name1
			// 
			this->chart3label1Name1->AutoSize = true;
			this->chart3label1Name1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart3label1Name1->Location = System::Drawing::Point(1831, 218);
			this->chart3label1Name1->Name = L"chart3label1Name1";
			this->chart3label1Name1->Size = System::Drawing::Size(58, 29);
			this->chart3label1Name1->TabIndex = 25;
			this->chart3label1Name1->Text = L"ppg";
			// 
			// chart3label1Data1
			// 
			this->chart3label1Data1->AutoSize = true;
			this->chart3label1Data1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart3label1Data1->Location = System::Drawing::Point(1734, 218);
			this->chart3label1Data1->Name = L"chart3label1Data1";
			this->chart3label1Data1->Size = System::Drawing::Size(65, 29);
			this->chart3label1Data1->TabIndex = 24;
			this->chart3label1Data1->Text = L"0000";
			// 
			// chart3label1
			// 
			this->chart3label1->AutoSize = true;
			this->chart3label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chart3label1->ForeColor = System::Drawing::Color::Red;
			this->chart3label1->Location = System::Drawing::Point(1734, 170);
			this->chart3label1->Name = L"chart3label1";
			this->chart3label1->Size = System::Drawing::Size(81, 29);
			this->chart3label1->TabIndex = 23;
			this->chart3label1->Text = L"HPVT";
			// 
			// chart4label2Name2
			// 
			this->chart4label2Name2->AutoSize = true;
			this->chart4label2Name2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart4label2Name2->Location = System::Drawing::Point(1831, 818);
			this->chart4label2Name2->Name = L"chart4label2Name2";
			this->chart4label2Name2->Size = System::Drawing::Size(36, 29);
			this->chart4label2Name2->TabIndex = 34;
			this->chart4label2Name2->Text = L"%";
			// 
			// chart4label2Data2
			// 
			this->chart4label2Data2->AutoSize = true;
			this->chart4label2Data2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart4label2Data2->Location = System::Drawing::Point(1734, 818);
			this->chart4label2Data2->Name = L"chart4label2Data2";
			this->chart4label2Data2->Size = System::Drawing::Size(65, 29);
			this->chart4label2Data2->TabIndex = 33;
			this->chart4label2Data2->Text = L"0000";
			// 
			// chart4label2
			// 
			this->chart4label2->AutoSize = true;
			this->chart4label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chart4label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->chart4label2->Location = System::Drawing::Point(1734, 770);
			this->chart4label2->Name = L"chart4label2";
			this->chart4label2->Size = System::Drawing::Size(69, 29);
			this->chart4label2->TabIndex = 32;
			this->chart4label2->Text = L"CMT";
			// 
			// chart4label1Name1
			// 
			this->chart4label1Name1->AutoSize = true;
			this->chart4label1Name1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart4label1Name1->Location = System::Drawing::Point(1831, 722);
			this->chart4label1Name1->Name = L"chart4label1Name1";
			this->chart4label1Name1->Size = System::Drawing::Size(36, 29);
			this->chart4label1Name1->TabIndex = 31;
			this->chart4label1Name1->Text = L"%";
			// 
			// chart4label1Data1
			// 
			this->chart4label1Data1->AutoSize = true;
			this->chart4label1Data1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart4label1Data1->Location = System::Drawing::Point(1734, 722);
			this->chart4label1Data1->Name = L"chart4label1Data1";
			this->chart4label1Data1->Size = System::Drawing::Size(65, 29);
			this->chart4label1Data1->TabIndex = 30;
			this->chart4label1Data1->Text = L"0000";
			// 
			// chart4label1
			// 
			this->chart4label1->AutoSize = true;
			this->chart4label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chart4label1->ForeColor = System::Drawing::Color::Red;
			this->chart4label1->Location = System::Drawing::Point(1734, 674);
			this->chart4label1->Name = L"chart4label1";
			this->chart4label1->Size = System::Drawing::Size(71, 29);
			this->chart4label1->TabIndex = 29;
			this->chart4label1->Text = L"WTR";
			// 
			// IemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1924, 982);
			this->Controls->Add(this->chart4label2Name2);
			this->Controls->Add(this->chart4label2Data2);
			this->Controls->Add(this->chart4label2);
			this->Controls->Add(this->chart4label1Name1);
			this->Controls->Add(this->chart4label1Data1);
			this->Controls->Add(this->chart4label1);
			this->Controls->Add(this->chart3label2Name2);
			this->Controls->Add(this->chart3label2Data2);
			this->Controls->Add(this->chart3label2);
			this->Controls->Add(this->chart3label1Name1);
			this->Controls->Add(this->chart3label1Data1);
			this->Controls->Add(this->chart3label1);
			this->Controls->Add(this->chart2label2Name2);
			this->Controls->Add(this->chart2label2Data2);
			this->Controls->Add(this->chartlabel2);
			this->Controls->Add(this->chart2label1Name1);
			this->Controls->Add(this->chart2label1Data1);
			this->Controls->Add(this->chart2label1);
			this->Controls->Add(this->chart1label3Name3);
			this->Controls->Add(this->chart1label3Data3);
			this->Controls->Add(this->chart1label3);
			this->Controls->Add(this->chart1label2Name2);
			this->Controls->Add(this->chart1label2Data2);
			this->Controls->Add(this->chart1label2);
			this->Controls->Add(this->chart1label1Name1);
			this->Controls->Add(this->chart1label1Data1);
			this->Controls->Add(this->chart1label1);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->labelDataTime);
			this->Controls->Add(this->labelComPortConnection);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"IemForm";
			this->Text = L"o";
			this->Load += gcnew System::EventHandler(this, &IemForm::IemForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Defining methods ToolStripMenu

	private: System::Void connectionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void portToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void openPortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void closePortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStripComboBoxPortSelection_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void serialPort_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e);
	private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void labelComPortConnection_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void IemForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void labelDataTime_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Chart1label1Data_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart2label1Data1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart2label2Data2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
