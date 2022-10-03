#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	constexpr auto mx = int{ 123456789 };

	int n, p;
	cin >> n >> p;

	auto p1 = mx;
	if (20 <= n) {
		p1 = p * 0.75;
	}

	auto p2 = mx;
	if (15 <= n) {
		p2 = p - 2000;
		if (p2 < 0) {
			p2 = 0;
		}
	}

	auto p3 = mx;
	if (10 <= n) {
		p3 = p * 0.9;
	}

	auto p4 = mx;
	if (5 <= n) {
		p4 = p - 500;
		if (p4 < 0) {
			p4 = 0;
		}
	}

	auto ps = vector<int>{ p,p1,p2,p3,p4 };
	auto pmn = min_element(ps.begin(), ps.end());

	cout << *pmn;

	return 0;
}