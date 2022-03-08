#include "menuForm.h"
#include "gameForm.h"
#include "settingsForm.h"

System::Void Rechnoiboi::menuForm::buttonStart_Click(System::Object^ sender, System::EventArgs^ e)
{
	gameForm^ form = gcnew gameForm();
	form->Show();
	this->Hide();
}

System::Void Rechnoiboi::menuForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Выйти?", "Выход!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}

System::Void Rechnoiboi::menuForm::buttonSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	settingsForm^ form = gcnew settingsForm();
	form->Show();
}
