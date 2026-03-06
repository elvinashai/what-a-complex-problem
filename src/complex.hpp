#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <string>

class ComplexNumber {
private:
    float realPart;
    float imaginaryPart;

public:
    ComplexNumber(float real, float imaginary);

    ComplexNumber add(const ComplexNumber& other) const;
    ComplexNumber subtract(const ComplexNumber& other) const;
    ComplexNumber negate() const;
    float magnitude() const;
    ComplexNumber conjugate() const;
    float real() const;
    float imaginary() const;
    std::string prettyPrint() const;
};

#endif
