//Программа обработки данных с ПЛК FLECS
//RS232
//разработан Bodden007

#include "IemForm.h"
#include <Windows.h>
#include <stdexcept>
#include <sstream>

using namespace System;
using namespace System::Windows::Forms;

//Флаг поиска пробела между цифрами и строкой 
bool inSpaseData = false;

//Флаг начало строки
bool beginString = false;

//Флаг очереди графиков
bool oneQueue = false;

//Переменная буфера
wchar_t buf;

//Адреса массива в потоке SerialPort
int adReseivd;

//Адреса массива в потоке timer1
int adTick = 0;

//Массив обработанных значений
float dataNumber[32];

//Флаг выбора данных 
bool flagDataNumber[32];

//Промежуточная переменная буфера данных
std::string buffer;

//Переменная еденица измерений
std::string stringData;
float numberData;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IEMTools::IemForm form;
	Application::Run(% form);
}

System::Void IEMTools::IemForm::IemForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Stop();
	oneQueue = true;
	

	return System::Void();
}

System::Void IEMTools::IemForm::labelDataTime_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::chart1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::chart2_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::chart3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::chart4_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::Chart1label1Data_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::chart2label1Data1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::chart2label2Data2_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::connectionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::portToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	toolStripComboBoxPortSelection->Items->Clear();

	//Идентификация подключенных COM Ports
	array <String^>^ serialPorts = nullptr;
	serialPorts = serialPort->GetPortNames();

	//Вывод COM Port в ячейку выбора порт
	toolStripComboBoxPortSelection->Items->AddRange(serialPorts);
	return System::Void();
}

System::Void IEMTools::IemForm::openPortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{	
	//Получение текущего времени
	//DateTime dateTime = DateTime::Now;
	//labelDataTime->Text = dateTime.ToString("dd/MM/yyyy HH:mm:ss");

	if (toolStripComboBoxPortSelection->SelectedIndex != -1) {
		try
		{
			//отключение кнопок: порт, подключить
			portToolStripMenuItem->Enabled = false;
			openPortToolStripMenuItem->Enabled = false;

			serialPort->PortName = toolStripComboBoxPortSelection->Text;
			serialPort->Open();
			labelComPortConnection->Text = toolStripComboBoxPortSelection->Text;

			if (serialPort->IsOpen) timer1->Start();
		}
		catch (const std::exception&)
		{
			portToolStripMenuItem->Enabled = true;
			openPortToolStripMenuItem->Enabled = true;

			MessageBox::Show("КАКАЯ ТО ЖОПА", "ВНИМАНИЕ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("ВЫБЕРИ COM PORT", "ВНИМАНИЕ", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	return System::Void();
}

System::Void IEMTools::IemForm::closePortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Stop();
	serialPort->Close();

	labelComPortConnection->Text = "ХЕР";

	portToolStripMenuItem->Enabled = true;
	openPortToolStripMenuItem->Enabled = true;

	toolStripComboBoxPortSelection->Items->Clear();

	int quanFild = toolStripComboBoxPortSelection->Items->Count;

	MessageBox::Show("соединение с COM Port разорвано", "ПРЕДУПРЕЖДЕНИЕ", MessageBoxButtons::OK, MessageBoxIcon::Information);

	if (toolStripComboBoxPortSelection->SelectedIndex != -1)
		toolStripComboBoxPortSelection->Items->Remove(toolStripComboBoxPortSelection->SelectedIndex);

	toolStripComboBoxPortSelection->Text = "";
}


System::Void IEMTools::IemForm::toolStripComboBoxPortSelection_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::serialPort_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e)
{
	//Буфер приема символов	
	
	buf = Convert::ToChar(serialPort->ReadByte());

	//Основная логика деления строки на float и string
	try {
		if (!inSpaseData) 
		{
			if (buf != ' ') 
			{
				buffer += buf;
				inSpaseData = true;
			}
		}
		else
		{
			if (buf == ',') {
				buffer += buf;

				//Поток преобразования Char -> float  и string
				std::stringstream interData(buffer);
				interData >> numberData >> stringData;

				//Циклы записей данных в массив
				if (stringData == "wtr%,") 
				{
					beginString = true;
					adReseivd = 0;
				}

				if (beginString)
				{
					dataNumber[adReseivd] = numberData;
					
					adReseivd++;
				}

				if (stringData == "cmt%,") 
				{
					beginString = false;
				}

				buffer.clear();
				inSpaseData = false;
			}
			else 
			{
				buffer += buf;				
			}
		}
	}
	catch (const std::exception&)
	{
		buffer.clear();
		serialPort->Close();
		inSpaseData = false;
		beginString = false;
		portToolStripMenuItem->Enabled = true;
		openPortToolStripMenuItem->Enabled = true;
		timer1->Stop();

		MessageBox::Show("потеря данных, проверьте соединение RS232", "ОШИБКА", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}

System::Void IEMTools::IemForm::textBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::labelComPortConnection_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void IEMTools::IemForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	/*Поток Таймера*/
	DateTime dateTime = DateTime::Now;

	if (oneQueue) 
	{

		chart2label1Data1->Text = dataNumber[25].ToString();
		chart2label2Data2->Text = dataNumber[26].ToString();

		chart2->Series[0]->Points->AddXY(dateTime.ToString("mm:s"), dataNumber[25]);
		chart2->Series[1]->Points->AddXY(dateTime.ToString("mm:s"), dataNumber[26]);

		chart4label1Data1->Text = dataNumber[0].ToString();
		chart4label2Data2->Text = dataNumber[31].ToString();

		chart4->Series[0]->Points->AddXY(dateTime.ToString("mm:s"), dataNumber[0]);
		chart4->Series[1]->Points->AddXY(dateTime.ToString("mm:s"), dataNumber[31]);

		oneQueue = false;
		
	}
	else
	{
		oneQueue = true;
	}




	//textBox->Text += dataNumber[adTick].ToString() + "  ";
	//adTick++;
	//if (adTick == 32) adTick = 0;
}
//Флаги массива данных flagDataNumber (true and false)
// 0	wtr%,	водяной дозатор	:		1	bpm,
// 2	bpm,					:		3	DigOut,
// 4	,						:		5	F,
// 6	ppg,					:		7	ft,
// 8	ppg,					:		9	ft,		уровень RSM
// 10	un,						:		11	un,
// 12	un,						:		13	bbl,
// 14	un,						:		15	bbl,
// 16	%,						:		17	ppg,
// 18	bbl,					:		19	bbl,
// 20	bpm,					:		21	ppg,
// 22	ppg,					:		23	gpm,
// 24	bpm,					:		25	psi,	давление DS
// 26	psi,	давление PS		:		27	gal,
// 28	gal,					:		29	bbl,
// 30	bbl,					:		31	cmt%,	цементный дозатор









