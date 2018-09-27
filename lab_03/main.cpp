
#include <iostream>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <string>
#include "east-storage.h"
#include "minmax.h"
#include "compare.h"
#include "reverse.h"

int main()
{
  string date;
  std::cout<< "Enter date in MM/DD/YYYY" << std::endl;
  std::cin >> date;
  double storage;
  storage = east_storage(date);
  std::cout << storage << " billion gallons" << std::endl;
  
  double minimum = min_storage(); 
  double maximum = max_storage();
  
  std::cout << "Minimum storage in east basin: " << minimum << " billion gallons" << std::endl;
  std::cout << "Maximum storage in east basin: " << maximum << " billion gallons" << std::endl;
  
  string fDate, sDate;
  string comp = compare(fDate, sDate);
  
  std::cout << fDate << comp << std::endl;
  
  
  
  return 0;
}
