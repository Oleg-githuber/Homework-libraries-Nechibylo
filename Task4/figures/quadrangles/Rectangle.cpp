#include "Rectangle.h"		// ��אַ㣮�쭨�

Rectangle::Rectangle() : Rectangle{ 10, 20 }
{}

Rectangle::Rectangle(int a, int b) : Quadrangle{ "��אַ㣮�쭨�", a, b, a, b, 90, 90, 90, 90 }
{}

Rectangle::Rectangle(std::string newName, int a, int b) : Quadrangle{ newName, a, b, a, b, 90, 90, 90, 90 }
{}
