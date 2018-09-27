
#include <iostream>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <string>
#include "east-storage.h"

int main()
{
  string date;
  std::cout<< "Enter date in MM/DD/YYYY" << std::endl;
  std::cin >> date;
  double storage;
  storage = east_storage(date);
  std::cout << storage << " billion gallons" << std::endl;
  
  
  return 0;
}
