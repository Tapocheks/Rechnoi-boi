#pragma once

namespace Rechnoiboi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ gameForm
	/// </summary>
	public ref class gameForm : public System::Windows::Forms::Form
	{
	public:
		gameForm(void)
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
		~gameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ buttonMenu;

	private: System::Windows::Forms::Button^ buttonSettings;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabelComputer;
	private: System::Windows::Forms::ToolStripProgressBar^ toolStripProgressBarComputer;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonMenu = (gcnew System::Windows::Forms::Button());
			this->buttonSettings = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabelComputer = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBarComputer = (gcnew System::Windows::Forms::ToolStripProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(109, 122);
			this->dataGridView1->MaximumSize = System::Drawing::Size(400, 400);
			this->dataGridView1->MinimumSize = System::Drawing::Size(400, 400);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(400, 400);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(652, 122);
			this->dataGridView2->MaximumSize = System::Drawing::Size(400, 400);
			this->dataGridView2->MinimumSize = System::Drawing::Size(400, 400);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(400, 400);
			this->dataGridView2->TabIndex = 1;
			// 
			// buttonMenu
			// 
			this->buttonMenu->Location = System::Drawing::Point(12, 12);
			this->buttonMenu->Name = L"buttonMenu";
			this->buttonMenu->Size = System::Drawing::Size(97, 35);
			this->buttonMenu->TabIndex = 4;
			this->buttonMenu->Text = L"Menu";
			this->buttonMenu->UseVisualStyleBackColor = true;
			this->buttonMenu->Click += gcnew System::EventHandler(this, &gameForm::buttonMenu_Click);
			// 
			// buttonSettings
			// 
			this->buttonSettings->Location = System::Drawing::Point(1054, 12);
			this->buttonSettings->Name = L"buttonSettings";
			this->buttonSettings->Size = System::Drawing::Size(105, 35);
			this->buttonSettings->TabIndex = 5;
			this->buttonSettings->Text = L"Settings";
			this->buttonSettings->UseVisualStyleBackColor = true;
			this->buttonSettings->Click += gcnew System::EventHandler(this, &gameForm::buttonSettings_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabelComputer,
					this->toolStripProgressBarComputer
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 674);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1171, 22);
			this->statusStrip1->TabIndex = 6;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabelComputer
			// 
			this->toolStripStatusLabelComputer->Name = L"toolStripStatusLabelComputer";
			this->toolStripStatusLabelComputer->Size = System::Drawing::Size(96, 17);
			this->toolStripStatusLabelComputer->Text = L"Computer thinks";
			// 
			// toolStripProgressBarComputer
			// 
			this->toolStripProgressBarComputer->Name = L"toolStripProgressBarComputer";
			this->toolStripProgressBarComputer->Size = System::Drawing::Size(100, 16);
			// 
			// gameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1171, 696);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->buttonSettings);
			this->Controls->Add(this->buttonMenu);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"gameForm";
			this->Text = L"gameForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void buttonMenu_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSettings_Click(System::Object^ sender, System::EventArgs^ e);
};
}
