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
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
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
		/// 設計工具所需的變數。
		Bitmap^ Image1;
		Bitmap^ Image2;
		Bitmap^ Image3;
		//宣告圖像區域(設定為欲讀取、欲修正的圖像區域)
		System::Drawing::Rectangle rect1;
		System::Drawing::Rectangle rect2;
		System::Drawing::Rectangle rect3;
		//宣告為一BitmapData型態，表示像素值位置
		Imaging::BitmapData^ ImageData1;
		Imaging::BitmapData^ ImageData2;
		Imaging::BitmapData^ ImageData3;
		//宣告一int格式的指標
		IntPtr ptr1;
		IntPtr ptr2;
		IntPtr ptr3;
		//掃瞄寬度- Byte資料寬度
		int BytesOfSkip1;
		int BytesOfSkip2;
		int BytesOfSkip3;
		//宣告為寬度的像素資訊
		int ByteNumber_Width1;
		int ByteNumber_Width2;
		int ByteNumber_Width3;
		//宣告一個Byte格式的指標
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
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
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
				//new 一個 OpenFileDialog 物件
				OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
				//設定Filter，用以限定使用者開啟的檔案
				openFileDialog1->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
				//預設檔案名稱為空值
				openFileDialog1->FileName = "";
				//設定跳出選擇視窗的標題名稱
				openFileDialog1->Title = "載入影像";
				//設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
				openFileDialog1->FilterIndex = 2;
				//跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length>0){
					//將選取的檔案讀取並且存至Image1,2,3
					Image3 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
					//設定rect範圍大小
					rect3 = System::Drawing::Rectangle(0, 0, Image3->Width, Image3->Height);
					//像素值為b,g,r方式排列下去，所以寬度實際上有*3的數值大小
					//預設讀取3channel圖像
					ByteNumber_Width3 = Image3->Width * 3;
					//轉灰階
					Image1=gcnew Bitmap((int)(Image3->Width),(int)(Image3->Height));
					rect1=System::Drawing::Rectangle(0,0,Image1->Width,Image1->Height);
					ByteNumber_Width1=Image1->Width*3;
					ImageData1 = Image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
					ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
					//將int指標指向Image像素資料的最前面位置
					ptr1 = ImageData1->Scan0;
					ptr3 = ImageData3->Scan0;
					//掃瞄寬度- Byte資料寬度
					BytesOfSkip1 = ImageData1->Stride - ByteNumber_Width1;2;
					BytesOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
					//設定指標
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
					//顯示Image1於PictureBox1工具上
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
			//將int指標指向Image像素資料的最前面位置
			ptr1 = ImageData1->Scan0;
			ptr2 = ImageData2->Scan0;
			ptr3 = ImageData3->Scan0;
			//掃瞄寬度- Byte資料寬度
			BytesOfSkip1 = ImageData1->Stride - ByteNumber_Width1;
			BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
			BytesOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
			//設定指標
			p1 = (Byte*)((Void*)ptr1);
			p2 = (Byte*)((Void*)ptr2);
			p3 = (Byte*)((Void*)ptr3);
			//sobel
			//n
			int num=3;
			//中心向外blank個
			int blank=num/2;
			//n*n個
			int window_size=num*num;
			int index=0;
			//係數
			int set_rate;
			int *pixel=NULL;
			int pixel_temp,pixel_temp1,pixel_temp2;
			//acc[theta][rho]
			array<int,2>^ acc=gcnew array<int,2>(180,(Image1->Height>Image1->Width?Image1->Height:Image1->Width)*2);

			for (int y = 0; y<Image2->Height; y++){
				for (int x = 0; x<Image2->Width; x++){
					p1 = (Byte*)((Void*)ptr1);
					//避開邊緣
					if(x>blank && y>blank && x<(Image2->Width-blank) && y<(Image2->Height-blank)){
						pixel=new int[window_size];
						//取得窗格內像素 中心為原點
						for(int c=-blank;c<=blank;c++){
							for(int d=-blank;d<=blank;d++){
								pixel[index]=*(p1+((y+c)*ImageData1->Stride)+((x+d)*3));
								index++;
							}
						}

						for(int a=0;a<window_size;a++){
							//第一列中間為-2 其餘為-1 最後一列中間為2 其餘為1 剩餘為0
							if(a==num/2){set_rate=-2;}
							else if(a==window_size-num/2-1){set_rate=2;}
							else if(a<num){set_rate=-1;}
							else if(a>=window_size-num){set_rate=1;}
							else {set_rate=0;}
							pixel_temp1=pixel_temp1+pixel[a]*set_rate;
						}

						for(int a=0;a<window_size;a++){
							//第一行中間為-2 其餘為-1 最後一行中間為2 其餘為1 剩餘為0
							if(a==window_size/2-num/2){set_rate=-2;}
							else if(a==window_size/2+num/2){set_rate=2;}
							else if(a%num==0){set_rate=-1;}
							else if(a%num==(num-1)){set_rate=1;}
							else {set_rate=0;}
							pixel_temp2=pixel_temp2+pixel[a]*set_rate;
						}
						delete [] pixel;
						pixel_temp=pixel_temp1+pixel_temp2;
						//檢查是否>255或<0
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
			
			//設定指標
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

			//Unlock處理完畢的像素範圍
			Image1->UnlockBits(ImageData1);
			Image2->UnlockBits(ImageData2);
			Image3->UnlockBits(ImageData3);
			//將影像顯示在pictureBox
			pictureBox1->Image = Image3;
			pictureBox3->Image = Image2;
			 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

