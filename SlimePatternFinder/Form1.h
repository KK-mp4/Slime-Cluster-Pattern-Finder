#pragma once

#include <math.h>
#include "JavaRandom.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	protected:









	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ bClear;
	private: System::Windows::Forms::RichTextBox^ tbOutput;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ bSearch;
	private: System::Windows::Forms::TextBox^ tbR;
	private: System::Windows::Forms::TextBox^ tbSeed;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->bClear = (gcnew System::Windows::Forms::Button());
			this->tbOutput = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bSearch = (gcnew System::Windows::Forms::Button());
			this->tbR = (gcnew System::Windows::Forms::TextBox());
			this->tbSeed = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->GridColor = System::Drawing::Color::Silver;
			this->dataGridView1->Location = System::Drawing::Point(83, 12);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->Size = System::Drawing::Size(412, 365);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Columns:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox1->Location = System::Drawing::Point(12, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 13);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"4";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Rows:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox2->Location = System::Drawing::Point(12, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(65, 13);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L"4";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// bClear
			// 
			this->bClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->bClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bClear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bClear->Location = System::Drawing::Point(12, 75);
			this->bClear->Name = L"bClear";
			this->bClear->Size = System::Drawing::Size(65, 23);
			this->bClear->TabIndex = 8;
			this->bClear->Text = L"Clear";
			this->bClear->UseVisualStyleBackColor = false;
			this->bClear->Click += gcnew System::EventHandler(this, &Form1::bClear_Click);
			// 
			// tbOutput
			// 
			this->tbOutput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbOutput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->tbOutput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbOutput->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tbOutput->HideSelection = false;
			this->tbOutput->Location = System::Drawing::Point(504, 218);
			this->tbOutput->Name = L"tbOutput";
			this->tbOutput->ReadOnly = true;
			this->tbOutput->Size = System::Drawing::Size(133, 159);
			this->tbOutput->TabIndex = 5;
			this->tbOutput->Text = L"";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(501, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Output:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(501, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Square radius from 0,0:";
			// 
			// bSearch
			// 
			this->bSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->bSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->bSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bSearch->Location = System::Drawing::Point(504, 146);
			this->bSearch->Name = L"bSearch";
			this->bSearch->Size = System::Drawing::Size(133, 23);
			this->bSearch->TabIndex = 7;
			this->bSearch->Text = L"Search";
			this->bSearch->UseVisualStyleBackColor = false;
			this->bSearch->Click += gcnew System::EventHandler(this, &Form1::bSearch_Click);
			// 
			// tbR
			// 
			this->tbR->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->tbR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->tbR->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbR->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tbR->Location = System::Drawing::Point(504, 71);
			this->tbR->Name = L"tbR";
			this->tbR->Size = System::Drawing::Size(133, 13);
			this->tbR->TabIndex = 3;
			this->tbR->Text = L"10000";
			// 
			// tbSeed
			// 
			this->tbSeed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->tbSeed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->tbSeed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbSeed->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->tbSeed->Location = System::Drawing::Point(504, 24);
			this->tbSeed->Name = L"tbSeed";
			this->tbSeed->Size = System::Drawing::Size(133, 13);
			this->tbSeed->TabIndex = 1;
			this->tbSeed->Text = L"1306145184061456995";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(501, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Seed:";
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(504, 100);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(111, 17);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"Stop after first find";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Location = System::Drawing::Point(504, 123);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(97, 17);
			this->checkBox2->TabIndex = 15;
			this->checkBox2->Text = L"Enable rotation";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(646, 389);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbSeed);
			this->Controls->Add(this->bClear);
			this->Controls->Add(this->tbR);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->bSearch);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbOutput);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->Name = L"Form1";
			this->Text = L"Slime Chunk Pattern Finder";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		UpdateMatrix();
	}

	private: System::Void UpdateMatrix()
	{
		int row = 1;
		int column = 1;
		try
		{
			column = Convert::ToInt32(textBox1->Text);
			row = Convert::ToInt32(textBox2->Text);
		}
		catch (...)
		{
			MessageBox::Show("Column / row count is not an integer value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		dataGridView1->ColumnCount = column;
		dataGridView1->RowCount = row;
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		UpdateMatrix();
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		UpdateMatrix();
	}

	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		int i = dataGridView1->CurrentCell->RowIndex;
		int j = dataGridView1->CurrentCell->ColumnIndex;

		if (dataGridView1->Rows[i]->Cells[j]->Value == "#")
		{
			dataGridView1->Rows[i]->Cells[j]->Value = "";
		}
		else
		{
			dataGridView1->Rows[i]->Cells[j]->Value = "#";
		}
		
	}

	private: System::Void bClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = "";
			}
		}
	}

	private: System::Void bSearch_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (dataGridView1->ColumnCount == 0 || dataGridView1->RowCount == 0)
		{
			MessageBox::Show("Matrix is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		tbOutput->Text = "";

		const int m = 20;	// RowCount
		const int n = 20;	// ColumnCount

		long long seed;		// world seed
		int r;				//square radius fomr 0,0

		try
		{
			seed = Convert::ToInt64(tbSeed->Text);
		}
		catch (...)
		{
			MessageBox::Show("Seed is incorrect", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		try
		{
			r = Convert::ToInt32(tbR->Text);
		}
		catch (...)
		{
			MessageBox::Show("Radius is incorrect", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		bool matrix[n * m];

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				int index = (i * dataGridView1->ColumnCount) + j;

				if (dataGridView1->Rows[i]->Cells[j]->Value == "#")
				{
					matrix[index] = true;
				}
				else
				{
					matrix[index] = false;
				}
			}
		}

		Search(seed, r, matrix, dataGridView1->RowCount, dataGridView1->ColumnCount);
	}

	private: System::Void Search(long long seed, int r, bool matrix[], int n, int m)
	{
		int xPosition = 0;	// spiral starting x
		int zPosition = 0;	// spiral starting z

		for (int spiralRadius = 1; spiralRadius <= r; spiralRadius++)
		{
			for (; zPosition > -spiralRadius; zPosition--)	// goes towards -z
			{
				if (IsSlimeMask(seed, xPosition, zPosition, matrix, n, m))
				{
					tbOutput->Text += "Chunk (" + xPosition + " / " + zPosition + ")\r\n";
					if (checkBox1->Checked == true)
					{
						return;
					}
				}
			}
			for (; xPosition > -spiralRadius; xPosition--)	// goes towards -x
			{
				if (IsSlimeMask(seed, xPosition, zPosition, matrix, n, m))
				{
					tbOutput->Text += "Chunk (" + xPosition + " / " + zPosition + ")\r\n";
					if (checkBox1->Checked == true)
					{
						return;
					}
				}
			}
			for (; zPosition < spiralRadius; zPosition++)		// goes towards z
			{
				if (IsSlimeMask(seed, xPosition, zPosition, matrix, n, m))
				{
					tbOutput->Text += "Chunk (" + xPosition + " / " + zPosition + ")\r\n";
					if (checkBox1->Checked == true)
					{
						return;
					}
				}
			}
			for (; xPosition < spiralRadius; xPosition++)		// goes towards x
			{
				if (IsSlimeMask(seed, xPosition, zPosition, matrix, n, m))
				{
					tbOutput->Text += "Chunk (" + xPosition + " / " + zPosition + ")\r\n";
					if (checkBox1->Checked == true)
					{
						return;
					}
				}
			}
		}

		return;
	}

	private: System::Boolean IsSlimeMask(long long seed, int x, int z, bool matrix[], int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (matrix[(i * m) + j] != IsSlimeChunk(seed, x + j, z + i))
				{
					return false;
				}			
			}
		}

		return true;
	}

	private: System::Boolean IsSlimeChunk(uint64_t seed, uint32_t x, uint32_t z)
	{
		JavaRandom rand;
		rand.setSeed(seed + (uint64_t)(int32_t)(x * x * 4987142U) + (uint64_t)(int32_t)(x * 5947611U) + (uint64_t)(int32_t)(z * z) * 4392871ULL + (uint64_t)(int32_t)(z * 389711U) ^ 987234911ULL);
		return rand.nextInt(10) == 0;
	}
};
}
