#include <iostream>
#include "Board.hpp"
#include "Direction.hpp"
#include <string>
#include <stdexcept>
using namespace std;
using ariel::Direction;

namespace ariel {

    void Board::post(int col, int row, enum Direction, string str)
    {
        
    };
    string Board::read(int col, int row, enum Direction, unsigned int num)
    {
    return " ";
    };
    void Board::show()
    {
        
        cout << "board!!!";
    };
};