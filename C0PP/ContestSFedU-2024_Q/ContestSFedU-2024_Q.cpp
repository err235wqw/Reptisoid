#include <iostream>  

#include <vector>  
#include <map>  
#include <set>  
#include <iterator>  
#include <string>
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

#define endl '\n'  
#define forn(i, n) for (int i = 0; i < int(n); i++)  
#define all(v) v.begin(), v.end()  
#define rall(v) v.rbegin(), v.rend()  


#define vi vector<int>  


typedef long long ll;

using namespace std;


void Solve() {
    int n; cin >> n;
    vector <pair<int, int>>a(n);
    unordered_set <int> s;
    forn(i, n) {
        cin >> a[i].first >> a[i].second; //first - z, second - y
    }
    int m; cin >> m;
    vector <vector<int>> treug(m, vi(3));
    forn(i, m) {
        cin >> treug[i][0] >> treug[i][1] >> treug[i][2];
        s.insert(treug[i][0]);
        s.insert(treug[i][1]);
        s.insert(treug[i][2]);
    }
    pair <int, int> ln = a[0], lv = a[1], rv = a[2], rn = a[3];
    if (s.size() != n) {//Если обошли не все точки Проверить!!!
        cout << "No" << endl;
        return;
    }
    bool fl = 1;
    for (int i = 0; i < m && fl; i++) {
        for (int j = 0; j < m && fl; j++) {
            for (int i1 = 0; i1 < 3 && fl; i1++) {
                for (int i2 = 0; i2 < 3 && fl; i2++) {
                    if (i != j) {
                        //i - первый треугольник
                        //j - второй треугольник
                        //i1 - номер пары точек в первом треугольнике
                        //i2 - номер пары точек во втором треугольнике
                        int num1_1 = treug[i][i1] - 1, num1_2 = treug[i][(i1 + 1) % 3] - 1;
                        int tr1x1 = a[num1_1].first, tr1y1 = a[num1_1].second, tr1x2 = a[num1_2].first, tr1y2 = a[num1_2].second;
                        int num2_1 = treug[j][i2] - 1, num2_2 = treug[j][(i2 + 1) % 3] - 1;
                        int tr2x1 = a[num2_1].first, tr2y1 = a[num2_1].second, tr2x2 = a[num2_2].first, tr2y2 = a[num2_2].second;
                        double k1, k2;
                        bool kk1 = 0, kk2 = 0;
                        if (tr1x2 - tr1x1 != 0) {
                            k1 = double((tr1y2 - tr1y1)) / double((tr1x2 - tr1x1));
                            kk1 = 1;
                        }
                        if (tr2x2 - tr2x1 != 0) {
                            k2 = double((tr2y2 - tr2y1)) / double((tr2x2 - tr2x1));
                            kk2 = 1;
                        }
                        double b1;
                        double b2;
                        if (kk1) {
                            b1 = tr1y1 - k1 * tr1x1;
                        }
                        if (kk2) {
                            b2 = tr2y1 - k2 * tr2x1;
                        }
                        double tchy;
                        double tchx;
                        if (kk1 && kk2) {
                            tchy = double((b1 * k2 - b2 * k1)) / double((k2 - k1));
                            tchx = double((b2 - b1)) / double((k1 - k2));
                            if ((tchy > min(tr1y1, tr1y2) && tchy < max(tr1y1, tr1y2)) && (tchy > min(tr2y1, tr2y2) && tchy < max(tr2y2, tr2y1)) && (tchx > min(tr1x1, tr1x2) && tchx < max(tr1x1, tr1x2)) && (tchx > min(tr2x1, tr2x2) && tchx < max(tr2x1, tr2x2))) {
                                fl = 0;
                            }
                        }
                        else {
                            if (kk1) {
                                tchy = tr2x1 * k1 + b1;
                                tchx = double((tchy - b1)) / k1;
                                if ((tchy > min(tr1y1, tr1y2) && tchy < max(tr1y1, tr1y2)) && (tchx > min(tr1x1, tr1x2) && tchx < max(tr1x1, tr1x2))) {
                                    fl = 0;
                                }
                            }
                            else if (kk2) {
                                tchy = tr1x1 * k2 + b2;
                                tchx = double((tchy - b2)) / k2;
                                if ((tchy > min(tr1y1, tr1y2) && tchy < max(tr1y1, tr1y2)) && (tchx > min(tr2x1, tr2x2) && tchx < max(tr2x1, tr2x2))) {
                                    fl = 0;
                                }
                            }
                            else {
                                if (tr1x1 == tr2x1) {
                                    if ((tr1y1 < max(tr2y1, tr2y2) && tr1y1 > min(tr2y2, tr2y1)) || (tr2y1 < max(tr1y1, tr1y2) && tr2y1 > min(tr1y1, tr1y2))) {
                                        fl = 0;
                                    }
                                }
                            }


                        }
                    }
                }
            }
        }
    }
    if (fl) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cout << setprecision(20) << fixed;

    int tt = 1;
    //cin >> tt;  
    while (tt--) {
        Solve();
    }
    return 0;
}