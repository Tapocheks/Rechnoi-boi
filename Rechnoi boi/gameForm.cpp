#include "gameForm.h"
#include "menuForm.h"
#include "settingsForm.h"

System::Void Rechnoiboi::gameForm::buttonMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
	menuForm^ form = gcnew menuForm();
	form->Show();
	this->Hide();
}

System::Void Rechnoiboi::gameForm::buttonSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	settingsForm^ form = gcnew settingsForm();
	form->Show();
}
