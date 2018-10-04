#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "upper.h"
#include "lower.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

int main() {
	std::cout << "\nTask A.Box\nInput width: 3\nInput height : 4\n\nShape:\n" << box(3, 4) << "\n";
	std::cout << "Input width: 5\nInput height: 8\n\nShape:\n" << box(5,8) << "\n";
	std::cout << "Task B.Checkerboard\nInput width: 18\nInput height : 9\n\nShape:\n" << checkerboard(18, 9) << "\n";
	std::cout << "Task C.Cross\nInput size: 5\n\nShape:\n" << cross(5) << "\n";
	std::cout << "Input size: 9\n\nShape:\n" << cross(9) << "\n";
	std::cout << "Task D.Lower Triangle\nInput side length: 9\n\nShape:\n" << lower_triangle(9) << "\n";
	std::cout << "Task E.Upper Triangle\nInput side length: 15\n\nShape:\n" << upper_triangle(15) << "\n";
	std::cout << "Task F.Trapezoid\nInput width: 7\nInput height : 5\n\nShape:\n" << trapezoid(7, 5) << "\n";
	std::cout << "Input width: 18\nInput height : 7\n\n" << trapezoid(18, 7) << "\n";
	std::cout << "Task G.Checkerboard(3x3)\nInput width: 9\nInput height : 4\n\nShape:\n" << checkerboard3x3(9,4) << "\n";
	std::cout << "Input width: 17\nInput height : 17\n\n" << checkerboard3x3(17,17);
	return 0;
}
