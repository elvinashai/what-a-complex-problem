#include "complex.hpp"
#include <cmath>
#include <string>

ComplexNumber::ComplexNumber(float real, float imaginary) {
   realPart = real;
   imaginaryPart = imaginary;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other) const {
   return ComplexNumber(realPart + other.realPart,
                        imaginaryPart + other.imaginaryPart);
}

ComplexNumber ComplexNumber::subtract(const ComplexNumber& other) const {
   return ComplexNumber(realPart - other.realPart,
                        imaginaryPart - other.imaginaryPart);
}

ComplexNumber ComplexNumber::negate() const {
   return ComplexNumber(-realPart, -imaginaryPart);
}

float ComplexNumber::magnitude() const {
   return std::sqrt(realPart * realPart + imaginaryPart * imaginaryPart);
}

ComplexNumber ComplexNumber::conjugate() const {
   return ComplexNumber(realPart, -imaginaryPart);
}

float ComplexNumber::real() const {
   return realPart;
}

float ComplexNumber::imaginary() const {
   return imaginaryPart;
}

std::string ComplexNumber::prettyPrint() const {
   if (imaginaryPart >= 0) {
      return std::to_string(realPart) + " + " + std::to_string(imaginaryPart) + "i";
   } else {
      return std::to_string(realPart) + " - " + std::to_string(-imaginaryPart) + "i";
   }
}
