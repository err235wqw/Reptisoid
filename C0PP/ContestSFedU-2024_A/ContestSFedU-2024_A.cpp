
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

void Solve() {
	int n; cin >> n;
	vector<string> a(n);

	int hour = 0, min = 0;
	forn(i, n) {
		string a;
		cin >> a;
		hour += (a[0] - '0') * 10 + a[1] - '0';
		min += (a[3] - '0') * 10 + a[4] - '0';
		if (min >= 60) {
			hour += min / 60;
		}
		hour = hour % 12;
		min = min % 60;
	}
	if (hour < 10) {
		if (min < 10) {
			cout << '0' << hour << ':' << '0' << min;
		}
		else {
			cout << '0' << hour << ':' << min;
		}
	}
	else {
		if (min < 10) {
			cout << hour << ':' << '0' << min;
		}
		else {
			cout << hour << ':' << min;
		}
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

