/*
The String Calculator Kata
Like the Bowling Kata, this kata, made popular by Roy Osherove, comes with a precise set of steps to follow.
The essence is a method that given a delimited string, returns the sum of the values.
I’ve always preferred my kata to define the tests I will follow every time through the exercise,
so here are the tests I use for this one:

1. An empty string returns zero
2. A single number returns the value
3. Two numbers, comma delimited, returns the sum
4. Two numbers, newline delimited, returns the sum
5. Three numbers, delimited either way, returns the sum
6. Negative numbers throw an exception
7. Numbers greater than 1000 are ignored
8. A single char delimiter can be defined on the first line (e.g. //# for a ‘#’ as the delimiter)
9. A multi char delimiter can be defined on the first line (e.g. //[###] for ‘###’ as the delimiter)
10. Many single or multi-char delimiters can be defined (each wrapped in square brackets)
*/
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
// #ifndef CATCH_CONFIG_MAIN

#include "catch2.hpp"
// #include "stringcalc.cpp"

#include <iostream>
using std::cout;

#include <string>
using std::string;

// 1. An empty string returns zero
double stringCalc(string n)
{
	return 0;
}

// 2. A single number returns the value

// 1. An empty string returns zero
TEST_CASE( "Empty string returns 0" )
{
    REQUIRE( stringCalc("") == 0 );
}

// 2. A single number returns the value

// #endif

// #define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
//
// #include "catch2.hpp"
//
// unsigned int Factorial( unsigned int number ) {
//     return number <= 1 ? number : Factorial(number-1)*number;
// }
//
// TEST_CASE( "Factorials are computed", "[factorial]" ) {
//     REQUIRE( Factorial(1) == 1 );
//     REQUIRE( Factorial(2) == 2 );
//     REQUIRE( Factorial(3) == 6 );
//     REQUIRE( Factorial(10) == 3628800 );
// }
