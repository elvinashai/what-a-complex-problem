#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "complex.hpp"


TEST_CASE("Constructor stores real and imaginary parts") {
    ComplexNumber num(5.0, 7.0);

    REQUIRE(num.real() == 5.0f);
    REQUIRE(num.imaginary() == 7.0f);
}

TEST_CASE("Addition works correctly") {
    ComplexNumber a(5.0, 7.0);
    ComplexNumber b(2.5, 3.1);

    ComplexNumber result = a.add(b);

    REQUIRE(result.real() == 7.5f);
    REQUIRE(result.imaginary() == 10.1f);
}

TEST_CASE("Subtraction works correctly") {
    ComplexNumber a(5.0, 7.0);
    ComplexNumber b(2.5, 3.1);

    ComplexNumber result = a.subtract(b);

    REQUIRE(result.real() == 2.5f);
    REQUIRE(result.imaginary() == 3.9f);
}

TEST_CASE("Negation works correctly") {
    ComplexNumber num(5.0, 7.0);

    ComplexNumber result = num.negate();

    REQUIRE(result.real() == -5.0f);
    REQUIRE(result.imaginary() == -7.0f);
}

TEST_CASE("Conjugate works correctly") {
    ComplexNumber num(5.0, 7.0);

    ComplexNumber result = num.conjugate();

    REQUIRE(result.real() == 5.0f);
    REQUIRE(result.imaginary() == -7.0f);
}

TEST_CASE("Magnitude works correctly") {
    ComplexNumber num(3.0, 4.0);

    REQUIRE(num.magnitude() == 5.0f);
}
