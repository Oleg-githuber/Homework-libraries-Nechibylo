#include "RectangularTriangle.h"        // ��אַ㣮��� ��㣮�쭨�

RectangularTriangle::RectangularTriangle() : RectangularTriangle{ 10, 20, 30, 50, 60 }
    {}

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) : Triangle{ "��אַ㣮��� ��㣮�쭨�", a, b, c, A, B, 90 }
    {}