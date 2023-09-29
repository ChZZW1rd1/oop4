#pragma once
#include <cmath>
#include "Rectangle.h"
#include "Ring.h"
using namespace std;

static class CollisionManager {
public:
	static bool IsCollision(Rectangle& rectangle_1, Rectangle& rectangle_2) {
		double dxcenter = abs(rectangle_1.GetCentre()->GetCoordX() - rectangle_2.GetCentre()->GetCoordX());
		double dycenter = abs(rectangle_1.GetCentre()->GetCoordY() - rectangle_2.GetCentre()->GetCoordY());
		double dxlength = abs(rectangle_1.GetWight() - rectangle_2.GetWight());
		double dywidth = abs(rectangle_1.GetLenght() - rectangle_2.GetLenght());
		if (dxcenter < (dxlength/2) && dycenter < (dywidth/2)) {
			return true;
		}
		return false;
	}
	static bool IsCollision(Ring& ring_1, Ring& ring_2) {
		double dx = abs(ring_1.GetCenter()->GetCoordX() - ring_2.GetCenter()->GetCoordX());
		double dy = abs(ring_1.GetCenter()->GetCoordY() - ring_2.GetCenter()->GetCoordY());
		double C = sqrt(pow(dx, 2) + pow(dy, 2));
		if (C < (ring_1.GetExRadius() + ring_2.GetExRadius())) {
			return true;
		}
		return false;
	}
};