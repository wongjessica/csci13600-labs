
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
  std::cout << "East basin storage: " << east_storage(date) << " billion gallons" << std::endl;
  
  //double minimum = min_storage(); 
  //double maximum = max_storage();
  
  std::cout << "Minimum storage in east basin: " << min_storage() << " billion gallons" << std::endl;
  std::cout << "Maximum storage in east basin: " << max_storage() << " billion gallons" << std::endl;
  
  string date1,date2;
  std::cout << "Enter starting date: " << std::endl;
  std::cin >> date1;    //allows user to input starting date
  std::cout << "Enter ending date: " << std::endl;
  std::cin >> date2;    //allows user to input ending date
  std::cout << compare(date1,date2) << std::endl;
  
  
  string date3,date4;
  std::cout << "Enter earlier date: " << std::endl;
  std::cin >> date3;    //allows user to input starting date
  std::cout << "Enter later date: " << std::endl;
  std::cin >> date4;    //allows user to input ending date
  std::cout << reverse(date3,date4) << std::endl;

  return 0;
}
