#pragma once
#include <math.h>
#include "SplineInterpolation.hpp"
#include <tuple>
#include "Functions.hpp"
#include <functional>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox3;





	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ coll_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_i_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ a_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ d_i;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ j_index;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_j;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fx_j;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sx_j;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fx_j_Sx_j;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fx_j_der;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sx_j_der;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fx_j_derSx_j_der;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fx_j_der2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sx_j_der2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fx_j_der2Sx_j_der2;



	private: System::Windows::Forms::TextBox^ textBox9;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
























	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->coll_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_i_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->a_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->d_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->j_index = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_j = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fx_j = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sx_j = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fx_j_Sx_j = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fx_j_der = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sx_j_der = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fx_j_derSx_j_der = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fx_j_der2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sx_j_der2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fx_j_der2Sx_j_der2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(14, 198);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(593, 560);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 133);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->coll_i,
					this->x_i_1, this->x_i, this->a_i, this->b_i, this->c_i, this->d_i
			});
			this->dataGridView1->Location = System::Drawing::Point(1108, 13);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(803, 166);
			this->dataGridView1->TabIndex = 2;
			// 
			// coll_i
			// 
			this->coll_i->HeaderText = L"i";
			this->coll_i->MinimumWidth = 6;
			this->coll_i->Name = L"coll_i";
			this->coll_i->ReadOnly = true;
			this->coll_i->Width = 50;
			// 
			// x_i_1
			// 
			this->x_i_1->HeaderText = L"x_i-1";
			this->x_i_1->MinimumWidth = 6;
			this->x_i_1->Name = L"x_i_1";
			this->x_i_1->ReadOnly = true;
			this->x_i_1->Width = 125;
			// 
			// x_i
			// 
			this->x_i->HeaderText = L"x_i";
			this->x_i->MinimumWidth = 6;
			this->x_i->Name = L"x_i";
			this->x_i->ReadOnly = true;
			this->x_i->Width = 125;
			// 
			// a_i
			// 
			this->a_i->HeaderText = L"a_i";
			this->a_i->MinimumWidth = 6;
			this->a_i->Name = L"a_i";
			this->a_i->Width = 125;
			// 
			// b_i
			// 
			this->b_i->HeaderText = L"b_i";
			this->b_i->MinimumWidth = 6;
			this->b_i->Name = L"b_i";
			this->b_i->Width = 125;
			// 
			// c_i
			// 
			this->c_i->HeaderText = L"c_i";
			this->c_i->MinimumWidth = 6;
			this->c_i->Name = L"c_i";
			this->c_i->Width = 125;
			// 
			// d_i
			// 
			this->d_i->HeaderText = L"d_i";
			this->d_i->MinimumWidth = 6;
			this->d_i->Name = L"d_i";
			this->d_i->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(344, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"a";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(367, 25);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"-1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(463, 28);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(486, 25);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(506, 147);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(64, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"10";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(26, 28);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(141, 20);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Тестовая задача";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(26, 55);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(143, 20);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->Text = L"Основная задача";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(26, 82);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(265, 20);
			this->radioButton3->TabIndex = 16;
			this->radioButton3->Text = L"Задача с осциллирующей функцией";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(506, 98);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(64, 22);
			this->textBox6->TabIndex = 17;
			this->textBox6->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(344, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 32);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Размерность сетки\r\n(количество участков)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(344, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(263, 16);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Для тестовой задачи всегда a = -1, b = 1";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->j_index,
					this->x_j, this->Fx_j, this->Sx_j, this->Fx_j_Sx_j, this->Fx_j_der, this->Sx_j_der, this->Fx_j_derSx_j_der, this->Fx_j_der2,
					this->Sx_j_der2, this->Fx_j_der2Sx_j_der2
			});
			this->dataGridView2->Location = System::Drawing::Point(14, 766);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1462, 204);
			this->dataGridView2->TabIndex = 20;
			// 
			// j_index
			// 
			this->j_index->HeaderText = L"j";
			this->j_index->MinimumWidth = 6;
			this->j_index->Name = L"j_index";
			this->j_index->Width = 125;
			// 
			// x_j
			// 
			this->x_j->HeaderText = L"x_j";
			this->x_j->MinimumWidth = 6;
			this->x_j->Name = L"x_j";
			this->x_j->Width = 125;
			// 
			// Fx_j
			// 
			this->Fx_j->HeaderText = L"F(x_j)";
			this->Fx_j->MinimumWidth = 6;
			this->Fx_j->Name = L"Fx_j";
			this->Fx_j->Width = 125;
			// 
			// Sx_j
			// 
			this->Sx_j->HeaderText = L"S(x_j)";
			this->Sx_j->MinimumWidth = 6;
			this->Sx_j->Name = L"Sx_j";
			this->Sx_j->Width = 125;
			// 
			// Fx_j_Sx_j
			// 
			this->Fx_j_Sx_j->HeaderText = L"F(x_j)-S(x_j)";
			this->Fx_j_Sx_j->MinimumWidth = 6;
			this->Fx_j_Sx_j->Name = L"Fx_j_Sx_j";
			this->Fx_j_Sx_j->Width = 125;
			// 
			// Fx_j_der
			// 
			this->Fx_j_der->HeaderText = L"F\'(x_j)";
			this->Fx_j_der->MinimumWidth = 6;
			this->Fx_j_der->Name = L"Fx_j_der";
			this->Fx_j_der->Width = 125;
			// 
			// Sx_j_der
			// 
			this->Sx_j_der->HeaderText = L"S\'(x_j)";
			this->Sx_j_der->MinimumWidth = 6;
			this->Sx_j_der->Name = L"Sx_j_der";
			this->Sx_j_der->Width = 125;
			// 
			// Fx_j_derSx_j_der
			// 
			this->Fx_j_derSx_j_der->HeaderText = L"F\'(x_j)-S\'(x_j)";
			this->Fx_j_derSx_j_der->MinimumWidth = 6;
			this->Fx_j_derSx_j_der->Name = L"Fx_j_derSx_j_der";
			this->Fx_j_derSx_j_der->Width = 125;
			// 
			// Fx_j_der2
			// 
			this->Fx_j_der2->HeaderText = L"F\"(x_j)";
			this->Fx_j_der2->MinimumWidth = 6;
			this->Fx_j_der2->Name = L"Fx_j_der2";
			this->Fx_j_der2->Width = 125;
			// 
			// Sx_j_der2
			// 
			this->Sx_j_der2->HeaderText = L"S\"(x_j)";
			this->Sx_j_der2->MinimumWidth = 6;
			this->Sx_j_der2->Name = L"Sx_j_der2";
			this->Sx_j_der2->Width = 125;
			// 
			// Fx_j_der2Sx_j_der2
			// 
			this->Fx_j_der2Sx_j_der2->HeaderText = L"F\"(x_j)-S\"(x_j)";
			this->Fx_j_der2Sx_j_der2->MinimumWidth = 6;
			this->Fx_j_der2Sx_j_der2->Name = L"Fx_j_der2Sx_j_der2";
			this->Fx_j_der2Sx_j_der2->Width = 125;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(634, 32);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox9->Size = System::Drawing::Size(451, 147);
			this->textBox9->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(344, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 32);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Размерность \r\nконтрольной сетки\r\n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(729, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(242, 16);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Справка по завершении программы";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(664, 198);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(593, 560);
			this->zedGraphControl2->TabIndex = 31;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(1317, 198);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(593, 560);
			this->zedGraphControl3->TabIndex = 31;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 981);
			this->Controls->Add(this->zedGraphControl3);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1918, 1018);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double f1(double x){
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		GraphPane^ panel3 = zedGraphControl3->GraphPane;
		panel->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f_der1 = gcnew ZedGraph::PointPairList();
		PointPairList^ s_der1 = gcnew ZedGraph::PointPairList();
		PointPairList^ f_der2 = gcnew ZedGraph::PointPairList();
		PointPairList^ s_der2 = gcnew ZedGraph::PointPairList();
		PointPairList^ f_s_sub = gcnew ZedGraph::PointPairList();
		PointPairList^ f_s_der1 = gcnew ZedGraph::PointPairList();
		PointPairList^ f_s_der2 = gcnew ZedGraph::PointPairList();

		size_t grid_n = Convert::ToUInt64(textBox6->Text);
		double a = Convert::ToDouble(textBox1->Text);
		double b = Convert::ToDouble(textBox2->Text);
		size_t control_grid_n = Convert::ToUInt64(textBox3->Text);

		std::function<double(double)> func;
		std::function<double(double)> func_der1;
		std::function<double(double)> func_der2;
		if (radioButton1->Checked) {
			func = CMSpline::test_function;
			func_der1 = CMSpline::test_function_derivative1;
			func_der2 = CMSpline::test_function_derivative2;
		}
		else if (radioButton2->Checked) {
			func = CMSpline::main_function;
			func_der1 = CMSpline::main_function_derivative1;
			func_der2 = CMSpline::main_function_derivative2;
		}
		else if (radioButton3->Checked) {
			func = CMSpline::oscillating_function;
			func_der1 = CMSpline::oscillating_function_derivative1;
			func_der2 = CMSpline::oscillating_function_derivative2;
		}
			
		// создаём сетку, a = -1, b = 1
		std::vector<CMSpline::CMPoint> grid_nodes;
		grid_nodes.reserve(grid_n);
		double step = (b - a) / grid_n;
		for (double i = 0; i < grid_n; i++) {
			grid_nodes.push_back({ a + i * step, func(a + i * step)});
		}
		grid_nodes.push_back({ b, func(b) });
		
		//строим кубический сплайн
		CMSpline::CubicSpline spline = CMSpline::interpolate(grid_nodes, 0.0, 0.0);

		// обновление таблиц и графиков
		dataGridView1->Rows->Clear(); // очищение таблицы 1 от старых данных
		for (int j = 1; j < static_cast<int>(grid_n) + 1; j++) {
			// добавление новой строки в таблицу
			dataGridView1->Rows->Add(j, spline.x[j-1], spline.x[j], spline.a[j], spline.b[j], spline.c[j], spline.d[j]);
			
			//Добавление на график
			int points_per_segment = control_grid_n;  // чем больше, тем функция более гладкая
			for (int k = 0; k <= points_per_segment; k++) {
				double t = (double)k / points_per_segment;
				double x = spline.x[j-1] * (1 - t) + spline.x[j] * t;
				double spline_value = spline.get_s_x(x, j);
				
				double func_value = func(x);
				f1_list->Add(x, spline_value);
				f2_list->Add(x, func_value);
			}
		}

		LineItem^ curve1 = panel->AddCurve("Сплайн S(x)", f1_list, Color::Red, SymbolType::Circle);
		LineItem^ curve2 = panel->AddCurve("Значение функции F(x)", f2_list, Color::Blue, SymbolType::Plus);

		// Настройка внешнего вида
		curve1->Line->Width = 2;
		curve2->Line->Width = 2;

		// Настройка осей
		panel->XAxis->Scale->Min = a;
		panel->XAxis->Scale->Max = b;

		// Автомасштабирование по Y
		panel->YAxis->Scale->MinAuto = true;
		panel->YAxis->Scale->MaxAuto = true;

		// Обновляем график
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

		double max_norma_fx_sx = 0.0;
		double x_max_norma_fx_sx = 0.0;
		double max_norma_der1_fx_sx = 0.0;
		double x_max_norma_der1_fx_sx = 0.0;
		double max_norma_der2_fx_sx = 0.0;
		double x_max_norma_der2_fx_sx = 0.0;
		
		dataGridView2->Rows->Clear(); // очищение таблицы 2 от старых данных
		step = (b-a) / static_cast<double>(control_grid_n);
		size_t index_subinterval = 0;
		for (size_t l = 0; l < control_grid_n; l++) {
			double dot_x;
			if (l == control_grid_n - 1)
				dot_x = b;
			else
				dot_x = a + static_cast<int>(l) * step;
			if (l % (control_grid_n / grid_n) == 0) {
				index_subinterval++;
			}
			double fx = func(dot_x);
			double sx = spline.get_s_x(dot_x, index_subinterval);
			double fx_der = func_der1(dot_x);
			double sx_der = spline.get_s_x_der(dot_x, index_subinterval);
			double fx_der2 = func_der2(dot_x);
			double sx_der2 = spline.get_s_x_der_2(dot_x, index_subinterval);
			dataGridView2->Rows->Add(l, dot_x, fx, sx, fx - sx, fx_der, sx_der, fx_der - sx_der, fx_der2, sx_der2, fx_der2 - sx_der2);

			if (abs(fx - sx) > max_norma_fx_sx) {
				max_norma_fx_sx = abs(fx - sx);
				x_max_norma_fx_sx = dot_x;
			}
			if (abs(fx_der - sx_der) > max_norma_der1_fx_sx) {
				max_norma_der1_fx_sx = abs(fx_der - sx_der);
				x_max_norma_der1_fx_sx = dot_x;
			}
			if (abs(fx_der2 - sx_der2) > max_norma_der2_fx_sx) {
				max_norma_der2_fx_sx = abs(fx_der2 - sx_der2);
				x_max_norma_der2_fx_sx = dot_x;
			}

			f_der1->Add(dot_x, fx_der);
			f_der2->Add(dot_x, fx_der2);
			s_der1->Add(dot_x, sx_der);
			s_der2->Add(dot_x, sx_der2);
			f_s_sub->Add(dot_x, abs(fx - sx));
			f_s_der1->Add(dot_x, abs(fx_der - sx_der));
			f_s_der2->Add(dot_x, abs(fx_der2 - sx_der2));
		}

		//for (size_t l = 0; l <= grid_n; l++) {
		//	double dot_x = a + l * step;   // узлы основной сетки: x0, x1, ..., xn
		//	// Находим номер сегмента, которому принадлежит dot_x
		//	// Для узлов x0..x_{n-1} сегмент = l+1, для xn (последний) сегмент = n
		//	size_t segment = (l == grid_n) ? grid_n : l + 1;

		//	double fx = func(dot_x);
		//	double sx = spline.get_s_x(dot_x, segment);
		//	double fx_der = func_der1(dot_x);
		//	double sx_der = spline.get_s_x_der(dot_x, segment);
		//	double fx_der2 = func_der2(dot_x);
		//	double sx_der2 = spline.get_s_x_der_2(dot_x, segment);

		//	dataGridView2->Rows->Add(l, dot_x, fx, sx, fx - sx,
		//		fx_der, sx_der, fx_der - sx_der,
		//		fx_der2, sx_der2, fx_der2 - sx_der2);

		//	// Поиск максимумов погрешностей
		//	if (abs(fx - sx) > max_norma_fx_sx) {
		//		max_norma_fx_sx = abs(fx - sx);
		//		x_max_norma_fx_sx = dot_x;
		//	}
		//	if (abs(fx_der - sx_der) > max_norma_der1_fx_sx) {
		//		max_norma_der1_fx_sx = abs(fx_der - sx_der);
		//		x_max_norma_der1_fx_sx = dot_x;
		//	}
		//	if (abs(fx_der2 - sx_der2) > max_norma_der2_fx_sx) {
		//		max_norma_der2_fx_sx = abs(fx_der2 - sx_der2);
		//		x_max_norma_der2_fx_sx = dot_x;
		//	}

		//	// Заполняем списки для графиков погрешностей
		//	f_der1->Add(dot_x, fx_der);
		//	f_der2->Add(dot_x, fx_der2);
		//	s_der1->Add(dot_x, sx_der);
		//	s_der2->Add(dot_x, sx_der2);
		//	f_s_sub->Add(dot_x, abs(fx - sx));
		//	f_s_der1->Add(dot_x, abs(fx_der - sx_der));
		//	f_s_der2->Add(dot_x, abs(fx_der2 - sx_der2));
		//}

		LineItem^ curve3 = panel2->AddCurve("Производная функции F(x)", f_der1, Color::Red, SymbolType::Circle);
		LineItem^ curve4 = panel2->AddCurve("Вторая производная функции F(x)", f_der2, Color::Blue, SymbolType::Plus);
		LineItem^ curve5 = panel2->AddCurve("Производная сплайнa S(x)", s_der1, Color::Green, SymbolType::None);
		LineItem^ curve6 = panel2->AddCurve("Вторая производная сплайнa S(x)", s_der2, Color::Yellow, SymbolType::Diamond);

		LineItem^ curve7 = panel3->AddCurve("Погрешность между функцией F(x) и сплайном S(x)", f_s_sub, Color::Red, SymbolType::Circle);
		LineItem^ curve8 = panel3->AddCurve("Погрешность между производными: функции F(x) и сплайна S(x)", f_s_der1, Color::Violet, SymbolType::Diamond);
		LineItem^ curve9 = panel3->AddCurve("Погрешность между вторыми производными: функции F(x) и сплайна S(x)", f_s_der2, Color::Blue, SymbolType::Plus);

		// Настройка внешнего вида
		curve3->Line->Width = 2;
		curve4->Line->Width = 2;
		curve5->Line->Width = 2;
		curve6->Line->Width = 2;
		curve7->Line->Width = 2;
		curve8->Line->Width = 2;
		curve9->Line->Width = 2;

		// Настройка осей
		panel2->XAxis->Scale->Min = a;
		panel2->XAxis->Scale->Max = b;
		panel3->XAxis->Scale->Min = a;
		panel3->XAxis->Scale->Max = b;

		// Автомасштабирование по Y
		panel2->YAxis->Scale->MinAuto = true;
		panel2->YAxis->Scale->MaxAuto = true;
		panel3->YAxis->Scale->MinAuto = true;
		panel3->YAxis->Scale->MaxAuto = true;

		// Обновляем графики
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();
		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();

		textBox9->Clear();
		textBox9->AppendText(String::Format("Сетка сплайна: n = \"{0}\"\r\n", grid_n));
		textBox9->AppendText(String::Format("Контрольная сетка: N = \"{0}\"\r\n", control_grid_n));
		textBox9->AppendText(String::Format("Погрешность сплайна на контрольной сетке\r\n"));
		textBox9->AppendText(String::Format(
			"max |F(x_j) - S(x_j)| = \"{0:F6}\" при x = \"{1:F6}\"\r\n\r\n",
			max_norma_fx_sx, x_max_norma_fx_sx));

		textBox9->AppendText("Погрешность производной на контрольной сетке\r\n");
		textBox9->AppendText(String::Format(
			"max |F'(x_j) - S'(x_j)| = \"{0:F6}\" при x = \"{1:F6}\"\r\n\r\n",
			max_norma_der1_fx_sx, x_max_norma_der1_fx_sx));

		textBox9->AppendText("Погрешность второй производной на контрольной сетке\r\n");
		textBox9->AppendText(String::Format(
			"max |F''(x_j) - S''(x_j)| = \"{0:F6}\" при x = \"{1:F6}\"\r\n",
			max_norma_der2_fx_sx, x_max_norma_der2_fx_sx));

		

	}

	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
