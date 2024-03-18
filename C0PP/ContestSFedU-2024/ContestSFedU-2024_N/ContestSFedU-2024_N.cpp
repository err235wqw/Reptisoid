#include <iostream>  

#include <vector>  
#include <map>  
#include <set>  
#include <iterator>  
#include <string>

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

void Solve() {
    ll n;
    ll cnt = 1; ll umn = 1, cur = 0, umn2 = 1;
    char q;
    cin >> n >> q;
    ll temp = n;
    ll temp2 = temp;
    while (temp > 0) {
        cur += cnt * umn * 9;
        temp2 = temp;
        temp -= cnt * umn * 9;
        cnt++;
        umn *= 10;
        umn2 *= 10;
        umn2 += 1;
    }
    ll num = (9 * umn2 / 100) + (temp2 + cnt - 2) / (cnt - 1);
    string s = to_string(num);
    string s1 = "";
    ll pos = (temp2 - 1) % (cnt - 1);
    for (ll i = pos + 1; i < s.length(); i++) {
        s1 += s[i];
    }
    if (s[pos] == q) {
        cout << '0' << endl;
        return;
    }
    else {
        for (ll i = num + 1; i < num + 11; i++) {
            s1 += to_string(i);
        }
        ll cc = s1.find(q) + 1;
        ll cntz = 1; ll umnz = 1, curz = 0, umn2z = 1;
        ll tempz = n + cc;
        ll temp2z = tempz;
        while (tempz > 0) {
            curz += cntz * umnz * 9;
            temp2z = tempz;
            tempz -= cntz * umnz * 9;
            cntz++;
            umnz *= 10;
            umn2z *= 10;
            umn2z += 1;
        }
        ll numz = (9 * umn2z / 100) + (temp2z + cntz - 2) / (cntz - 1);
        ll posz = (temp2z - 1) % (cntz - 1);
        ll col_max = numz - (umnz / 10);
        for (ll i = 0; i < col_max; i++) {
            cc -= (cntz - 1);
            if (cc <= 0) {
                cout << i + 1 << endl;
                return;
            }
        }
        while (cc > 0) {
            col_max++;
            cc -= (cntz - 2);

        }
        cout << col_max << endl;

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