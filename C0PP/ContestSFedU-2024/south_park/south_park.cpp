#include <iostream>  

#include <vector>  
#include <map>  
#include <set>  
#include <iterator>  

#include <queue>  
#include <math.h>  
#include <algorithm>  
#include <numeric>  
#include <iomanip>  

#include <fstream>  
#include <istream>  
#include <ostream>  

#include <chrono>  
#include <time.h>  
#include <cassert>  
#include <random>  

#include <limits.h>  

#define endl '\n'  
#define forn(i, n) for (int i = 0; i < int(n); i++)  
#define all(v) v.begin(), v.end()  
#define rall(v) v.rbegin(), v.rend()  


#define vi vector<int>  


typedef long long ll;

using namespace std;

string a, b;

string naive() {

    return 0;
}

string solve() {
    string s1 = a, s2 = b;

    int n1 = s1.size(), n2 = s2.size();

    map<char, vi> m;

    forn(i, n1) {
        m[s1[i]].push_back(i);
    }

    bool ok = 1;

    for (auto& v : m) {
        if (v.second.size() > 1) {
            set<char> s;
            for (int i = 0; i < v.second.size(); i++) {
                s.insert(s2[v.second[i]]);
                if (s.size() > 1) {
                    ok = 0;
                    break;
                }
            }
        }
    }

    if (ok)
        return "YES";
    else
        return "NO";
}

mt19937 mt(time(0));

void stress() {
    int cnt = 0;
    while (true) {
        if (cnt++ % 100 == 0) {
            cout << "OK " << cnt << endl;
        }
        auto nRand = uniform_int_distribution<int>(1, 10);
        int n = nRand(mt);
        auto xRand = uniform_int_distribution<int>(0, 25);
        a.assign(n, 'a');
        b.assign(n, 'a');
        forn(i, n) {
            int x = xRand(mt);
            a[i] = ('a' + x);
        }
        forn(i, n) {
            int x = xRand(mt);
            b[i] = ('a' + x);
        }

        if (naive() != solve()) {
            cout << "Find " << n << endl;
            forn(i, n) {
                cout << a[i] << ' ';
            }
            cout << endl;
            cout << "solve = " << solve() << " naive = " << naive() << endl;
            cin.get();
        }
    }
}

template<typename T>
bool comp(vector<T>& v1, vector<T>& v2) {
    if (v1.size() == v2.size()) {
        return v1 < v2;
    }
    return v1.size() < v2.size();
}


ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

struct node {
    int i;
    node* nextleft;
    node* nextprav;
    node* prevleft;
    node* prevprav;
};

class tree {

    node* tail;

    node* insert(node* q) {   //вставка с указаетлем    { 
        node* r = new node; //создаем новый элемент        r->inf = p; 

        if (q == tail) { //если вставляем после хвоста 
            //r->nextleft = NULL; //вставляемый эл-т - последний            r->prev = q;    //вставляем после q 
            //q->nextprav = r;             
            //tail = r;       //теперь хвост - r 



        }
        else {                   //вставляем в середину списка 

        }

        return r;               //вернуть указатель 
    };


};

