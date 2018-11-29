#pragma once

std::string printRange(int left, int right){
	if (left == right)
		return std::to_string(left);	
	else if (left > right)
		return "";
	else
		return std::to_string(left) + " " + printRange(left + 1, right);
}

int sumRange(int left, int right){
	if (left == right)
		return left;
	if (left > right)
		return 0;
	return left + sumRange(left + 1, right);
}

int sumArray(int *arr, int size){
	if (size == 1)
		return arr[0];
	if (size == 0)
		return 0;
	return arr[size - 1] + sumArray(arr, size - 1);
}

bool isAlphanumeric(std::string s){
	if (s == "")
		return true;
	if (!isalnum(s[0]))
		return false;
	return isAlphanumeric(s.substr(1));
}

// returns true if the std::string is a sequence of nested parentheses
bool nestedParens(std::string s){
	if (s == "")
		return true;
	if (!(s[0] == '(' && s[s.length() - 1] == ')'))
		return false;
	return nestedParens(s.substr(1, s.length() - 2));
}

bool solvable(int *prices, int size, int alice, int bob){
	if (!size) return alice == bob;
	return solvable(prices, size - 1, alice + prices[size - 1], bob) || solvable(prices, size - 1, alice, bob + prices[size - 1]);
}

bool divisible(int *prices, int size){
	return solvable(prices, size, 0, 0);
}
