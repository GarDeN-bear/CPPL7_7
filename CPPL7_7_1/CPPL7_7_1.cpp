#include <iostream>
#include <vector>
//#include <set>
#include <algorithm>

int main() {
	std::vector<int> v{ 1, 1, 2, 5, 6, 1, 2, 4 };
	std::cout << "[IN]: ";
	for (const auto& vi : v) {
		std::cout << vi << " ";
	}
	std::cout << std::endl;
	std::cout << "[OUT]: ";
	std::sort(v.begin(), v.end());
	auto vi = std::unique(v.begin(), v.end());
	v.erase(vi, v.end());
	for (const auto& vi : v) {
		std::cout << vi << " ";
	}

	// —делал через сет ещЄ
	//std::set<int> s;
	//for (const auto& vi : v) {
	//	s.insert(vi);
	//}
	//for (const auto& si : s) {
	//	std::cout << si << " ";
	//}
}