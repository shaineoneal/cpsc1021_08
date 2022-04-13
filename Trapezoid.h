#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid : public Shape // inherit publically from Shape
{
    private:
        double base1 {0},
            base2 {0},
            height {0};

    public:
        Trapezoid() : Shape("Trapezoid") {};
        Trapezoid(double base1, double base2, double height)
            : Shape("Trapezoid"), base1(base1), base2(base2), height(height) {};
        
        double getArea();

};

#endif
