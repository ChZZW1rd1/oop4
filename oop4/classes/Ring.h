#pragma once
#include "Point.h"
#include "DoubleValidator.h"
using namespace std;

class Ring {
private:

	static int AllRingsCount;

	const double Pi = 3.14;
	Point* center;
	double externalRadius; // Внешний радиус
	double interiorRadius; // Внутренний радиус

	void SetCenter(double x, double y) {
		Point point = Point(x, y);
		this->center = &point;
	}

	void SetRadius(double er, double ir) {
		DoubleValidator::IsValuePositive(er);
		DoubleValidator::IsValuePositive(ir);
		DoubleValidator::CheckValues(ir, er);
		this->interiorRadius = ir;
		this->externalRadius = er;
	}

public:

	Point* GetCenter() {
		return this->center;
	}
	double GetExRadius() {
		return this->externalRadius;
	}
	double GetInRadius() {
		return this->interiorRadius;
	}

	static int GetAllRingsCount() {
		return AllRingsCount;
	}

	Ring(double er = 2.0, double ir = 1.0, double x = 0.0, double y = 0.0) {
		this->SetRadius(er, ir);
		this->SetCenter(x, y);
		AllRingsCount++;
	}

	~Ring() {
		AllRingsCount--;
	}

	double GetArea() {
		double exr = GetExRadius();
		double inr = GetInRadius();
		//double area = Pi * (exr*exr - inr*inr);
		return (Pi * (exr * exr - inr * inr));
	}
};

int Ring::AllRingsCount = 0;

