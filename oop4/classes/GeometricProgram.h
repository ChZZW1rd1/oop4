#pragma once
#include "CollisionManager.h"
#include "DoubleValidator.h"
#include "Rectangle.h"
#include "Ring.h"
#include "Point.h"

using namespace std;

static class GeometricProgram {
public:
    static void DemoRing() {
        cout << "Количество колец до вызова конструктора: " << Ring::GetAllRingsCount() << endl;
        Ring* ring_1 = new Ring(2, 1, 0, 0);
        Ring* ring_2 = new Ring(3, 0, 1, -1);
        Ring* ring_3 = new Ring(4, 2, 2, 2);
        cout << "Количество колец после вызова конструктора: " << Ring::GetAllRingsCount() << endl;
        delete ring_3;
        cout << "Количество колец после вызова одного деструктора: " << Ring::GetAllRingsCount() << endl;
        if (CollisionManager::IsCollision(*ring_1, *ring_2)) {
            cout << "Не пересекаются" << endl;
        }
        else {
            cout << "Пересекаются" << endl;
        }
    }

    static void DemoRectangle() {
        Rectangle rect_1 = Rectangle(10, 5, -4, 2);
        Rectangle rect_2 = Rectangle(10, 5, 4, 2);
        cout << "Прямоугольники: " << endl;
        if (CollisionManager::IsCollision(rect_1, rect_2)) {
            cout << "Не пересекаются";
        }
        else {
            cout << "Пересекаются";
        }
    }
};
