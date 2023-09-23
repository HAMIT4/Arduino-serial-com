#include "ArduinoCOM.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ArduinoCOMPortcommunicationexe::ArduinoCOM form;
	Application::Run(% form);
}