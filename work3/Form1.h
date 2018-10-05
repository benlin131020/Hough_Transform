#pragma once
#define _USE_MATH_DEFINES 
#include<stdlib.h>
#include<time.h>
#include<math.h>

namespace work3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ���K�n
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;



	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		Bitmap^ Image1;
		Bitmap^ Image2;
		Bitmap^ Image3;
		//�ŧi�Ϲ��ϰ�(�]�w����Ū���B���ץ����Ϲ��ϰ�)
		System::Drawing::Rectangle rect1;
		System::Drawing::Rectangle rect2;
		System::Drawing::Rectangle rect3;
		//�ŧi���@BitmapData���A�A��ܹ����Ȧ�m
		Imaging::BitmapData^ ImageData1;
		Imaging::BitmapData^ ImageData2;
		Imaging::BitmapData^ ImageData3;
		//�ŧi�@int�榡������
		IntPtr ptr1;
		IntPtr ptr2;
		IntPtr ptr3;
		//���˼e��- Byte��Ƽe��
		int BytesOfSkip1;
		int BytesOfSkip2;
		int BytesOfSkip3;
		//�ŧi���e�ת�������T
		int ByteNumber_Width1;
		int ByteNumber_Width2;
		int ByteNumber_Width3;
		//�ŧi�@��Byte�榡������
		Byte* p1; 
		Byte* p2; 
		Byte* p3; 
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;






			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边
		/// �ק�o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(9, 11);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(664, 506);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 573);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 18);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(69, 573);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 18);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Hough Transform";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(678, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(660, 505);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numericUpDown1->Location = System::Drawing::Point(182, 574);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {500, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 5;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(308, 574);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(180, 559);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 12);
			this->label1->TabIndex = 7;
			this->label1->Text = L"T(rho)";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(308, 559);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 12);
			this->label2->TabIndex = 8;
			this->label2->Text = L"T(Sobel)";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1350, 603);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				//new �@�� OpenFileDialog ����
				OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
				//�]�wFilter�A�ΥH���w�ϥΪ̶}�Ҫ��ɮ�
				openFileDialog1->Filter = "�I�}�� (*.bmp)|*.bmp|All files (*.*)|*.*";
				//�w�]�ɮצW�٬��ŭ�
				openFileDialog1->FileName = "";
				//�]�w���X��ܵ��������D�W��
				openFileDialog1->Title = "���J�v��";
				//�]�wFilter��ܼҦ�(�̷�Filter�ơA�p���ҿ��1��ܰ_�l�X�{�����I�}�ϡA���2���All filts)
				openFileDialog1->FilterIndex = 2;
				//���X�ɮ׿�ܵ���(ShowDialog)�A�åB�p�G�ϥΪ��I���ɮסA�åB�ɮצW�ٶW�L0�Ӧr���A�h�P�_�O��True�A�i�J�B�z�{��
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length>0){
					//�N������ɮ�Ū���åB�s��Image1,2,3
					Image3 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
					//�]�wrect�d��j�p
					rect3 = System::Drawing::Rectangle(0, 0, Image3->Width, Image3->Height);
					//�����Ȭ�b,g,r�覡�ƦC�U�h�A�ҥH�e�׹�ڤW��*3���ƭȤj�p
					//�w�]Ū��3channel�Ϲ�
					ByteNumber_Width3 = Image3->Width * 3;
					//��Ƕ�
					Image1=gcnew Bitmap((int)(Image3->Width),(int)(Image3->Height));
					rect1=System::Drawing::Rectangle(0,0,Image1->Width,Image1->Height);
					ByteNumber_Width1=Image1->Width*3;
					ImageData1 = Image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
					ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
					//�Nint���Ы��VImage������ƪ��̫e����m
					ptr1 = ImageData1->Scan0;
					ptr3 = ImageData3->Scan0;
					//���˼e��- Byte��Ƽe��
					BytesOfSkip1 = ImageData1->Stride - ByteNumber_Width1;2;
					BytesOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
					//�]�w����
					p1 = (Byte*)((Void*)ptr1);
					p3 = (Byte*)((Void*)ptr3);
					for (int y = 0; y<Image1->Height; y++){
						for (int x = 0; x<Image1->Width; x++){
							int pixel = p3[0] * 0.114 + p3[1] * 0.587 + p3[2] * 0.299;
							p1[0]=(Byte)(pixel);
							p1[1]=(Byte)(pixel);
							p1[2]=(Byte)(pixel);
							p1+=3;
							p3+=3;
						}
					}
					Image1->UnlockBits(ImageData1);
					Image3->UnlockBits(ImageData3);
					//���Image1��PictureBox1�u��W
					pictureBox1->Image = Image3;
				}
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			Image2=gcnew Bitmap((int)(Image1->Width),(int)(Image1->Height));
			rect2=System::Drawing::Rectangle(0,0,Image2->Width,Image2->Height);
			ByteNumber_Width2=Image2->Width*3;
			ImageData1 = Image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
			ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
			ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
			//�Nint���Ы��VImage������ƪ��̫e����m
			ptr1 = ImageData1->Scan0;
			ptr2 = ImageData2->Scan0;
			ptr3 = ImageData3->Scan0;
			//���˼e��- Byte��Ƽe��
			BytesOfSkip1 = ImageData1->Stride - ByteNumber_Width1;
			BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
			BytesOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
			//�]�w����
			p1 = (Byte*)((Void*)ptr1);
			p2 = (Byte*)((Void*)ptr2);
			p3 = (Byte*)((Void*)ptr3);
			//sobel
			//n
			int num=3;
			//���ߦV�~blank��
			int blank=num/2;
			//n*n��
			int window_size=num*num;
			int index=0;
			//�Y��
			int set_rate;
			int *pixel=NULL;
			int pixel_temp,pixel_temp1,pixel_temp2;
			//acc[theta][rho]
			array<int,2>^ acc=gcnew array<int,2>(180,(Image1->Height>Image1->Width?Image1->Height:Image1->Width)*2);

			for (int y = 0; y<Image2->Height; y++){
				for (int x = 0; x<Image2->Width; x++){
					p1 = (Byte*)((Void*)ptr1);
					//�׶}��t
					if(x>blank && y>blank && x<(Image2->Width-blank) && y<(Image2->Height-blank)){
						pixel=new int[window_size];
						//���o���椺���� ���߬����I
						for(int c=-blank;c<=blank;c++){
							for(int d=-blank;d<=blank;d++){
								pixel[index]=*(p1+((y+c)*ImageData1->Stride)+((x+d)*3));
								index++;
							}
						}

						for(int a=0;a<window_size;a++){
							//�Ĥ@�C������-2 ��l��-1 �̫�@�C������2 ��l��1 �Ѿl��0
							if(a==num/2){set_rate=-2;}
							else if(a==window_size-num/2-1){set_rate=2;}
							else if(a<num){set_rate=-1;}
							else if(a>=window_size-num){set_rate=1;}
							else {set_rate=0;}
							pixel_temp1=pixel_temp1+pixel[a]*set_rate;
						}

						for(int a=0;a<window_size;a++){
							//�Ĥ@�椤����-2 ��l��-1 �̫�@�椤����2 ��l��1 �Ѿl��0
							if(a==window_size/2-num/2){set_rate=-2;}
							else if(a==window_size/2+num/2){set_rate=2;}
							else if(a%num==0){set_rate=-1;}
							else if(a%num==(num-1)){set_rate=1;}
							else {set_rate=0;}
							pixel_temp2=pixel_temp2+pixel[a]*set_rate;
						}
						delete [] pixel;
						pixel_temp=pixel_temp1+pixel_temp2;
						//�ˬd�O�_>255��<0
						if(pixel_temp<numericUpDown2->Value)pixel_temp=0;
						else{
							for (int theta = 0; theta < 180; theta++) {
								int rho = Math::Round(x * cos((M_PI / 180)*(theta - 90)) + y * sin((M_PI / 180)*(theta - 90)));
								if(rho<((Image1->Height>Image1->Width?Image1->Height:Image1->Width)*sqrt(float(2))) && rho>0)
									acc[theta,rho]++;
							}
						}
						if(pixel_temp>255)pixel_temp=255;
						p2[0]=(Byte)pixel_temp;
						p2[1]=(Byte)pixel_temp;
						p2[2]=(Byte)pixel_temp;
						pixel_temp=0;
						pixel_temp1=0;
						pixel_temp2=0;
					}else{
						p1+=(y*ImageData1->Stride+x*3);
						p2[0]=(Byte)p1[0];
						p2[1]=(Byte)p1[1];
						p2[2]=(Byte)p1[2];
					}
					index=0;
					p2+=3;
				}
				p2+=BytesOfSkip2;
			}
			
			//�]�w����
			p1 = (Byte*)((Void*)ptr1);
			p2 = (Byte*)((Void*)ptr2);
			p3 = (Byte*)((Void*)ptr3);

			for (int theta = 0; theta < 180; theta++) {
				for (int rho = 0; rho < (Image1->Height>Image1->Width?Image1->Height:Image1->Width)*2; rho++) {
					if (acc[theta,rho] >= numericUpDown1->Value) {//threshold
						for (int x = 0; x <Image2->Width; x++) {
							int y = Math::Round((rho - x * cos((M_PI / 180)*(theta - 90))) / sin((M_PI / 180)*(theta - 90)));
							if (y >= 0 && y < Image2->Height) {
								*(p3+(y*ImageData1->Stride)+(x*3))=0;
								*(p3+(y*ImageData1->Stride)+(x*3)+1)=0;
								*(p3+(y*ImageData1->Stride)+(x*3)+2)=255;
							}
						}
						
					}
				}
			}

			//Unlock�B�z�����������d��
			Image1->UnlockBits(ImageData1);
			Image2->UnlockBits(ImageData2);
			Image3->UnlockBits(ImageData3);
			//�N�v����ܦbpictureBox
			pictureBox1->Image = Image3;
			pictureBox3->Image = Image2;
			 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

