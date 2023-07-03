#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	auto sum = int{ 0 };
	for (const auto& x : s) {
		sum += x - '0';
	}

	if (0 != sum % 3) {
		cout << -1;
		return 0;
	}

	sort(s.rbegin(), s.rend());

	if ('0' != s.back()) {
		cout << -1;
		return 0;
	}

	cout << s;

	return 0;
}