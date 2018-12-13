#include <iostream>
#include "victor.hpp"

int main(){
	Victor<int> v(4, 75);
	std::cout << "v = Victor(4, 75):   ";
	printVictor(v);

	v.push_back(6);
	std::cout << "v.push_back(6):       ";
	printVictor(v);

	v[0] = 5;
	std::cout << "v[0] = 5:             ";
	printVictor(v);

	v[1] = 7;
	std::cout << "v[1] = 7:             ";
	printVictor(v);

	v[2] = 11;
	std::cout << "v[2] = 11:             ";
	printVictor(v);

	v.pop_back();
	std::cout << "v.pop_back():         ";
	printVictor(v);

	v.insert(5, 200);
	std::cout << "v.insert(5, 200):     ";
	printVictor(v);

	v.erase(5);
	std::cout << "v.erase(5):           ";
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

	v2.resize(4);
	std::cout << "v2.resize(4)         ";
	printVictor(v2);

	v2.resize(9);
	std::cout << "v2.resize(9)          ";
	printVictor(v2);

	v2.resize(7, 1);
	std::cout << "v2.resize(7, 1)      ";
	printVictor(v2);

	return 0;
}
