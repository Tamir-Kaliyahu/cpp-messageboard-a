#include "doctest.h"
#include "Board.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Direction.hpp"
using namespace ariel;
using namespace std;
ariel::Board board;

TEST_CASE("Bad post func:") {
    CHECK_NOTHROW(board.post(-2, -4,Direction::Horizontal , "negative test")); 
    CHECK_NOTHROW(board.post(0, -3, Direction::Horizontal , "!"));
    /* Add more checks here */
}

TEST_CASE("Good post func:") {
    CHECK_NOTHROW(board.post(0,0, Direction::Horizontal , "test"));
    CHECK_NOTHROW(board.post(2,1, Direction::Horizontal , "go"));
    CHECK_NOTHROW(board.post(0,2, Direction::Horizontal , "hey"));
    CHECK_NOTHROW(board.post(3,3, Direction::Vertical , "a"));
    CHECK_NOTHROW(board.post(2,2,Direction::Vertical , "yea"));
    CHECK_NOTHROW(board.post(3, 0,Direction::Horizontal , "t"));
    CHECK_NOTHROW(board.post(2,1 ,Direction::Horizontal , "good"));
    CHECK_NOTHROW(board.post(2,4,Direction::Horizontal , "abc"));
    /* Add more checks here */
}

TEST_CASE("Bad read func") {
    CHECK(board.read(4,-2,Direction::Horizontal, 2) ==" ");
    CHECK(board.read(-3,4,Direction::Vertical, 2) ==" ");
    CHECK(board.read(-4,4,Direction::Horizontal, 2) ==" ");
    CHECK(board.read(0,-2, Direction::Vertical, 5) ==" ");
	/* Add more checks here */
}

TEST_CASE("Good read func") {
    
    CHECK(board.read(1,0,Direction::Vertical, 3) =="e_e");
    CHECK(board.read(2,0,Direction::Horizontal, 2) =="st");
    CHECK(board.read(0,0,Direction::Vertical, 4) =="t_h_");
    CHECK(board.read(1,1,Direction::Horizontal, 3) =="_go");
    CHECK(board.read(3,1,Direction::Vertical, 2) =="to");
    CHECK(board.read(3,4,Direction::Horizontal, 2) =="bc");
    
}

