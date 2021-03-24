#include <vector>
#include <stdexcept>
#include "Direction.hpp"

using ariel::Direction;

namespace ariel
{

    class Board
    {
    private:
        std::vector<std::vector<char>> my_board;
        unsigned int cap_row;
        unsigned int cap_col;

    public:
        Board() : my_board(1, std::vector<char>(1, 0)), cap_row(0), cap_col(0){};

        void post(unsigned int row, unsigned int col, Direction d, const std::string  & s);
        static std::string read(unsigned int row, unsigned int col, Direction d, int length);
        static void show();
    };

}; // namespace ariel