#include "startForm.h"
#include "menuForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Rechnoiboi::startForm form;
	Application::Run(% form);
}

System::Void Rechnoiboi::startForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Выйти?", "Выход!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}

System::Void Rechnoiboi::startForm::buttonStartMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
	menuForm^ form = gcnew menuForm();
	form->Show();
	this->Hide();
}
