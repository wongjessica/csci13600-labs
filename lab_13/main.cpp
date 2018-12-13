#include <iostream>
#include "victor.hpp"

int main(){
	Victor<int> v(3, 100);
	std::cout << "v = Victor(3, 100):   ";
	printVictor(v);

	v.push_back(2);
	std::cout << "v.push_back(2):       ";
	printVictor(v);

	v[0] = 3;
	std::cout << "v[0] = 3:             ";
	printVictor(v);

	v[1] = 4;
	std::cout << "v[1] = 4:             ";
	printVictor(v);

	v[2] = 5;
	std::cout << "v[2] = 5:             ";
	printVictor(v);

	v.pop_back();
	std::cout << "v.pop_back():         ";
	printVictor(v);

	v.insert(1, 500);
	std::cout << "v.insert(1, 500):     ";
	printVictor(v);

	v.erase(2);
	std::cout << "v.erase(2):           ";
	printVictor(v);

	Victor<int> v2;
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	std::cout << "3 * v2.push_back(2):  ";
	printVictor(v2);

	v2.pop_back();
	std::cout << "v2.pop_back():        ";
	printVictor(v2);

	std::cout << "v2.at(1):             ";
	std::cout << v2.at(1) << std::endl;

	std::cout << "v2[1]:                ";
	std::cout << v2[1] << std::endl;

	std::cout << "v2[2]:                ";
	std::cout << v2[2] << std::endl;

	v2.resize(10);
	std::cout << "v2.resize(10)         ";
	printVictor(v2);

	v2.resize(8);
	std::cout << "v2.resize(8)          ";
	printVictor(v2);

	v2.resize(10, 2);
	std::cout << "v2.resize(10, 2)      ";
	printVictor(v2);

	return 0;
}
