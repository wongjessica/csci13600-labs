#include <iostream>

std::string redo1(int igr, std::string con) 
{
	std::string s = "";
	for (int i = 0; i < igr; i++) 
  {
		s += con;
	}
	return (s + "\n");
}

std::string redo2(int igr, std::string ast, std::string ris) 
{
	std::string s = "";
	for (int i = 0; i < igr; i++) 
  {
		if (i % 2 == 0) 
    {
			s += ast;
		}
		else 
    {
			s += ris;
		}
	}
	return (s + "\n");
}

std::string redo3(int igr, std::string ast, std::string ris) 
{
	std::string s = "";
	bool dest = true;
	for (int i = 0; i < igr; i++) 
  {
		if (dest) 
    {
			s += ast;
		}
		else 
    {
			s += ris;
		}
		if ((i + 1) % 3 == 0) 
    {
			dest = !dest;
		}
	}
	return (s + "\n");
}
