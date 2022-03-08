#pragma once

namespace Rechnoiboi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ startForm
	/// </summary>
	public ref class startForm : public System::Windows::Forms::Form
	{
	public:
		startForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~startForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonStartMenu;
	protected:

	protected:
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::ListBox^ listBoxLanguageSelect;
	private: System::Windows::Forms::Label^ labelLanguageSelect;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonStartMenu = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->listBoxLanguageSelect = (gcnew System::Windows::Forms::ListBox());
			this->labelLanguageSelect = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonStartMenu
			// 
			this->buttonStartMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonStartMenu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStartMenu->Location = System::Drawing::Point(505, 205);
			this->buttonStartMenu->Name = L"buttonStartMenu";
			this->buttonStartMenu->Size = System::Drawing::Size(251, 125);
			this->buttonStartMenu->TabIndex = 0;
			this->buttonStartMenu->Text = L"Play";
			this->buttonStartMenu->UseVisualStyleBackColor = true;
			this->buttonStartMenu->Click += gcnew System::EventHandler(this, &startForm::buttonStartMenu_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 12);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(97, 35);
			this->buttonExit->TabIndex = 1;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &startForm::buttonExit_Click);
			// 
			// listBoxLanguageSelect
			// 
			this->listBoxLanguageSelect->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBoxLanguageSelect->FormattingEnabled = true;
			this->listBoxLanguageSelect->ItemHeight = 23;
			this->listBoxLanguageSelect->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"English", L"–усский" });
			this->listBoxLanguageSelect->Location = System::Drawing::Point(634, 441);
			this->listBoxLanguageSelect->Name = L"listBoxLanguageSelect";
			this->listBoxLanguageSelect->Size = System::Drawing::Size(109, 27);
			this->listBoxLanguageSelect->TabIndex = 2;
			this->listBoxLanguageSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &startForm::listBoxLanguageSelect_SelectedIndexChanged);
			// 
			// labelLanguageSelect
			// 
			this->labelLanguageSelect->AutoSize = true;
			this->labelLanguageSelect->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLanguageSelect->Location = System::Drawing::Point(532, 441);
			this->labelLanguageSelect->Name = L"labelLanguageSelect";
			this->labelLanguageSelect->Size = System::Drawing::Size(96, 23);
			this->labelLanguageSelect->TabIndex = 3;
			this->labelLanguageSelect->Text = L"Language:";
			this->labelLanguageSelect->Click += gcnew System::EventHandler(this, &startForm::labelLanguageSelect_Click);
			// 
			// startForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1228, 589);
			this->Controls->Add(this->labelLanguageSelect);
			this->Controls->Add(this->listBoxLanguageSelect);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonStartMenu);
			this->Name = L"startForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBoxLanguageSelect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelLanguageSelect_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonStartMenu_Click(System::Object^ sender, System::EventArgs^ e);
};
}
