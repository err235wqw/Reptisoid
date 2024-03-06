//Made by Optoed.
//All rights reserved © 

#include <iostream>   

#include <map>

#include <set>
#include <vector>
#include <string>

#include <iterator>

#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

#include <limits.h>

#include <time.h>
#include <random>

#include <iomanip>
#include <fstream>
#include <istream>
#include <ostream>

#include <cassert>
#include <complex>
#include <chrono>

using namespace std;

#define endl '\n'
#define see(x) cout << (#x) << " = " << x << endl;
#define sz(x) int(x.size())
#define forn(i, n) for(int i = 0; i < int(n); ++i)

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define vi vector<int>     

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const ld PI = acos(-1.0);
const int MOD = 998244353;

template <class T> istream& operator >> (istream& in, vector<T>& v) {
    for (int i = 0; i < v.size(); i++)
        in >> v[i];
    return in;
}

mt19937 mt(time(0));
using randint = uniform_int_distribution<int>;
using randll = uniform_int_distribution<ll>;
using randld = uniform_real_distribution<ld>;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

//ifstream in("C:\\Users\\Пётр\\Desktop\\input.txt");     //Файлы, поменяй содержимое в скобках
//ofstream out("C:\\Users\\Пётр\\Desktop\\output.txt");

ll binpowMOD(ll x, ll pow) {    //Быстрое возведение в степень по модулю MOD
    if (pow <= 0)
        return 1;
    else if (pow == 1)
        return x;
    else {
        ll y = binpowMOD(x, pow / 2);
        if (pow % 2 == 0)
            return (y * y);
        else
            return (((y * y) % MOD) * x) % MOD;
    }
}

ll binpow(ll x, ll pow) {    //Быстрое возведение в степень по модулю MOD
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

ll gcd(ll a, ll b) {   //НОД
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {  //НОК
    return a / gcd(a, b) * b;
}

int add(int a, int b) {
    a += b;
    if (a < 0) a += MOD;
    else if (a >= MOD) a -= MOD;
    return a;
}

int sub(int a, int b) {
    return (MOD + a - b) % MOD;
}

ll mul(ll a, ll b) {
    return (a * 1ll * b) % MOD;
}

//////////////////////////////////////////////////////////////////////////////////

// Это мужики для stress
// 
int n;
vector<int> a;

void read() {
    cin >> n;
    a.assign(n, 0);
    forn(i, n) {
        cin >> a[i];
    }
}

int naive() {

    return 0;
}

int solve() {

    return 0;
}

void stress() {
    int cnt = 0;
    while (true) {
        if (cnt++ % 100 == 0) {
            cout << "Ok " << cnt << endl;
        }
        auto nRandom = uniform_int_distribution<int>(1, 5);
        n = nRandom(rng);
        auto mRandom = uniform_int_distribution<int>(1, n);
        a.assign(n, 0);
        forn(i, n) {
            a[i] = mRandom(rng);
        }
        if (naive() != solve()) {
            auto s = solve();
            auto f = naive();
            cout << "Find\n";
            cout << "n " << n << endl;
            forn(i, n) {
                cout << a[i] << ' ';
            }
            cout << endl << "solve = " << s << "; naive = " << f << endl;
            cin.get();
            //solve(); //naive();
        }
    }
}

void VoidSolve() {

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cout << setprecision(20) << fixed;

    //stress();
    //stres();

    int tt = 1;
    cin >> tt;
    while (tt--) {
        //read();

        VoidSolve();

        //cout << naive() << endl;
        //cout << solve() << endl;
    }
    return 0;
}