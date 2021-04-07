/*
===============================================================
>Submission 2.1 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>messageboard-a  
================================================================
*/
#include <stdexcept>
#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"


TEST_CASE("good test - read"){
    ariel::Board b;
 
    //POST "helloworld" IN HORIZONTAL DIRECTION
    b.post(100,200, ariel::Direction::Horizontal, "helloworld");       

    //TEST FULL POST AT GOOD POSITION
    CHECK(b.read(100, 200, ariel::Direction::Horizontal, 10) == "helloworld");
    
    //TEST POST AT MANY POSITION
    CHECK(b.read(100, 198, ariel::Direction::Horizontal, 8) == "__hellow");
    CHECK(b.read(100, 195, ariel::Direction::Horizontal, 8) == "_____hel");
    CHECK(b.read(102, 198, ariel::Direction::Horizontal, 4) == "____");
    CHECK(b.read(130, 204, ariel::Direction::Horizontal, 6) == "______");

    //VERTICAL TEST FO EACH LETTER OF THE POST
    CHECK(b.read(100, 200, ariel::Direction::Vertical, 1) == "h");
    CHECK(b.read(100, 201, ariel::Direction::Vertical, 1) == "e");
    CHECK(b.read(100, 202, ariel::Direction::Vertical, 1) == "l");
    CHECK(b.read(100, 203, ariel::Direction::Vertical, 1) == "l");
    CHECK(b.read(100, 204, ariel::Direction::Vertical, 1) == "o");
    CHECK(b.read(100, 205, ariel::Direction::Vertical, 1) == "w");
    CHECK(b.read(100, 206, ariel::Direction::Vertical, 1) == "o");
    CHECK(b.read(100, 207, ariel::Direction::Vertical, 1) == "r");
    CHECK(b.read(100, 208, ariel::Direction::Vertical, 1) == "l");
    CHECK(b.read(100, 209, ariel::Direction::Vertical, 1) == "d");
   
    //POST "nathben_3427_Golem97" IN HORIZONTAL DIRECTION 
    b.post(130,200, ariel::Direction::Horizontal, "nathben_3427_Golem97"); 

    //TEST READ HORIZONTAL FULL POST
    CHECK(b.read(130, 200, ariel::Direction::Horizontal, 20) == "nathben_3427_Golem97");
    
    //TEST READ HORIZONTAL EACH PART CONTAIN NUMBERS
    CHECK(b.read(130, 208, ariel::Direction::Horizontal, 4) == "3427");
    CHECK(b.read(130, 218, ariel::Direction::Horizontal, 2) == "97");

    
    //CREAT A NEW POST IN VERTICAL
    b.post(100,140, ariel::Direction::Vertical, "Alle l'om");      
   
    //TEST FULL POST VERTICAL
    CHECK(b.read(100, 140, ariel::Direction::Vertical, 9) == "Alle l'om");

    //TEST EACH LETTER OF THE POST IN VERTICAL
    CHECK(b.read(100, 140, ariel::Direction::Vertical, 1) == "A");
    CHECK(b.read(101, 140, ariel::Direction::Vertical, 1) == "l");
    CHECK(b.read(102, 140, ariel::Direction::Vertical, 1) == "l");
    CHECK(b.read(103, 140, ariel::Direction::Vertical, 1) == "e");
    CHECK(b.read(104, 140, ariel::Direction::Vertical, 1) == " ");
    CHECK(b.read(105, 140, ariel::Direction::Vertical, 1) == "l");
    CHECK(b.read(106, 140, ariel::Direction::Vertical, 1) == "'");
    CHECK(b.read(107, 140, ariel::Direction::Vertical, 1) == "o");
    CHECK(b.read(108, 140, ariel::Direction::Vertical, 1) == "m");

    //TEST READ HORIZONTAL
   CHECK(b.read(100, 140, ariel::Direction::Horizontal, 1) == "A");
   CHECK(b.read(100, 140, ariel::Direction::Horizontal, 5) == "A____");
   CHECK(b.read(99, 141, ariel::Direction::Horizontal, 5) == "_____");

   
}

