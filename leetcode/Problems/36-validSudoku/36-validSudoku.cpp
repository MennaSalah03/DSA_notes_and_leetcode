#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        // we got 3 things to check to ensure a valid sudoku board
        // sub squares, rows and columns. If any gives false is valid function also returns false
        if (squareCheck(board) == false) return false;
        else if (rowCheck(board) == false) return false;
        else if (colCheck(board) == false) return false;

        return true;
    }

    bool squareCheck(vector<vector<char>> board)
    {
        /**
         * squareCheck: checks each sub-square for repition in items by keeping a frequency map
         *              we keep track for the origin of each square (top-left) and loop over them
         *              from that origin.
         * returns: boolean (false if repitition found and true otherwise)
         */
        int i = 0, j = 0;
        std::vector<std::vector<int>> squareOrigins = {
            {0, 0} , {0, 3}, {0, 6},
            {3, 0}, {3, 3}, {3, 6},
            {6, 0}, {6, 3}, {6, 6}
        };

        
        for (int square = 0; square < 9; square++)
        {
            int i_origin = squareOrigins[square][0];
            int j_origin = squareOrigins[square][1];
            std::unordered_map<char, int> square_freq;

            int row_limit = i_origin + 2, col_limit = j_origin + 2;

            for (int i = i_origin ; i <= row_limit; i++)
            {
                for (int j = j_origin; j <= col_limit; j++)
                {
                    if (board[i][j] == '.') continue;

                    if ( ++square_freq[board[i][j]] > 1) return false;
                }
            }
        }
        return true;
    }

    bool rowCheck(vector<vector<char>> &board)
    {
        /**
         * rowCheck: checks each row by keeping a frequency map
         * for each row as a nested loop that goes row by row and adds each element to the map
         * 
         * return: bool (true if no repitition happens in any row)
         */
        for (int row = 0; row < 9; row++)
        {
            std::unordered_map<char, int> row_freq;
            for (int col = 0; col < 9; col++)
            {
                if (board[row][col] == '.') continue;
                if (++row_freq[board[row][col]] > 1) return false;
            }
        }
        return true;
    }


    bool colCheck(vector<vector<char>> &board)
    {
        /**
         * colCheck: checks each column by keeping a frequency map
         * for each rocolumnw as a nested loop that goes column by column and adds each element to the map.
         * 
         * return: bool (true if no repitition happens in any column)
         */
        for (int col = 0; col < 9; col++)
        {
            std::unordered_map<char, int> row_freq;
            for (int row = 0; row < 9; row++)
            {
                if (board[row][col] == '.') continue;
                if (++row_freq[board[row][col]] > 1) return false;
            }
        }
        return true;
    }
};