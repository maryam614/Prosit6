#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Prosit6::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}