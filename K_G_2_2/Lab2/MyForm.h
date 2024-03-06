#pragma once

namespace Lab2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для MyForm
    /// </summary>

    float lines[] = {
        /// голова
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
        ///РОТ
        0.5f,1.5f,2.0f,1.5f,
        2.0f,1.5f,1.5f,1.0f,
        1.5f,1.0f,1.0f,1.0f,
        1.0f,1.0f,0.5f,1.5f,
        ///МОРЩИНЫ
        0.375f,1.375f,0.625f,1.625f,
        1.875f,1.625f,2.125f,1.375f,
        ///Ракушка 1
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
        ///Ракушка 2
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
        ///ДНО
        10.5f,3.0f,14.0f,0.5f,
        14.0f,0.5f,12.0f,1.0f,
        12.0f,1.0f,11.0f,1.0f,
        11.0f,1.0f,10.0f,0.5f,
        10.0f,0.5f,9.0f,0.5f,
        9.0f,0.5f,8.0f,1.0f,
        8.0f,1.0f,6.5f,1.0f,
        6.5f,1.0f,5.5f,0.5f,
        5.5f,0.5f,1.0f,0.5f,
        ///ГЛАЗАААААААААААААААААААААААААА
        0.0f,2.0f,0.5f,2.5f,
        0.5f,2.5f,1.0f,2.0f,
        1.0f,2.0f,0.0f,2.0f,

        1.5f,2.0f,2.0f,2.5f,
        2.0f,2.5f,2.5f,2.0f,
        2.5f,2.0f,1.5f,2.0f,
        ///Глаза 2.0
        0.25f, 2.0f, 0.5f, 2.5f,
        0.5f, 2.5f, 0.75f, 2.0f,
        0.75f, 2.0f, 0.25f, 2.0f,

        1.75f, 2.0f, 2.0f, 2.5f,
        2.0f, 2.5f, 2.25f, 2.0f,
        2.25f, 2.0f, 1.75f, 2.0f,



    };


    float lines_2[] = {
        // голова
        0.5f,3.f,1.f,4.5f, // от левой щеки вверх до уха
        1.f,4.5f,0.5f,6.f, // левое ухо слева снизу вверх
        0.5f,6.f,0.5f, 7.5f, // левое ухо слева
        0.5f, 7.5f,1.f,8.f, // левое ухо верх слева
        1.f,8.f,1.5f,8.f, // левое ухо верх середина
        1.5f,8.f,2.f,7.5f, // левое ухо верх справа
        2.f,7.5f,1.5f, 6.f, // левое ухо справа сверху вниз
        1.5f, 6.f,1.5f,4.5f, // левое ухо справа до макушки
        1.5f,4.5f,3.f,4.5f, // макушка
        3.f,4.5f,3.f,6.f, // правое ухо слева снизу вверх
        3.f,6.f,2.5f,7.5f, // правое ухо слева
        2.5f,7.5f,3.f,8.f, // правое ухо верх слева
        3.f,8.f,3.5f,8.f, // правое ухо верх середина
        3.5f,8.f,4.f,7.5f, // правое ухо верх справа
        4.f,7.5f,4.f,6.f, // правое ухо сверху вниз
        4.f,6.f,3.5f,4.5f, // правое ухо справа
        3.5f,4.5f,4.f,3.f, // от правого уха вниз до щеки
        4.f,3.f,3.5f,1.5f, // правая скула
        3.5f,1.5f,2.5f,1.f, // подбородок справа
        2.5f,1.f,2.f,1.f, // подбородок снизу
        2.f,1.f,1.f,1.5f, // подбородок слева
        1.f,1.5f,0.5f,3.f, // левая скула
        // туловище
        4.f,3.f,5.5f,3.5f, // спина от головы вправо
        5.5f,3.5f,7.f,3.5f, // спина верх
        7.f,3.5f,7.5f,2.5f, // спина сверху до хвоста
        7.5f,2.5f,8.f,2.5f, // хвост сверху
        8.f,2.5f,8.f,2.f, // хвост справа
        8.f,2.f,7.5f,2.f, // хвост низ справа налево
        7.5f,2.f,7.5f,0.5f, // задняя нога справа сверху вниз
        7.5f,0.5f,6.5f,0.5f, // задняя нога низ
        6.5f,0.5f,6.5f,1.f, // задняя нога слева
        6.5f,1.f,6.f,1.f, // между задних ног
        6.f,1.f,6.f,0.5f, // левая задняя нога справа
        6.f,0.5f,5.f,0.5f, // левая задняя нога низ
        5.f,0.5f,5.f,1.f, // левая задняя нога слева
        5.f,1.f,4.f,1.f, // между задними и передними ногами
        4.f,1.f,4.f,0.5f, // правая передняя нога справа
        4.f,0.5f,3.f,0.5f, // правая передняя нога низ
        3.f,0.5f,3.f,1.f, // правая передняя нога слева
        3.f,1.f,2.5f,1.f, // между передних ног
        2.5f,1.f,2.5f,0.5f, // передняя нога справа
        2.5f,0.5f,1.5f,0.5f, // передняя нога низ
        1.5f,0.5f,1.5f,1.25f, // передняя нога слева
        // левый глаз
        1.5f,3.5f,1.5f,3.f, // левый глаз слева сверху вниз
        1.5f,3.f,2.f,3.f, // левый глаз низ
        2.f, 3.f,2.f,3.5f, // левый глаз справа
        2.f,3.5f,1.5f,3.5f, // левый глаз верх
        // правый глаз
        2.5f,3.5f,2.5f,3.f, // правый глаз слева
        2.5f,3.f,3.f, 3.f, // правый глаз снизу
        3.f,3.f,3.f,3.5f, // правый глаз справа
        3.f,3.5f,2.5f,3.5f, // правый глаз сверху
        // ушные раковины
        1.f,5.5f,1.f,7.f, // левая ушная раковина
        3.5f,5.5f,3.5f,7.f, // правая ушная раковина
        // нос
        2.f,2.5f,2.5f,2.5f, // нос сверху
        2.5f,2.5f,2.25f,2.f, // нос справа
        2.25f,2.f,2.f,2.5f // нос слева
    };


    unsigned int arrayLength_1 = sizeof(lines) / sizeof(float); // длина массива
    unsigned int arrayLength_2 = sizeof(lines_2) / sizeof(float); // длина массива
    float Vx = 15.0f; // размер рисунка по горизонтали
    float Vy = 10.0f; // размер рисунка по вертикали
    float aspectFig = Vx / Vy; // соотношение сторон рисунка
    float Vx2 = 8.5f; // размер рисунка по горизонтали
    float Vy2 = 8.5f; // размер рисунка по вертикали
    float aspectFig2 = Vx2 / Vy2; // соотношение сторон рисунка
    bool fl = 1;



    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
        }

    protected:
        /// <summary>
        /// Освободить все используемые ресурсы.
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
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
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

        float Wx = ClientRectangle.Width; /// размер окна по горизонтали
        float Wy = ClientRectangle.Height; /// размер окна по вертикали
        float aspectForm = Wx / Wy; /// соотношение сторон окна рисования
        float Sx;
        float Sy;
        if (keepAspectRatio) {
            /// коэффициенты увеличения при сохранении исходного соотношения сторон
            Sx = Sy = (fl) ? aspectFig < aspectForm ? Wy / Vy : Wx / Vx : aspectFig2 < aspectForm ? Wy / Vy2 : Wx / Vx2;
        }
        else {
            Sx = (fl) ? Wx / Vx : Wx / Vx2; /// коэффициент увеличения по оси Ox
            Sy = (fl) ? Wy / Vy : Wy / Vy2; /// коэффициент увеличения по оси Oy
        }
        int length_arr = (fl) ? arrayLength_1 : arrayLength_2;
        float* linins{ new float[4] }; ///Массив точек
        linins = (fl) ? lines : lines_2;

        float Ty = (fl) ? Sy * Vy : Sy * Vy2; /// смещение в положительную сторону по оси Oy после смены знака
        for (int i = 0; i < length_arr; i += 4) {
            g->DrawLine(blackPen, Sx * linins[i], Ty - Sy * linins[i + 1], Sx * linins[i + 2], Ty - Sy * linins[i + 3]);
        }

    }

    private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        switch (e->KeyCode) {
        case Keys::N:
            fl = !fl;///Смена рисунка
            break;
        case Keys::M:
            keepAspectRatio = !keepAspectRatio;//Смена формата соотношения
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