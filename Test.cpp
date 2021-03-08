#include<iostream>
#include "doctest.h"
#include "snowman.hpp"
#include <stdio.h>
#include <vector>
#include <string_view>
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
    std::erase(input, ' ');
    std::erase(input, '\t');
    std::erase(input, '\n');
    std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
   // CHECK((snowman(11114411))==nospaces("_===_\n(.,.)\n( : )\n( : )"));
       CHECK(nospaces(snowman(11114411))==nospaces("_===_\n(.,.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(31114411))==nospaces("_\n/_\\\n(.,.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(21114411))==nospaces(" ___\n.....\n(.,.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(41114411))==nospaces(" ___\n(_*_)\n(.,.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(42114411))==nospaces(" ___\n(_*_)\n(...)\n(:)\n(:)"));
       CHECK(nospaces(snowman(43114411))==nospaces(" ___\n(_*_)\n(._.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(44114411))==nospaces(" ___\n(_*_)\n(. .)\n(:)\n(:)"));
       CHECK(nospaces(snowman(41214411))==nospaces(" ___\n(_*_)\n(o,.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(11111111))==nospaces(" _===_\n(.,.)\n<(:)>\n(:)"));
       CHECK(nospaces(snowman(41214411))==nospaces(" ___\n(_*_)\n(o,.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(41214411))==nospaces(" ___\n(_*_)\n(o,.)\n(:)\n(:)"));
       // CHECK(nospaces(snowman(11114411))==nospaces("_===_\n(.,.)\n(:)\n(:)"));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(123456789));//>8 length
    CHECK_THROWS(snowman(123));//<8length
    CHECK_THROWS(snowman(12345679));//num error (9)
    CHECK_THROWS(snowman(66666666));// num error (6)
    CHECK_THROWS(snowman(43214325));
    CHECK_THROWS(snowman(0));//error num and length
    CHECK_THROWS(snowman(2));//error len
    CHECK_THROWS(snowman(90909090));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(123456789));//>8 length
    CHECK_THROWS(snowman(123));//<8length
    CHECK_THROWS(snowman(12345679));//num error (9)
    CHECK_THROWS(snowman(66666666));// num error (6)
    CHECK_THROWS(snowman(43214325));
    CHECK_THROWS(snowman(0));//error num and length
    CHECK_THROWS(snowman(2));//error len
    CHECK_THROWS(snowman(90909090));
       CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(123456789));//>8 length
    CHECK_THROWS(snowman(123));//<8length
    CHECK_THROWS(snowman(12345679));//num error (9)
    CHECK_THROWS(snowman(66666666));// num error (6)
    CHECK_THROWS(snowman(43214325));
    CHECK_THROWS(snowman(0));//error num and length
    CHECK_THROWS(snowman(2));//error len
    CHECK_THROWS(snowman(90909090));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code negative num"){
    CHECK_THROWS(snowman(-555));
    CHECK_THROWS(snowman(-123456789));
    CHECK_THROWS(snowman(-123));
     CHECK_THROWS(snowman(-5553));
    CHECK_THROWS(snowman(-1236789));
    CHECK_THROWS(snowman(-1238));
     CHECK_THROWS(snowman(-5552));
    CHECK_THROWS(snowman(-123456789));
    CHECK_THROWS(snowman(-1234));
}