#define _USE_MATH_DEFINES

#include <iostream>  

#include <vector>  
#include <map>  
#include <set>  
#include <iterator>  
#include <unordered_set>

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
#include <math.h>


#define endl '\n'  
#define forn(i, n) for (int i = 0; i < int(n); i++)  
#define all(v) v.begin(), v.end()  
#define rall(v) v.rbegin(), v.rend()  
#define sz(x) int(x.size())


#define vi vector<int>  


typedef long long ll;
typedef long double ld;

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

ll binpow(ll x, ll pow) {
    if (pow <= 0)
        return 1;
    else if (pow == 1)
        return x;
    else {
        ll y = binpow(x, pow / 2);
        if (pow % 2 == 0)
            return (y * y);
        else
            return (y * y * x);
    }
}
int couunt(ll a) {
    int cnt = 0;
    if (a <= 0) {
        return 0;
    }
    if (a == 1) {
        return 1;
    }
    while (a > 1) {
        cnt += a % 2;
        a = a / 2;
    }
    cnt++;
    return cnt;
}

void Solve() {
    ll r, l; cin >> l >> r;
    ll sum = 0;
    sum += ((couunt(r) == couunt(r + 1) || ((couunt(r) > couunt(r + 1) && (couunt(r) > couunt(r - 1))))) ? 1 : 0) + r - couunt(r);
    if (l != 1) {
        sum -= ((couunt(l - 1) == couunt(l) || ((couunt(l - 1) > couunt(l) && (couunt(l - 1) > couunt(l - 2))))) ? 1 : 0) + l - 1 - couunt(l - 1);
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cout << setprecision(20) << fixed;

    //stress();  

    int tt = 1;
    cin >> tt;
    while (tt--) {
        Solve();
    }
    return 0;
}
