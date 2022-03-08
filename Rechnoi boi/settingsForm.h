#pragma once

namespace Rechnoiboi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ settingsForm
	/// </summary>
	public ref class settingsForm : public System::Windows::Forms::Form
	{
	public:
		settingsForm(void)
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
		~settingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Label^ labelLanguageSelect;
	private: System::Windows::Forms::ListBox^ listBoxLanguageSelect;
	private: System::Windows::Forms::ListBox^ listBoxScreenMode;
	private: System::Windows::Forms::ListBox^ listBoxGraphicsQuality;
	private: System::Windows::Forms::Label^ labelGraphicsQuality;
	private: System::Windows::Forms::Label^ labelScreenMode;
	private: System::Windows::Forms::TrackBar^ trackBarSoundSFX;
	private: System::Windows::Forms::Label^ labelSoundSFX;
	private: System::Windows::Forms::Label^ labelMusicSFX;
	private: System::Windows::Forms::TrackBar^ trackBarMusicSFX;

	protected:

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
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->labelLanguageSelect = (gcnew System::Windows::Forms::Label());
			this->listBoxLanguageSelect = (gcnew System::Windows::Forms::ListBox());
			this->listBoxScreenMode = (gcnew System::Windows::Forms::ListBox());
			this->listBoxGraphicsQuality = (gcnew System::Windows::Forms::ListBox());
			this->labelGraphicsQuality = (gcnew System::Windows::Forms::Label());
			this->labelScreenMode = (gcnew System::Windows::Forms::Label());
			this->trackBarSoundSFX = (gcnew System::Windows::Forms::TrackBar());
			this->labelSoundSFX = (gcnew System::Windows::Forms::Label());
			this->labelMusicSFX = (gcnew System::Windows::Forms::Label());
			this->trackBarMusicSFX = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarSoundSFX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarMusicSFX))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(12, 12);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(97, 35);
			this->buttonBack->TabIndex = 4;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &settingsForm::buttonBack_Click);
			// 
			// labelLanguageSelect
			// 
			this->labelLanguageSelect->AutoSize = true;
			this->labelLanguageSelect->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLanguageSelect->Location = System::Drawing::Point(870, 20);
			this->labelLanguageSelect->Name = L"labelLanguageSelect";
			this->labelLanguageSelect->Size = System::Drawing::Size(96, 23);
			this->labelLanguageSelect->TabIndex = 6;
			this->labelLanguageSelect->Text = L"Language:";
			// 
			// listBoxLanguageSelect
			// 
			this->listBoxLanguageSelect->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBoxLanguageSelect->FormattingEnabled = true;
			this->listBoxLanguageSelect->ItemHeight = 23;
			this->listBoxLanguageSelect->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"English", L"–усский" });
			this->listBoxLanguageSelect->Location = System::Drawing::Point(972, 16);
			this->listBoxLanguageSelect->Name = L"listBoxLanguageSelect";
			this->listBoxLanguageSelect->Size = System::Drawing::Size(93, 27);
			this->listBoxLanguageSelect->TabIndex = 5;
			// 
			// listBoxScreenMode
			// 
			this->listBoxScreenMode->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxScreenMode->FormattingEnabled = true;
			this->listBoxScreenMode->ItemHeight = 23;
			this->listBoxScreenMode->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Fullscreen", L"Windowed" });
			this->listBoxScreenMode->Location = System::Drawing::Point(566, 178);
			this->listBoxScreenMode->Name = L"listBoxScreenMode";
			this->listBoxScreenMode->Size = System::Drawing::Size(114, 27);
			this->listBoxScreenMode->TabIndex = 7;
			// 
			// listBoxGraphicsQuality
			// 
			this->listBoxGraphicsQuality->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBoxGraphicsQuality->FormattingEnabled = true;
			this->listBoxGraphicsQuality->ItemHeight = 23;
			this->listBoxGraphicsQuality->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"High", L"Low" });
			this->listBoxGraphicsQuality->Location = System::Drawing::Point(566, 237);
			this->listBoxGraphicsQuality->Name = L"listBoxGraphicsQuality";
			this->listBoxGraphicsQuality->Size = System::Drawing::Size(114, 27);
			this->listBoxGraphicsQuality->TabIndex = 8;
			// 
			// labelGraphicsQuality
			// 
			this->labelGraphicsQuality->AutoSize = true;
			this->labelGraphicsQuality->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelGraphicsQuality->Location = System::Drawing::Point(408, 241);
			this->labelGraphicsQuality->Name = L"labelGraphicsQuality";
			this->labelGraphicsQuality->Size = System::Drawing::Size(152, 23);
			this->labelGraphicsQuality->TabIndex = 9;
			this->labelGraphicsQuality->Text = L"Graphics quality:";
			// 
			// labelScreenMode
			// 
			this->labelScreenMode->AutoSize = true;
			this->labelScreenMode->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelScreenMode->Location = System::Drawing::Point(438, 182);
			this->labelScreenMode->Name = L"labelScreenMode";
			this->labelScreenMode->Size = System::Drawing::Size(122, 23);
			this->labelScreenMode->TabIndex = 10;
			this->labelScreenMode->Text = L"Screen mode:";
			// 
			// trackBarSoundSFX
			// 
			this->trackBarSoundSFX->Location = System::Drawing::Point(566, 296);
			this->trackBarSoundSFX->Name = L"trackBarSoundSFX";
			this->trackBarSoundSFX->Size = System::Drawing::Size(164, 45);
			this->trackBarSoundSFX->TabIndex = 11;
			this->trackBarSoundSFX->Scroll += gcnew System::EventHandler(this, &settingsForm::trackBar1_Scroll);
			// 
			// labelSoundSFX
			// 
			this->labelSoundSFX->AutoSize = true;
			this->labelSoundSFX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSoundSFX->Location = System::Drawing::Point(449, 296);
			this->labelSoundSFX->Name = L"labelSoundSFX";
			this->labelSoundSFX->Size = System::Drawing::Size(111, 23);
			this->labelSoundSFX->TabIndex = 12;
			this->labelSoundSFX->Text = L"Sound SFX:";
			// 
			// labelMusicSFX
			// 
			this->labelMusicSFX->AutoSize = true;
			this->labelMusicSFX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMusicSFX->Location = System::Drawing::Point(449, 346);
			this->labelMusicSFX->Name = L"labelMusicSFX";
			this->labelMusicSFX->Size = System::Drawing::Size(110, 23);
			this->labelMusicSFX->TabIndex = 13;
			this->labelMusicSFX->Text = L"Music SFX:";
			// 
			// trackBarMusicSFX
			// 
			this->trackBarMusicSFX->Location = System::Drawing::Point(566, 346);
			this->trackBarMusicSFX->Name = L"trackBarMusicSFX";
			this->trackBarMusicSFX->Size = System::Drawing::Size(164, 45);
			this->trackBarMusicSFX->TabIndex = 14;
			// 
			// settingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1088, 693);
			this->Controls->Add(this->trackBarMusicSFX);
			this->Controls->Add(this->labelMusicSFX);
			this->Controls->Add(this->labelSoundSFX);
			this->Controls->Add(this->trackBarSoundSFX);
			this->Controls->Add(this->labelScreenMode);
			this->Controls->Add(this->labelGraphicsQuality);
			this->Controls->Add(this->listBoxGraphicsQuality);
			this->Controls->Add(this->listBoxScreenMode);
			this->Controls->Add(this->labelLanguageSelect);
			this->Controls->Add(this->listBoxLanguageSelect);
			this->Controls->Add(this->buttonBack);
			this->Name = L"settingsForm";
			this->Text = L"settingsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarSoundSFX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarMusicSFX))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e);
};
}
