#include <string>
#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm>
#include "Board.hpp"

using namespace std;

TEST_CASE("Good post")
{
    ariel::Board board;
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 4) == "gfgd");

    board.post(/*row=*/50, /*column=*/100, Direction::Horizontal, "abcd");
    CHECK(board.read(50, 100, Direction::Horizontal, 4) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Vertical, "abcd");
    CHECK(board.read(100, 200, Direction::Vertical, 4) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 4) == "gfgd");
    
    board.post(/*row=*/10, /*column=*/20, Direction::Vertical, "abcd");
    CHECK(board.read(10, 20, Direction::Vertical, 0) == "gfgd");
    
    board.post(/*row=*/104, /*column=*/203, Direction::Horizontal, "abcd");
    CHECK(board.read(104, 203, Direction::Horizontal, 4) == "gfgd");
    
    board.post(/*row=*/15, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(15, 500, Direction::Vertical, 124) == "gfgd");
    
    board.post(/*row=*/1, /*column=*/2, Direction::Horizontal, "abcd");
    CHECK(board.read(1, 2, Direction::Horizontal, 11) == "gfgd");
    
    board.post(/*row=*/13, /*column=*/23, Direction::Horizontal, "abcd");
    CHECK(board.read(13, 23, Direction::Horizontal, 12) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/60, Direction::Vertical, "abcd");
    CHECK(board.read(100, 60, Direction::Vertical, 4) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 1) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 4) == "gfgd");
    
    board.post(/*row=*/5, /*column=*/2, Direction::Vertical, "abcd");
    CHECK(board.read(5, 2, Direction::Vertical, 3) == "gfgd");
    
    board.post(/*row=*/1, /*column=*/0, Direction::Vertical, "abcd");
    CHECK(board.read(1, 0, Direction::Vertical, 9) == "gfgd");
    
    board.post(/*row=*/1000, /*column=*/2000, Direction::Vertical, "abcd");
    CHECK(board.read(1000, 2000, Direction::Vertical, 10) == "gfgd");
    
    board.post(/*row=*/62, /*column=*/110, Direction::Horizontal, "abcd");
    CHECK(board.read(62, 110, Direction::Horizontal, 4) == "gfgd");
    
    board.post(/*row=*/10, /*column=*/2, Direction::Vertical, "abcd");
    CHECK(board.read(10, 2, Direction::Vertical, 4) == "gfgd");
    
    board.post(/*row=*/77, /*column=*/105, Direction::Vertical, "abcd");
    CHECK(board.read(77, 105, Direction::Vertical, 2) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 2) == "gfgd");
    
    board.post(/*row=*/1, /*column=*/8, Direction::Horizontal, "abcd");
    CHECK(board.read(1, 7, Direction::Horizontal, 1) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 1) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 0) == "gfgd");
    
    board.post(/*row=*/5, /*column=*/10, Direction::Horizontal, "abcd");
    CHECK(board.read(5, 10, Direction::Horizontal, 20) == "gfgd");
    
    board.post(/*row=*/81, /*column=*/41, Direction::Horizontal, "abcd");
    CHECK(board.read(81, 41, Direction::Horizontal, 4) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Vertical, "abcd");
    CHECK(board.read(100, 200, Direction::Vertical, 4) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 4) == "gfgd");
    
    board.post(/*row=*/99, /*column=*/98, Direction::Vertical, "abcd");
    CHECK(board.read(99, 98, Direction::Vertical, 4) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Vertical, "abcd");
    CHECK(board.read(100, 200, Direction::Vertical, 7) == "gfgd");
    
    board.post(/*row=*/3, /*column=*/3, Direction::Vertical, "abcd");
    CHECK(board.read(3, 3, Direction::Vertical, 7) == "gfgd");
    
    board.post(/*row=*/10, /*column=*/20, Direction::Vertical, "abcd");
    CHECK(board.read(10, 20, Direction::Vertical, 3) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Vertical, "abcd");
    CHECK(board.read(100, 200, Direction::Vertical, 4) == "gfgd");
    
    board.post(/*row=*/1, /*column=*/677, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 100) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 3) == "gfgd");
    
    board.post(/*row=*/20, /*column=*/27, Direction::Horizontal, "abcd");
    CHECK(board.read(111, 65, Direction::Horizontal, 14) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 41) == "gfgd");
    
    board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(100, 200, Direction::Horizontal, 20) == "gfgdvfvfb");
    
    board.post(/*row=*/3, /*column=*/30, Direction::Horizontal, "abcd");
    CHECK(board.read(3, 30, Direction::Horizontal, 5) == "gfgd");
    
    board.post(/*row=*/1, /*column=*/200, Direction::Horizontal, "abcd");
    CHECK(board.read(1, 200, Direction::Horizontal, 4) == "gfgd");
    
    board.post(/*row=*/10, /*column=*/20, Direction::Horizontal, "abcd");
    CHECK(board.read(10, 20, Direction::Horizontal, 3) == "gfgd");
    
    board.post(/*row=*/155, /*column=*/157, Direction::Vertical, "abcd");
    CHECK(board.read(100, 157, Direction::Horizontal, 2) == "gfgd");
    
    board.post(1, 2, Direction::Vertical, "abcd");
    CHECK(board.read(1, 2, Direction::Horizontal, 1) == "gfgd");
}