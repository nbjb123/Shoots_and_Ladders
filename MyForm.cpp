#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FinalProject::MyForm form;
	Application::Run(% form);
}
