#pragma once

namespace Rechnoiboi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ menuForm
	/// </summary>
	public ref class menuForm : public System::Windows::Forms::Form
	{
	public:
		menuForm(void)
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
		~menuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSettings;
	protected:
	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Button^ buttonEasterEgg;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Label^ labelLanguageSelect;
	private: System::Windows::Forms::ListBox^ listBoxLanguageSelect;


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
			this->buttonSettings = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->buttonEasterEgg = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->labelLanguageSelect = (gcnew System::Windows::Forms::Label());
			this->listBoxLanguageSelect = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// buttonSettings
			// 
			this->buttonSettings->Location = System::Drawing::Point(1103, 12);
			this->buttonSettings->Name = L"buttonSettings";
			this->buttonSettings->Size = System::Drawing::Size(105, 80);
			this->buttonSettings->TabIndex = 0;
			this->buttonSettings->Text = L"Settings";
			this->buttonSettings->UseVisualStyleBackColor = true;
			this->buttonSettings->Click += gcnew System::EventHandler(this, &menuForm::buttonSettings_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(456, 192);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(303, 190);
			this->buttonStart->TabIndex = 1;
			this->buttonStart->Text = L"Play Game";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &menuForm::buttonStart_Click);
			// 
			// buttonEasterEgg
			// 
			this->buttonEasterEgg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEasterEgg->Location = System::Drawing::Point(1180, 624);
			this->buttonEasterEgg->Name = L"buttonEasterEgg";
			this->buttonEasterEgg->Size = System::Drawing::Size(39, 16);
			this->buttonEasterEgg->TabIndex = 2;
			this->buttonEasterEgg->Text = L"Easter Egg";
			this->buttonEasterEgg->UseVisualStyleBackColor = true;
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 12);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(97, 35);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &menuForm::buttonExit_Click);
			// 
			// labelLanguageSelect
			// 
			this->labelLanguageSelect->AutoSize = true;
			this->labelLanguageSelect->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLanguageSelect->Location = System::Drawing::Point(471, 462);
			this->labelLanguageSelect->Name = L"labelLanguageSelect";
			this->labelLanguageSelect->Size = System::Drawing::Size(168, 23);
			this->labelLanguageSelect->TabIndex = 4;
			this->labelLanguageSelect->Text = L"Game mode select:";
			// 
			// listBoxLanguageSelect
			// 
			this->listBoxLanguageSelect->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBoxLanguageSelect->FormattingEnabled = true;
			this->listBoxLanguageSelect->ItemHeight = 23;
			this->listBoxLanguageSelect->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"PvE", L"PvP", L"Computer only" });
			this->listBoxLanguageSelect->Location = System::Drawing::Point(645, 458);
			this->listBoxLanguageSelect->Name = L"listBoxLanguageSelect";
			this->listBoxLanguageSelect->Size = System::Drawing::Size(93, 27);
			this->listBoxLanguageSelect->TabIndex = 5;
			// 
			// menuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1220, 641);
			this->Controls->Add(this->listBoxLanguageSelect);
			this->Controls->Add(this->labelLanguageSelect);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonEasterEgg);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->buttonSettings);
			this->Name = L"menuForm";
			this->Text = L"menuForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSettings_Click(System::Object^ sender, System::EventArgs^ e);
};
}
