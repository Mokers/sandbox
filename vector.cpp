#include <iostream>
#include "vector.h"

Vector::Vector(int s): elements{new double[s]}, size{s} {}

double& Vector::operator[](int i) {
    return elements[i];
}

int Vector::getSize() {
    return size;
}

double Vector::sum() {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum+=elements[i];
    }
    return sum;
}
