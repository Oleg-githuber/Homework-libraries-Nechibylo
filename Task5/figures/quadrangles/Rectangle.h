#pragma once

#include "Quadrangle.h"

// �������������
class FIGURES_API Rectangle : public Quadrangle
{
protected:

    Rectangle(std::string newName, int a, int b);

public:

    Rectangle();

    Rectangle(int a, int b);
};

