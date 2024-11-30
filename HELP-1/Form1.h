#pragma once
#include<fstream>
#include<iostream>
#include<cmath>
#include<algorithm>
#include <string>
#include<numeric>
#include<random>
#include<vector>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label5;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"open";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(283, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 128);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"zoom in";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(128, 138);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"zoom out";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(673, 10);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 128);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(378, 520);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Discrete Matrix";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(669, 520);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Coloured Bitmap";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(1112, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(129, 128);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1007, 520);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(253, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Corelation matrix after permutation";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(1531, 11);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(123, 127);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1406, 520);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(296, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Matrix after signature and argumentation";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(49, 181);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(133, 128);
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Corelation matrix before permutation";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1778, 1050);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file;//^ means * in new c++
		openFileDialog1->ShowDialog();//to open files directories
		file = openFileDialog1->FileName;//file ka path is stored in file
		const wchar_t* wstr = (const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(file)).ToPointer();
		/**/wstring wideString(wstr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)wstr));
		string normalFile(wideString.begin(), wideString.end());//converting path  to just filename:((((((
		std::ifstream inf(normalFile);
		int rows, cols;
		inf >> rows;
		inf >> cols;
		double** data = new double* [rows];
		for (int i = 0; i < rows; ++i) {
			data[i] = new double[cols];
		}
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				inf >> data[i][j];
			}
		}
		inf.close();
		//dma
		double** matrix = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			matrix[i] = new double[rows];
		}
		//calculating perasons coefficient
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				double sumx = 0, sumy = 0, sumxy = 0, sumxsqaure = 0, sumysqaure = 0;
				for (int k = 0; k < cols; k++) {
					sumx += data[i][k];//for row 1 as saving row one in x
					sumy += data[j][k];//for row 2 as saving row two in y
					sumxy += data[i][k] * data[j][k];
					sumxsqaure += data[i][k] * data[i][k];
					sumysqaure += data[j][k] * data[j][k];
				}
				double numerator = (cols * sumxy) - (sumx * sumy);
				double denominator = sqrt(((cols * sumxsqaure) - (sumx * sumx)) * ((cols * sumysqaure) - (sumy * sumy)));
				if (denominator == 0) {
					matrix[i][j] = 0;
				}
				else {
					matrix[i][j] = numerator / denominator;
				}
			}
		}
		double** graymatrix = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			graymatrix[i] = new double[rows];
		}
		//calculating mean and setting values above mean to 1 and rest to 0 to gray matrix;
		for (int i = 0; i < rows; i++) {
			double mean = 0;
			for (int j = 0; j < rows; j++) {
				mean += matrix[j][i];
			}
			mean /= rows;
			for (int j = 0; j < rows; j++) {
				if (matrix[j][i] > mean) {
					graymatrix[j][i] = 1;
				}
				else {
					graymatrix[j][i] = 0;
				}
			}
		}
		//using bitmap code from udemy
		//using bitmap code from udemy
		Bitmap^ bmp = gcnew Bitmap(rows, rows);//pasing rows to bitmap as height and width of bitmap
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				if (graymatrix[i][j] == 1)
				{
					bmp->SetPixel(i, j, Color::Black);
					pictureBox1->Image = bmp;
				}
				else
				{
					bmp->SetPixel(i, j, Color::White);
					pictureBox1->Image = bmp;
				}
			}
		}
		//bitmap for colour coded
		Bitmap^ bmp1 = gcnew Bitmap(rows, rows);//pasing rows to bitmap as height and width of bitmap
		for (int i = 0; i < rows; i++)
		{
			double max = -100;
			for (int j = 0; j < rows; j++)
			{
				if (matrix[j][i] > max)
				{
					max = matrix[j][i];
				}

			}
			for (int j = 0; j < rows; j++)
			{
				if (matrix[j][i] >= 0)
				{
					int pixel = (int)(matrix[j][i] / max * 255);
					bmp1->SetPixel(i, j, Color::FromArgb(0, pixel, 0));
				}
				else
				{
					int pixel = (int)(matrix[j][i] / max * 255 * -1);
					bmp1->SetPixel(i, j, Color::FromArgb(0, pixel, 0));
				}
			}
			pictureBox2->Image = bmp1;
		}
		std::vector<int> row_indices(rows);
		std::iota(row_indices.begin(), row_indices.end(), 0);
		std::shuffle(row_indices.begin(), row_indices.end(), std::mt19937(std::random_device()()));

		// Use shuffled row indices to permute data
		Bitmap^ bmp_after_permutation = gcnew Bitmap(rows, rows);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				int index = row_indices[i]; // Use of shuffled row index
				if (matrix[index][j] > 0) {
					bmp_after_permutation->SetPixel(j, i, Color::FromArgb(255 - index, 255 - index, 255 - index));
				}
				else {
					bmp_after_permutation->SetPixel(j, i, Color::White);
				}
			}
		}
		pictureBox3->Image = bmp_after_permutation;
		double sum1 = 0;
		double* max = new double[rows];
		double* mean = new double[rows];

		// Calculate the mean and max values for each row
		for (int i = 0; i < rows; i++) {
			double max_val = 0;
			double sum = 0;
			for (int j = 0; j < cols; j++) {
				sum += matrix[j][i];
				if (matrix[j][i] > max_val) {
					max_val = matrix[j][i];
				}
			}
			mean[i] = sum / cols;
			max[i] = max_val;
		}

		// Calculate sig[] based on mean and max
		double* sig = new double[rows];
		for (int i = 0; i < rows; i++) {
			sig[i] = mean[i] * max[i];
		}
		// The sorting and rearrangement code remains the same as before
		// Sort the rows of the permuted data matrix based on sig[] values in descending order
		std::vector<std::pair<double, int>> sig_indices(rows);
		for (int i = 0; i < rows; ++i) {
			sig_indices[i] = std::make_pair(sig[i], i);
		}
		std::sort(sig_indices.begin(), sig_indices.end(), std::greater<std::pair<double, int>>());

		// Rearrange the data matrix based on the sorted indices
		double** sorted_matrix = new double* [rows];
		for (int i = 0; i < rows; ++i) {
			sorted_matrix[i] = new double[rows];
			int index = sig_indices[i].second;
			for (int j = 0; j < rows; ++j) {
				sorted_matrix[i][j] = matrix[index][j];
			}
		}
		// Discretize the sorted matrix and display the bitmap
		Bitmap^ bmp_sorted = gcnew Bitmap(rows, rows);
		for (int i = 0; i < rows; i++)
		{
			double max = -100;
			for (int j = 0; j < rows; j++)
			{
				if (sorted_matrix[j][i] > max)
				{
					max = sorted_matrix[j][i];
				}

			}
			for (int j = 0; j < rows; j++)
			{
				if (sorted_matrix[j][i] >= 0)
				{
					int pixel = (int)(sorted_matrix[j][i] / max * 255);
					bmp_sorted->SetPixel(i, j, Color::FromArgb(0, pixel, 0));
				}
				else
				{
					int pixel = (int)(sorted_matrix[j][i] / max * 255 * -1);
					bmp_sorted->SetPixel(i, j, Color::FromArgb(0, pixel, 0));
				}
			}
			pictureBox4->Image = bmp_sorted;
		}
		Bitmap^ bmp_before_permutation = gcnew Bitmap(rows, rows);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				if (data[i][j] > 0) {
					bmp_before_permutation->SetPixel(i, j, Color::Black);
				}
				else {
					bmp_before_permutation->SetPixel(i, j, Color::White);
				}
			}
		}
		pictureBox5->Image = bmp_before_permutation;
		// Free memory
		for (int i = 0; i < rows; ++i) {
			delete[] sorted_matrix[i];
		}
		delete[] sorted_matrix;
		delete[] sig;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Height *= 2;
		pictureBox1->Width *= 2;
		pictureBox2->Height *= 2;
		pictureBox2->Width *= 2;
		pictureBox3->Height *= 2;
		pictureBox3->Width *= 2;
		pictureBox4->Height *= 2;
		pictureBox4->Width *= 2;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Height *= 0.5;
		pictureBox1->Width *= 0.5;
		pictureBox2->Height *= 0.5;
		pictureBox2->Width *= 0.5;
		pictureBox3->Height *= 0.5;
		pictureBox3->Width *= 0.5;
		pictureBox4->Height *= 0.5;
		pictureBox4->Width *= 0.5;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
