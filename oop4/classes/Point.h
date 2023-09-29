#pragma once
#include <iostream>
#include "DoubleValidator.h"
using namespace std;

class Point {
private:
	double _coordX;
	double _coordY;

	void SetCoordX(double coordX) {
		this->_coordX = coordX;
	}

	void SetCoordY(double coordY) {
		this->_coordY = coordY;
	}

public:

	double GetCoordX() {
		return this->_coordX;
	}

	double GetCoordY() {
		return this->_coordY;
	}

	Point(double coordX = 0, double coordY = 0) {
		SetCoordX(coordX);
		SetCoordY(coordY);
	}

};