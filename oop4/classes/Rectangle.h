#pragma once
#include "Point.h"
using namespace std;

class Rectangle {
private:
	double _lenght;
	double _width;
	Point _centre;

	void SetLenght(double lenght) {
		DoubleValidator::IsValuePositive(lenght);
		this->_lenght = lenght;
	}

	void SetWidth(double width) {
		DoubleValidator::IsValuePositive(width);
		this->_width = width;
	}

	void SetCentre(double coordX, double coordY) {
		_centre = Point(coordX, coordY);
	}

public:
	Point* GetCentre() {
		return &_centre;
	}

	double GetLenght() {
		return this->_lenght;
	}

	double GetWight() {
		return this->_width;
	}

	Rectangle(double lenght, double width, double coordX, double CoordY) {
		this->SetLenght(lenght);
		this->SetWidth(width);
		this->SetCentre(coordX, CoordY);
	}

	Rectangle() {
		this->SetLenght(0.0);
		this->SetWidth(0.0);
		this->SetCentre(0, 0);
	}

	void WriteRectangleToConsole() {
		cout << "X=" << this->GetCentre()->GetCoordX() << "; Y=" << this->GetCentre()->GetCoordY() << "; Lenght=";
		cout << this->GetLenght() << "; Width=" << this->GetWight() << ";";
	}

};