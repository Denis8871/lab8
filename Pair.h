#pragma once
#include<iostream>
class Pair
{
public:
    Pair(double a, double b) : first(a), second(b) {}

    void setPair(double a, double b);

    double getProduct() const;

protected:
    double first;
    double second;
};

class Rectangle : public Pair {
public:
    Rectangle(double length, double width) : Pair(length, width) {}

    double getPerimeter() const {
        return 2 * (first + second);
    }

    double getArea() const {
        return first * second;
    }
};


