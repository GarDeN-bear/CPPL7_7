#include <iostream>
#include <vector>
#include <set>
#include <list>

template<class T>
void print_container(T container);

int main() {
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container<std::set<std::string>>(test_set);
	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container<std::list<std::string>>(test_list);
	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container<std::vector<std::string>>(test_vector);

}

template<class T>
void print_container(T container) {
	for (const auto& it : container) {
		std::cout << it << " ";
	}
	std::cout << std::endl;
}