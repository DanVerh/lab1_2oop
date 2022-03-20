#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "lab1_1oop/List.cpp"
#include "lab1_1oop/List.hpp"

TEST_CASE( "Arguments initialized") {
    List test;
    test.SetFront(3);
    REQUIRE( test.GetFront() == 3);
}
