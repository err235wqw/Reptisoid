#pragma once

namespace Lab4
{

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace std;


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
    bool fl = 1;


    mat3 T = mat3(1.f); // матрица, в которой накапливаются все преобразования
    // первоначально - единичная матрица
    mat3 initT; // матрица начального преобразования


    vector<path> figure;


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
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
    private: System::Windows::Forms::Button^ btnOpen;
    protected:

    protected:

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
            this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
            this->btnOpen = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // openFileDialog
            // 
            this->openFileDialog->DefaultExt = L"txt";
            this->openFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
            this->openFileDialog->Title = L"Открыть файл";
            // 
            // btnOpen
            // 
            this->btnOpen->Location = System::Drawing::Point(195, 30);
            this->btnOpen->Name = L"btnOpen";
            this->btnOpen->Size = System::Drawing::Size(75, 23);
            this->btnOpen->TabIndex = 0;
            this->btnOpen->Text = L"Открыть";
            this->btnOpen->UseVisualStyleBackColor = true;
            this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(282, 253);
            this->Controls->Add(this->btnOpen);
            this->KeyPreview = true;
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

        for (int i = 0; i < figure.size(); i++) {
            path lines = figure[i]; // lines - очередная ломаная линия
            Pen^ pen = gcnew Pen(Color::FromArgb(lines.color.x, lines.color.y, lines.color.z));
            pen->Width = lines.thickness;
            vec2 start = normalize(T * vec3(lines.vertices[0], 1.0)); // начальная точка первого отрезка
            for (int j = 1; j < lines.vertices.size(); j++) { // цикл по конечным точкам (от единицы)
                vec2 end = normalize(T * vec3(lines.vertices[j], 1.0)); // конечная точка
                g->DrawLine(pen, start.x, start.y, end.x, end.y); // отрисовка отрезка
                start = end; // конечная точка текущего отрезка становится начальной точкой следующего
            }
        }
    }


    private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        float Wcx = ClientRectangle.Width / 2.f; // координаты центра
        float Wcy = ClientRectangle.Height / 2.f; // текущего окна

        switch (e->KeyCode) {
        case Keys::Q:
            T = translate(-Wcx, -Wcy) * T; // перенос начала координат в (Wcx, Wcy)
            T = rotate(0.01f) * T; // поворот на 0.01 радиан относительно
            // нового центра
            T = translate(Wcx, Wcy) * T; // перенос начала координат обратно
            break;
        case Keys::W:
            T = translate(0.f, -1.f) * T; // сдвиг вверх на один пиксел
            break;
        case Keys::Escape:
            T = initT;
            break;
        case Keys::E:
            T = translate(-Wcx, -Wcy) * T; // перенос начала координат в (Wcx, Wcy)
            T = rotate(-0.01f) * T; // поворот на 0.01 радиан относительно
            T = translate(Wcx, Wcy) * T; // перенос начала координат обратно
            break;
        case Keys::A:
            T = translate(-1.f, 0.f) * T; // сдвиг вверх на один пиксел
            break;
        case Keys::S:
            T = translate(0.f, 1.f) * T; // сдвиг вверх на один пиксел
            break;
        case Keys::D:
            T = translate(1.f, 0.f) * T; // сдвиг вверх на один пиксел
            break;
        case Keys::Y:
            T = translate(-Wcx, -Wcy) * T; // перенос начала координат в (Wcx, Wcy)
            T = rotate(-0.05f) * T; // поворот на 0.01 радиан относительно
            T = translate(Wcx, Wcy) * T; // перенос начала координат обратно

            break;
        case Keys::R:
            T = translate(-Wcx, -Wcy) * T; // перенос начала координат в (Wcx, Wcy)
            T = rotate(0.05f) * T; // поворот на 0.01 радиан относительно
            T = translate(Wcx, Wcy) * T; // перенос начала координат обратно
            break;

        case Keys::T:
            T = translate(0.f, -10.f) * T; // сдвиг вверх на один пиксел
            break;
        case Keys::G:
            T = translate(0.f, 10.f) * T; // сдвиг вверх на один пиксел
            break;
        case Keys::F:
            T = translate(-10.f, 0.f) * T; // сдвиг вверх на один пиксел
            break;
        case Keys::H:
            T = translate(10.f, 0.f) * T; // сдвиг вверх на один пиксел
            break;
        case Keys::Z:
            T = (translate(-Wcx, -Wcy)) * T;
            T = scale(1.1) * T;
            T = (translate(Wcx, Wcy)) * T;
            break;
        case Keys::X:
            T = (translate(-Wcx, -Wcy)) * T;
            T = scale(1 / 1.1) * T;
            T = (translate(Wcx, Wcy)) * T;
            break;
        case Keys::J:

            T = (translate(-Wcx, -Wcy)) * T;
            T = mirrorY() * T;
            T = (translate(Wcx, Wcy)) * T;
            break;
        case Keys::U:
            T = (translate(-Wcx, -Wcy)) * T;
            T = mirrorX() * T;
            T = (translate(Wcx, Wcy)) * T;
            break;
        case Keys::I:
            T = (translate(-Wcx, -Wcy)) * T;
            T = scale(1.1, 1) * T;
            T = (translate(Wcx, Wcy)) * T;
            break;
        case Keys::K:
            T = (translate(-Wcx, -Wcy)) * T;
            T = scale(1 / 1.1, 1) * T;
            T = (translate(Wcx, Wcy)) * T;
            break;
        case Keys::O:
            T = (translate(-Wcx, -Wcy)) * T;
            T = scale(1, 1.1) * T;
            T = (translate(Wcx, Wcy)) * T;
            break;
        case Keys::L:
            T = (translate(-Wcx, -Wcy)) * T;
            T = scale(1, 1 / 1.1) * T;
            T = (translate(Wcx, Wcy)) * T;
            break;

        default:
            break;
        }
        Refresh();
    }

    private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
        Refresh();
    }
    private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) {
        if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            // в файловом диалоге нажата кновка OK
            // перезапись имени файла из openFileDialog->FileName в fileName
            wchar_t fileName[1024]; // переменная, в которой посимвольно сохраним имя файла
            for (int i = 0; i < openFileDialog->FileName->Length; i++)
                fileName[i] = openFileDialog->FileName[i];
            fileName[openFileDialog->FileName->Length] = '\0';
            // объявление и открытие файла
            ifstream in;
            in.open(fileName);
            if (in.is_open()) {
                // файл успешно открыт
                // файл успешно открыт
                figure.clear(); // очищаем имеющийся список ломаных
                // временные переменные для чтения из файла
                float thickness = 2; // толщина со значением по умолчанию 2
                float r, g, b; // составляющие цвета
                r = g = b = 0; // значение составляющих цвета по умолчанию (черный)
                string cmd; // строка для считывания имени команды
                // непосредственно работа с файлом
                string str; // строка, в которую считываем строки файла
                getline(in, str); // считываем из входного файла первую строку
                while (in) { // если очередная строка считана успешно
                    // обрабатываем строку
                    if ((str.find_first_not_of(" \t\r\n") != string::npos) && (str[0] != '#')) {
                        // прочитанная строка не пуста и не комментарий
                        stringstream s(str); // строковый поток из строки str
                        s >> cmd;
                        if (cmd == "frame") { // размеры изображения
                            s >> Vx >> Vy; // считываем глобальные значение Vx и Vy
                            aspectFig = Vx / Vy; // обновление соотношения сторон
                            float Wx = ClientRectangle.Width; // размер окна по горизонтали
                            float Wy = ClientRectangle.Height; // размер окна по вертикали
                            float aspectForm = Wx / Wy; // соотношение сторон окна рисования
                            // коэффициент увеличения при сохранении исходного соотношения сторон
                            float S = aspectFig < aspectForm ? Wy / Vy : Wx / Vx;
                            float Ty = S * Vy; // смещение в положительную сторону по оси Oy после смены знака
                            initT = translate(0.f, Ty) * scale(S, -S); // преобразования применяются справа налево
                            // сначала масштабирование, а потом перенос
                            // в initT совмещаем эти два преобразования

                            T = initT;
                        }
                        else if (cmd == "color") { // цвет линии
                            s >> r >> g >> b; // считываем три составляющие цвета
                        }
                        else if (cmd == "thickness") { // толщина линии
                            s >> thickness; // считываем значение толщины
                        }
                        else if (cmd == "path") { // набор точек
                            vector<vec2> vertices; // список точек ломаной
                            int N; // количество точек
                            s >> N;
                            string str1; // дополнительная строка для чтения из файла
                            while (N > 0) { // пока не все точки считали
                                getline(in, str1); // считываем в str1 из входного файла очередную строку
                                // так как файл корректный, то на конец файла проверять не нужно
                                if ((str1.find_first_not_of(" \t\r\n") != string::npos) && (str1[0] != '#')) {
                                    // прочитанная строка не пуста и не комментарий
                                        // значит в ней пара координат
                                    float x, y; // переменные для считывания
                                    stringstream s1(str1); // еще один строковый поток из строки str1
                                    s1 >> x >> y;
                                    vertices.push_back(vec2(x, y)); // добавляем точку в список
                                    N--; // уменьшаем счетчик после успешного считывания точки
                                }
                            }
                            // все точки считаны, генерируем ломаную (path) и кладем ее в список figure
                            figure.push_back(path(vertices, vec3(r, g, b), thickness));
                        }
                    }
                    // считываем очередную строку
                    getline(in, str);
                }
                Refresh();
            }
        }
    }
    };
}
