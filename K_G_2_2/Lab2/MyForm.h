#pragma once

namespace Lab2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// ������ ��� MyForm
    /// </summary>

    float lines[] = {
        /// ������
        1.0f,0.5f,0.0f,1.5f,
        0.0f,1.5f,0.0f,2.0f,
        0.0f,2.0f,0.5f,3.0f,
        0.5f,3.0f,1.0f,5.0f,
        1.0f,5.0f,0.5f,5.5f,
        0.5f,5.5f,1.0f,6.5f,
        1.0f,6.5f,1.5f,6.5f,
        1.5f,6.5f,2.0f,5.5f,
        2.0f,5.5f,1.5f,5.0f,
        1.5f,5.0f,1.0f,3.5f,
        1.0f,3.5f,1.5f,3.5f,
        1.5f,3.5f,2.0f,3.0f,
        2.0f,3.0f,2.5f,5.0f,
        2.5f,5.0f,2.0f,5.5f,
        2.0f,5.5f,2.5f,6.5f,
        2.5f,6.5f,3.0f,6.5f,
        3.0f,6.5f,3.5f,5.5f,
        3.5f,5.5f,3.0f,5.0f,
        3.0f,5.0f,2.5f,2.5f,
        2.5f,2.5f,3.0f,2.0f,
        ///���
        0.5f,1.5f,2.0f,1.5f,
        2.0f,1.5f,1.5f,1.0f,
        1.5f,1.0f,1.0f,1.0f,
        1.0f,1.0f,0.5f,1.5f,
        ///�������
        0.375f,1.375f,0.625f,1.625f,
        1.875f,1.625f,2.125f,1.375f,
        ///������� 1
        3.0f,2.0f,3.0f,2.5f,
        3.0f,2.5f,3.5f,3.0f,
        4.5f,2.5f,3.5f,3.0f,
        3.5f,3.0f,4.5f,6.5f,
        4.5f,6.5f,5.5f,7.5f,
        5.5f,7.5f,7.0f,8.0f,
        7.0f,8.0f,8.5f,8.0f,
        8.5f,8.0f,10.0f,7.5f,
        10.0f,7.5f,11.0f,6.5f,
        11.0f,6.5f,11.5f,5.0f,
        11.5f,5.0f,12.0f,4.5f,
        12.0f,4.5f,10.5f,3.0f,
        10.5f,3.0f,9.5f,2.0f,
        9.5f,2.0f,7.5f,1.5f,
        7.5f,1.5f,3.5f,2.5f,
        3.5f,2.5f,3.0f,2.0f,
        ///������� 2
        11.0f,6.5f,11.0f,4.5f,
        11.0f,4.5f,8.5f,2.0f,
        8.5f,2.0f,6.0f,2.0f,
        6.0f,2.0f,4.0f,3.5f,
        4.0f,3.5f,5.0f,6.0f,
        5.0f,6.0f,6.5f,7.5f,
        6.5f,7.5f,8.0f,7.5f,
        8.0f,7.5f,9.5f,6.0f,
        9.5f,6.0f,9.5f,5.0f,
        9.5f,5.0f,7.5f,3.0f,
        7.5f,3.0f,6.0f,3.0f,
        6.0f,3.0f,5.5f,4.0f,
        5.5f,4.0f,6.0f,5.5f,
        6.0f,5.5f,7.0f,6.5f,
        7.0f,6.5f,7.5f,6.5f,
        7.5f,6.5f,8.5f,5.5f,
        8.5f,5.5f,7.5f,4.5f,
        7.5f,4.5f,7.0f,4.5f,
        7.0f,4.5f,6.5f,5.0f,
        6.5f,5.0f,7.0f,5.5f,
        7.0f,5.5f,7.5f,5.5f,
        7.5f,5.5f,7.0f,5.0f,
        7.0f,5.0f,7.5f,5.0f,
        7.5f,5.0f,8.0f,5.5f,
        8.0f,5.5f,7.5f,6.0f,
        7.5f,6.0f,7.0f,6.0f,
        7.0f,6.0f,6.5f,5.5f,
        6.5f,5.5f,6.0f,4.0f,
        6.0f,4.0f,6.5f,3.5f,
        6.5f,3.5f,7.5f,3.5f,
        7.5f,3.5f,9.0f,5.0f,
        9.0f,5.0f,9.0f,6.0f,
        9.0f,6.0f,8.0f,7.0f,
        8.0f,7.0f,6.5f,7.0f,
        6.5f,7.0f,5.5f,6.0f,
        5.5f,6.0f,4.5f,3.5f,
        4.5f,3.5f,6.0f,2.5f,
        6.0f,2.5f,8.0f,2.5f,
        8.0f,2.5f,10.5f,5.0f,
        10.5f,5.0f,10.5f,6.5f,
        10.5f,6.5f,10.0f,7.0f,
        10.0f,7.0f,8.5f,8.0f,
        ///���
        10.5f,3.0f,14.0f,0.5f,
        14.0f,0.5f,12.0f,1.0f,
        12.0f,1.0f,11.0f,1.0f,
        11.0f,1.0f,10.0f,0.5f,
        10.0f,0.5f,9.0f,0.5f,
        9.0f,0.5f,8.0f,1.0f,
        8.0f,1.0f,6.5f,1.0f,
        6.5f,1.0f,5.5f,0.5f,
        5.5f,0.5f,1.0f,0.5f,
        ///������������������������������
        0.0f,2.0f,0.5f,2.5f,
        0.5f,2.5f,1.0f,2.0f,
        1.0f,2.0f,0.0f,2.0f,

        1.5f,2.0f,2.0f,2.5f,
        2.0f,2.5f,2.5f,2.0f,
        2.5f,2.0f,1.5f,2.0f,
        ///����� 2.0
        0.25f, 2.0f, 0.5f, 2.5f,
        0.5f, 2.5f, 0.75f, 2.0f,
        0.75f, 2.0f, 0.25f, 2.0f,

        1.75f, 2.0f, 2.0f, 2.5f,
        2.0f, 2.5f, 2.25f, 2.0f,
        2.25f, 2.0f, 1.75f, 2.0f,



    };


    float lines_2[] = {
        // ������
        0.5f,3.f,1.f,4.5f, // �� ����� ���� ����� �� ���
        1.f,4.5f,0.5f,6.f, // ����� ��� ����� ����� �����
        0.5f,6.f,0.5f, 7.5f, // ����� ��� �����
        0.5f, 7.5f,1.f,8.f, // ����� ��� ���� �����
        1.f,8.f,1.5f,8.f, // ����� ��� ���� ��������
        1.5f,8.f,2.f,7.5f, // ����� ��� ���� ������
        2.f,7.5f,1.5f, 6.f, // ����� ��� ������ ������ ����
        1.5f, 6.f,1.5f,4.5f, // ����� ��� ������ �� �������
        1.5f,4.5f,3.f,4.5f, // �������
        3.f,4.5f,3.f,6.f, // ������ ��� ����� ����� �����
        3.f,6.f,2.5f,7.5f, // ������ ��� �����
        2.5f,7.5f,3.f,8.f, // ������ ��� ���� �����
        3.f,8.f,3.5f,8.f, // ������ ��� ���� ��������
        3.5f,8.f,4.f,7.5f, // ������ ��� ���� ������
        4.f,7.5f,4.f,6.f, // ������ ��� ������ ����
        4.f,6.f,3.5f,4.5f, // ������ ��� ������
        3.5f,4.5f,4.f,3.f, // �� ������� ��� ���� �� ����
        4.f,3.f,3.5f,1.5f, // ������ �����
        3.5f,1.5f,2.5f,1.f, // ���������� ������
        2.5f,1.f,2.f,1.f, // ���������� �����
        2.f,1.f,1.f,1.5f, // ���������� �����
        1.f,1.5f,0.5f,3.f, // ����� �����
        // ��������
        4.f,3.f,5.5f,3.5f, // ����� �� ������ ������
        5.5f,3.5f,7.f,3.5f, // ����� ����
        7.f,3.5f,7.5f,2.5f, // ����� ������ �� ������
        7.5f,2.5f,8.f,2.5f, // ����� ������
        8.f,2.5f,8.f,2.f, // ����� ������
        8.f,2.f,7.5f,2.f, // ����� ��� ������ ������
        7.5f,2.f,7.5f,0.5f, // ������ ���� ������ ������ ����
        7.5f,0.5f,6.5f,0.5f, // ������ ���� ���
        6.5f,0.5f,6.5f,1.f, // ������ ���� �����
        6.5f,1.f,6.f,1.f, // ����� ������ ���
        6.f,1.f,6.f,0.5f, // ����� ������ ���� ������
        6.f,0.5f,5.f,0.5f, // ����� ������ ���� ���
        5.f,0.5f,5.f,1.f, // ����� ������ ���� �����
        5.f,1.f,4.f,1.f, // ����� ������� � ��������� ������
        4.f,1.f,4.f,0.5f, // ������ �������� ���� ������
        4.f,0.5f,3.f,0.5f, // ������ �������� ���� ���
        3.f,0.5f,3.f,1.f, // ������ �������� ���� �����
        3.f,1.f,2.5f,1.f, // ����� �������� ���
        2.5f,1.f,2.5f,0.5f, // �������� ���� ������
        2.5f,0.5f,1.5f,0.5f, // �������� ���� ���
        1.5f,0.5f,1.5f,1.25f, // �������� ���� �����
        // ����� ����
        1.5f,3.5f,1.5f,3.f, // ����� ���� ����� ������ ����
        1.5f,3.f,2.f,3.f, // ����� ���� ���
        2.f, 3.f,2.f,3.5f, // ����� ���� ������
        2.f,3.5f,1.5f,3.5f, // ����� ���� ����
        // ������ ����
        2.5f,3.5f,2.5f,3.f, // ������ ���� �����
        2.5f,3.f,3.f, 3.f, // ������ ���� �����
        3.f,3.f,3.f,3.5f, // ������ ���� ������
        3.f,3.5f,2.5f,3.5f, // ������ ���� ������
        // ����� ��������
        1.f,5.5f,1.f,7.f, // ����� ����� ��������
        3.5f,5.5f,3.5f,7.f, // ������ ����� ��������
        // ���
        2.f,2.5f,2.5f,2.5f, // ��� ������
        2.5f,2.5f,2.25f,2.f, // ��� ������
        2.25f,2.f,2.f,2.5f // ��� �����
    };


    unsigned int arrayLength_1 = sizeof(lines) / sizeof(float); // ����� �������
    unsigned int arrayLength_2 = sizeof(lines_2) / sizeof(float); // ����� �������
    float Vx = 15.0f; // ������ ������� �� �����������
    float Vy = 10.0f; // ������ ������� �� ���������
    float aspectFig = Vx / Vy; // ����������� ������ �������
    float Vx2 = 8.5f; // ������ ������� �� �����������
    float Vy2 = 8.5f; // ������ ������� �� ���������
    float aspectFig2 = Vx2 / Vy2; // ����������� ������ �������
    bool fl = 1;



    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: �������� ��� ������������
            //
        }

    protected:
        /// <summary>
        /// ���������� ��� ������������ �������.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        /// <summary>
        /// ������������ ���������� ������������.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// ��������� ����� ��� ��������� ������������ � �� ��������� 
        /// ���������� ����� ������ � ������� ��������� ����.
        /// </summary>
        void InitializeComponent(void)
        {
            this->SuspendLayout();
            /// 
            /// MyForm
            /// 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(282, 253);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
            this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
            this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: bool keepAspectRatio;

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        Graphics^ g = e->Graphics;
        g->Clear(Color::White);

        Pen^ blackPen = gcnew Pen(Color::Black, 2);

        float Wx = ClientRectangle.Width; /// ������ ���� �� �����������
        float Wy = ClientRectangle.Height; /// ������ ���� �� ���������
        float aspectForm = Wx / Wy; /// ����������� ������ ���� ���������
        float Sx;
        float Sy;
        if (keepAspectRatio) {
            /// ������������ ���������� ��� ���������� ��������� ����������� ������
            Sx = Sy = (fl) ? aspectFig < aspectForm ? Wy / Vy : Wx / Vx : aspectFig2 < aspectForm ? Wy / Vy2 : Wx / Vx2;
        }
        else {
            Sx = (fl) ? Wx / Vx : Wx / Vx2; /// ����������� ���������� �� ��� Ox
            Sy = (fl) ? Wy / Vy : Wy / Vy2; /// ����������� ���������� �� ��� Oy
        }
        int length_arr = (fl) ? arrayLength_1 : arrayLength_2;
        float* linins{ new float[4] }; ///������ �����
        linins = (fl) ? lines : lines_2;

        float Ty = (fl) ? Sy * Vy : Sy * Vy2; /// �������� � ������������� ������� �� ��� Oy ����� ����� �����
        for (int i = 0; i < length_arr; i += 4) {
            g->DrawLine(blackPen, Sx * linins[i], Ty - Sy * linins[i + 1], Sx * linins[i + 2], Ty - Sy * linins[i + 3]);
        }

    }

    private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        switch (e->KeyCode) {
        case Keys::N:
            fl = !fl;///����� �������
            break;
        case Keys::M:
            keepAspectRatio = !keepAspectRatio;//����� ������� �����������
            break;
        default:
            break;
        }
        Refresh();
    }

    private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
        Refresh();
    }
    };
}