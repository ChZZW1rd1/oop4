#include <iostream>
#include "classes/Point.h"
#include "classes/Ring.h"
#include "classes/DoubleValidator.h"
#include "classes/Rectangle.h"
#include "classes/GeometricProgram.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    GeometricProgram::DemoRing();
    GeometricProgram::DemoRectangle();
}

