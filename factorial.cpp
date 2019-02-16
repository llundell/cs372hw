
#define CATCH2_CONFIG_MAIN
#include "catch2.hh"

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}
