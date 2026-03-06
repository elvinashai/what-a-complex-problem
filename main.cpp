#include <iostream>
#include "src/complex.hpp"

int main() {
  ComplexNumber numberOne(5.0, 7.0);
  ComplexNumber numberTwo(2.5, 3.1);

  ComplexNumber numberThree = numberOne.add(numberTwo);
  std::cout << "Addition: " << numberThree.prettyPrint() << std::endl;

  ComplexNumber numberFour = numberOne.subtract(numberTwo);
  std::cout << "Subtraction: " << numberFour.prettyPrint() << std::endl;

  ComplexNumber numberFive = numberOne.negate();
  std::cout << "Negation: " << numberFive.prettyPrint() << std::endl;

  ComplexNumber numberSix = numberOne.conjugate();
  std::cout << "Conjugate: " << numberSix.prettyPrint() << std::endl;

  std::cout << "Real part: " << numberOne.real() << std::endl;
  std::cout << "Imaginary part: " << numberOne.imaginary() << std::endl;
  std::cout << "Magnitude: " << numberOne.magnitude() << std::endl;

  return 0;
}
