#include <string>
#include <stdexcept>
#include "Board.hpp"
// #include "Direction.hpp"
#include <iostream>
#include <vector>

using namespace std;

namespace ariel
{
    void Board::post(unsigned int row, unsigned int col, Direction d, const std::string & s)
    {
        // cout<<cap_col+4<<endl;
        my_board[0][0]='c';

        if (cap_row < row)
        {
            cap_row = row * 2;
            my_board.resize(cap_row);
            // cout<<my_board.size()<<endl;
        }
        if (cap_col < col)
        {
            cap_col = col * 2;
            // cout << cap_col << endl;
            my_board[row].resize(cap_row);
                    // cout<<my_board.size();
        }
                    // cout<<my_board[0].size()<<endl;
                    // cout<<my_board[row].size()<<endl;


        if (d==Direction::Horizontal) {

        for (int i = 0; i < s.length(); i++)
        {
            // my_board[row][col] = 'x';
            // my_board[row + 0][col];
            // my_board[row+0][col];

            }
        }
    }
     string Board::read(unsigned int row, unsigned int col, Direction d, int length)
    {
        return "gfgd";
    }
    void Board::show(){
        cout<<"gfgd"<<endl;
    }

}; // namespace ariel