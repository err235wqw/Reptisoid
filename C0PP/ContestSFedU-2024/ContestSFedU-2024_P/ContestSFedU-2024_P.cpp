//#define \USING_MATH_DEFINS
#define _use_math_defines 

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

struct node
{
    int i;
    node* nextlft;
    node* nextrt;
    node* prevlft;
    node* prevrt;
};

class list
{
public:
    node* head;
    node* ths, * left;
    int count = 0;


    list(int i) {
        node* r = new node;
        r->nextlft = NULL;
        r->nextrt = NULL;
        r->prevlft = NULL;
        r->prevrt = NULL;

        head = r;
        ths = head;
        left = r->nextlft;

        r->i = i;

        count++;
    }

    void insert(int p)   //вставка с указаетлем
    {
        node* r = new node; //создаем новый элемент
        r->i = p;

        r->nextlft = NULL; //вставляемый эл-т - последний
        r->nextrt = NULL;    //вставляем после q
        r->prevlft = NULL;
        r->prevrt = NULL;

        if (ths->nextlft == NULL)
        {
            ths->nextlft = r;
            r->prevrt = ths;
            left = r;
        }
        else if (ths->nextrt == NULL)
        {
            ths->nextrt = r;
            r->prevlft = ths;
            if (ths->prevrt != NULL)
            {
                ths = ths->prevrt;
                ths = ths->nextrt;
                ths->nextlft = r;
                r->prevrt = ths;
            }
            else
            {
                ths = left;
            }

        }

        //если вставляем после хвоста
            //r->next = NULL; //вставляемый эл-т - последний
            //r->prev = q;    //вставляем после q
            //q->next = r;
            //tail = r;       //теперь хвост - r

    }




    void show()   //вставка с указаетлем
    {
        node* curr = head;
        while (curr->nextrt != NULL)
        {
            cout << curr->i << endl;
            curr = curr->nextlft;
        }
    }

};

void tree_go(node* start)
{
    if (start->nextlft != NULL && start->nextrt != NULL)
    {

        if (start->nextlft->i < start->nextrt->i)
        {
            start->i = start->nextrt->i;
            tree_go(start->nextrt);
        }
        else
        {
            start->i = start->nextlft->i;
            tree_go(start->nextlft);
        }
    }
    else
    {
        if (start->nextlft != NULL)
        {
            start->i = start->nextlft->i;
            start->nextlft->i = -1;
        }
        else if (start->nextrt != NULL)
        {
            start->i = start->nextrt->i;
            start->nextrt->i = -1;
        }
        else
            start->i = -1;

    }
}




void Solve() {

    int r, n;

    cin >> r >> n;
    int count = n, all = n;
    n = n / 2 + 1;
    double summ = 0;
    double step = 1;


    if (all % 2 == 0)
        cout << acos(-1) * r * r * 0.5 << endl;
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            double h = step * (2.0 * r) / count, d = r - h;
            double teta = 2 * acos(d / r);
            double Shi1 = r * r * (teta - sin(teta)) * 0.5;

            double Shi2 = 0;
            if (step - 1 != 0)
            {
                h = (step - 1) * (2.0 * r) / count, d = r - h;
                teta = 2 * acos(d / r);
                Shi2 = r * r * (teta - sin(teta)) * 0.5;
            }
            summ += Shi1 - Shi2;
            //cout << Shi1 << " " << Shi2 << endl;
            step += 2;

        }


        count = count / 2;

        if ((all - 5) % 4 == 0)
        {
            double h = count * (2.0 * r) / all, d = r - h;
            double teta = 2 * acos(d / r);
            double Shi = r * r * (teta - sin(teta)) * 0.5;

            double S = acos(-1) * r * r * 0.5;
            summ += S - Shi;
        }
        cout << 2 * summ << endl;
    }


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