int sign(ll a) {
    if (a > 0) {
        return 1;
    }
    if (a == 0) {
        return 0;
    }
    if (a < 0) {
        return -1;
    }
}
void Solve() {
    ll n; cin >> n;
    ll sum = 0;
    forn(i, n) {
        ll x1, y1, x2, y2, a1, a2;
        cin >> x1 >> y1 >> x2 >> y2 >> a1 >> a2;//x1 - координата x первой точки, x2 -координата x второй точки, y1 - координата y первой точки, y2 - координата y второй точки
        //line 1; //Координаты вектора направления, отложенного от первой точки
        ll ln1x1 = x1, ln1x2 = x1 + a1, ln1y1 = y1, ln1y2 = y1 + a2;
        ll ln1signup = ln1y2 * ln1x1 - ln1y1 * ln1x2, ln1signdown = ln1x1 - ln1x2;//Значение b сверху и снизу (чтобы узнать знак б)
        //line 2; //Координаты вектора направления, отложенного от второй точки
        ll ln2x1 = x2, ln2x2 = x2 + a1, ln2y1 = y2, ln2y2 = y2 + a2;
        ll ln2signup = ln2y2 * ln2x1 - ln2y1 * ln2x2, ln2signdown = ln2x1 - ln2x2;//Значение b сверху и снизу (чтобы узнать знак б)
        bool insane = 1, maybe = 0;//insane = 0 - вектор направления перпендикулярен ox, maybe - либо векторн направления, отложенный от точек проходит через 0, или линии по разные стороны от 0
        if (ln1signdown == 0 || ln2signdown == 0) {//Если хоть один вектор перпендикулярен
            insane = 0;
        }
        else if (ln1signup == 0 || ln2signup == 0) {//Если хоть один проходит через 0
            maybe = 1;
        }
        else if ((((ln1signup > 0 && ln1signdown > 0) || (ln1signup < 0 && ln1signdown < 0)) /*Если от первойй точки выше чем 0*/ && ((ln2signup > 0 && ln2signdown < 0) || (ln2signup < 0 && ln2signdown > 0))/*И от второй точки - ниже 0*/) || (((ln2signup > 0 && ln2signdown > 0) || (ln2signup < 0 && ln2signdown < 0))/*Или второй - выше 0*/ && ((ln1signup > 0 && ln1signdown < 0) || (ln1signup < 0 && ln1signdown > 0))/*А первой - ниже 0*/)) {
            maybe = 1;// Тогда пусть maybe = 1
        }
        //chetverti
        ll ch1 = 0, ch2 = 0;//В какой четверти находится первая и вторая точка ПРОВЕРИТЬ!!!
        if (x1 >= 0 && y1 > 0) {
            ch1 = 1;//Если в первой, то включая оу
        }
        else if (x1 < 0 && y1 >= 0) {
            ch1 = 2;//Если во второй, то включая ох
        }
        else if (x1 <= 0 && y1 < 0) {
            ch1 = 3;//Если в третьей, то включая оу
        }
        else if (x1 > 0 && y1 <= 0) {
            ch1 = 4;//Если в четвертой, то включая ох
        }


        if (x2 >= 0 && y2 > 0) {
            ch2 = 1;
        }
        else if (x2 < 0 && y2 >= 0) {
            ch2 = 2;
        }
        else if (x2 <= 0 && y2 < 0) {
            ch2 = 3;
        }
        else if (x2 > 0 && y2 <= 0) {
            ch2 = 4;
        }//Аналогично для второй точки
        //b для отрезка 
        //Находим значение б в две переменных для самого отрезка
        ll signup = y2 * x1 - y1 * x2, signdown = x1 - x2;

        bool zer = 0, vish = 0, up = 0;//zer - отрезок стоит вертикально, vish - отрезок проходит через 0,0 при удлиннении в прямую, up - отрезок находится выше 0,0, при удлиннении
        if (signdown == 0) {
            zer = 1;//Если нижняя часть б == 0, то вертикально
        }
        else if (signup == 0) {
            vish = 1;//Если верхняя часть б == 0, то через 0,0
        }
        else if (((signup > 0 && signdown > 0) || (signup < 0 && signdown < 0))) {
            up = 1;//Если обе части положительные (выходит б - положительное), или обе - отрицательные - б - положительное, то надо 0,0, иначе ниже 0,0
        }
        bool cc = 0;//Отрезок пройдет через 0,0
        if (x1 == 0 && y1 == 0) {//Если одна точка отрезка это 0,0
            cc = 1;
        }
        if (x2 == 0 && y2 == 0) {//Если одна точка отрезка это 0,0
            cc = 1;
        }
        if (x1 == 0 && x2 == 0 && (max(y1, y2) >= 0 && min(y1, y2) <= 0)) {//Если отрезок находится на oу и при этом одна точка находится выше 0,0, а вторая - ниже
            cc = 1;
        }
        if (y1 == 0 && y2 == 0 && (max(x1, x2) >= 0 && min(x1, x2) <= 0)) {//Если отрезок находится на ox и при этом одна точка находится левее 0,0, а вторая - правее
            cc = 1;
        }
        if (insane && maybe) {//Если линии от отрезка не перпендикулярны ox и как либо проходят через 0,0
            if (ch1 == 1) {//Если первая точка в первой четверти
                if (ch2 == 1) {//Если вторая точка в первой четверти
                    if (a1 < 0) {//Если по x < 0
                        cc = 1;
                    }
                }
                else if (ch2 == 2) {//Если вторая точка во второй четверти
                    if (a2 < 0 || a1>0) {//Если по y < 0 или по x > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 3) {//Если вторая точка в третьей четверти
                    if (zer || vish) {//Если при этом отрезок вертикальный, или проходит схвозь 0,0
                        cc = 1;
                    }
                    if (up) {//Если отрезок проходит над 0,0
                        if (a1 > 0 || a2 < 0) {//Если по x > 0
                            cc = 1;
                        }
                    }
                    else {//Если отрезок проходит под 0,0
                        if (a1 < 0 || a2>0) {//Если по x < 0
                            cc = 1;
                        }
                    }
                }
                else if (ch2 == 4) {//Если вторая точка - в четвертой четверти
                    if (a1 < 0 || a2 < 0) {//Если по х < 0
                        cc = 1;
                    }
                }
            }
            if (ch1 == 2) {//Если первая точка во второй четверти
                if (ch2 == 1) {//Если вторая точка в первой четверти
                    if (a2 < 0 || a1>0) {//Если по у < 0
                        cc = 1;
                    }
                }
                else if (ch2 == 2) {//Если вторая точка во второй четверти
                    if (a1 > 0) {//или x > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 3) {//Если вторая точка в третьей четверти
                    if (a1 > 0 || a2 > 0) {//Если по х > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 4) {//Если вторая точка в четвертой четверти
                    if (vish) {//Если проходит скволь 0, 0 
                        cc = 1;
                    }
                    if (up) {//Если над 0,0
                        if (a1 < 0 || a2 < 0) {//Если по x < 0
                            cc = 1;
                        }
                    }
                    else {//Если под 0,0
                        if (a1 > 0 || a2 > 0) {//Если по x > 0
                            cc = 1;
                        }
                    }
                }
            }
            if (ch1 == 3) {//Если первая - в 3ей
                if (ch2 == 1) {// Вторая в первой
                    if (zer || vish) {//Если сквозь или вертикальный
                        cc = 1;
                    }
                    if (up) {//Если выше
                        if (a1 > 0 || a2 < 0) {//Только от х > 0
                            cc = 1;
                        }
                    }
                    else {
                        if (a1 < 0 || a2>0) {//Только от x < 0
                            cc = 1;
                        }
                    }
                }
                else if (ch2 == 2) {//Если вторая во второй
                    if (a1 > 0 || a2 > 0) {//От x > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 3) {//Если вторая в третьей
                    if (a2 > 0) {//От y > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 4) {//Если вторая в четвертой
                    if (a2 > 0 || a1 < 0) {//Только от y>0
                        cc = 1;
                    }
                }
            }

            if (ch1 == 4) {//Если первая в четвертой
                if (ch2 == 1) {//Если вторая в первой
                    if (a1 < 0 || a2 < 0) {//Только от x < 0
                        cc = 1;
                    }
                }
                else if (ch2 == 2) {//Вторая во второй
                    if (vish) {//Если сквозь 
                        cc = 1;
                    }
                    if (up) {// Если выше
                        if (a1 < 0 || a2 < 0) {//Только от x < 0
                            cc = 1;
                        }
                    }
                    else {//Если ниже
                        if (a1 > 0 || a2 > 0) {//Только от x > 0
                            cc = 1;
                        }
                    }
                }
                else if (ch2 == 3) {//Если вторая в третьей
                    if (a2 > 0 || a1 < 0) {//Только от y > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 4) {//Если вторая в четвертой
                    if (a1 < 0) {//Только от x < 0
                        cc = 1;
                    }
                }
            }
        }

        //Отдебажено



        if ((!insane) && ((x1 >= 0 && x2 <= 0) || (x2 >= 0 && x1 <= 0))) {//Если вектор направления перпендикулярен и точки находятся по разные стороны от оу
            if (ch1 == 1) {//Если первая в первой
                if (ch2 == 1) {//Если обе точки в первой (значит как минимум одна на оу) 
                    if (a2 < 0) {//Тогда зависит от у < 0
                        cc = 1;
                    }
                }
                if (ch2 == 2) {//Если вторая во второй
                    if (a2 < 0) {//От y < 0
                        cc = 1;
                    }
                }
                if (ch2 == 3) {//Если вторая в третьей
                    if (zer || vish) {//Если насквозь или прямая
                        cc = 1;
                    }
                    if (up) {//Если выше
                        if (a2 < 0) {// От у < 0
                            cc = 1;
                        }
                    }
                    else {// Если ниже
                        if (a2 > 0) {//От y > 0
                            cc = 1;
                        }
                    }
                }
                if (ch2 == 4) {//Если вторая в четвертой
                    if (a2 < 0) {// От у < 0
                        cc = 1;
                    }
                }
            }

            if (ch1 == 2) {//Если первая во второй
                if (ch2 == 1) {//Если вторая в первой
                    if (a2 < 0) {//От y < 0
                        cc = 1;
                    }
                }
                if (ch2 == 3) {//Если вторая в третьей
                    if (a2 > 0) {//От y > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 4) {//Если вторая в четвертой
                    if (vish) {//сквозь?
                        cc = 1;
                    }
                    if (up) {//Есди выше
                        if (a2 < 0) {//от y < 0
                            cc = 1;
                        }
                    }
                    else {//Если ниже
                        if (a2 > 0) {//от y > 0
                            cc = 1;
                        }
                    }
                }
            }

            if (ch1 == 3) {//Если первая в третьей
                if (ch2 == 4) {//Если вторая в 4ой
                    if (a2 > 0) {//от у > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 1) {//Если вторая в 1
                    if (zer || vish) {//Верт или сквозь
                        cc = 1;
                    }
                    if (up) {//Выше
                        if (a2 < 0) {//у < 0
                            cc = 1;
                        }
                    }
                    else {//Ниже
                        if (a2 > 0) {//y > 0
                            cc = 1;
                        }
                    }
                }
                if (ch2 == 3) {//Если в 3ей
                    if (a2 > 0) {//тогда y > 0
                        cc = 1;
                    }
                }
                if (ch2 == 2) {//Если во второй
                    if (a2 > 0) {//y > 0
                        cc = 1;
                    }
                }
            }

            if (ch1 == 4) {//Если в 4ой
                if (ch2 == 3) {//вторая в 3ей
                    if (a2 > 0) {//у > 0
                        cc = 1;
                    }
                }
                else if (ch2 == 2) {//Если вторая во 2ой
                    if (vish) {//Если сквозь
                        cc = 1;
                    }
                    if (up) {//Если выше
                        if (a2 < 0) {//y < 0
                            cc = 1;
                        }
                    }
                    else {//Ниже
                        if (a2 > 0) {//y > 0
                            cc = 1;
                        }
                    }
                }
                if (ch2 == 1) {//Вторая в 1ой
                    if (a2 < 0) {//y < 0
                        cc = 1;
                    }
                }
            }
        }
        if (cc) {
            sum++;
            //cout << "Go" << endl;
        }
        else {
            //cout << "Nope" << endl;
        }
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cout << setprecision(20) << fixed;

    //stress();  

    int tt = 1;
    //cin >> tt;  
    while (tt--) {
        Solve();
    }
    return 0;
}