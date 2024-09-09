#pragma once


#define FIGURES_EXPORTS

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

#include <string>

// Базовый класс
class FIGURES_API Figure
{
private:

    std::string name{};
    int sidesCount{};
    int sides[4] = {};
    int angles[4] = {};

protected:

    Figure(int value, std::string str);

    void setSides(int* array);

    void setAngles(int* array);

public:

    Figure();

    std::string getName();

    int getSidesCount();

    int* getSides();

    int* getAngles();
};

