#include <iostream>
#include <vector>
#include <unordered_map>

// this solution checks only each box (this was an attempt)

class myFirstSolution {
public:
    
    bool isValidSudoku(std::vector<std::vector<char>>& board) {

        // variables

        int rowStart = 0; 

        int columnStart = 0;

        // variables below are used for counting nums in each formed sub box

        int numbersInSubBox = 0;

        std::unordered_map<char, int> subBoxNums;

        // iterate throuh overall board, 3 times because each iteration will change our row start

        for (int i = 1; i <= 3; i++) {

            // iterate through the 3 vectors at a time, 3 times each. (9 iterations overall)

            for (int c = 1; c <= 9; c++) {

                if(std::isdigit(board[rowStart][columnStart])) {

                    numbersInSubBox ++;

                    subBoxNums[board[rowStart][columnStart]] ++;

                };

                if(std::isdigit(board[rowStart][columnStart + 1])) {

                    numbersInSubBox ++;

                    subBoxNums[board[rowStart][columnStart + 1]] ++;

                };

                if(std::isdigit(board[rowStart][columnStart + 2])) {

                    numbersInSubBox ++;   

                    subBoxNums[board[rowStart][columnStart + 2]] ++;

                };

                rowStart++;

                //c = 3
                //3

                // since we have now formed our subbox, checks if our hashed numbers are equal to the amount of numbers we found in the box. (if there are duplicates)
                // then resets our row start, updates our column start as well

                if (c == 3 || c == 6) {

                    

                    if(subBoxNums.size() < numbersInSubBox) {

                        

                        return false;

                    }

                    else {

                        subBoxNums.clear();
                        
                        numbersInSubBox = 0;

                        columnStart += 3;

                        rowStart = rowStart - 3;

                    }

                }

            }

            rowStart += 3;

            if (rowStart == 9) {
            
                break;
            
            }

        }

        return true;

    }

};

// solution learned from neetcode, altered to use arrays instead

class Solution {

    public:
    
    bool isValidSudoku (std::vector<std::vector<char>> &board) {

        int row[9][9] = {0}, column[9][9] = {0}, box[9][9] = {0};

        for (int r = 0; r < 9; r++) {

            for (int c = 0; c < 9; c++) {

                if (board[r][c] == '.') {
                    continue;
                }

                int currentNum = board[r][c] - '0' - 1, k = r/3 * 3 + c/3;

                // checks to see if current num exits in each array - nested array, because there are 9 possible numbers, if one already exists, that index will be filled/created that means there is a duplicate.
                if (row[r][currentNum] || column[c][currentNum] || box[k][currentNum]) {
                    return false;
                }

                column[c][currentNum] = row[r][currentNum] = box[k][currentNum] = 1;

            }

        }

        return true;
    }

};



int main()
{

    Solution testObject;

    char test = '.';

    char testTwo = '1';

    std::vector<std::vector<char>> Debug{{'5', '3', '.','.','7', '.', '.','.', '.'},{'6', '.', '.','1','9', '5', '.','.', '.'},{'.', '9', '8','.','.', '.', '.','6', '.'},{'8', '.', '.','.','6', '.', '.','.', '3'},{'4', '.', '.','8','.', '3', '.','.', '1'},{'7', '.', '.','.','2', '.', '.','.', '6'},
    {'.', '6', '.','.','.', '.', '2','8', '.'},{'.', '.', '.','4','1', '9', '.','.', '5'},{'.', '.', '.','.','8', '.', '.','7', '9'}};

    std::cout << test;

    std::cout << "Hello World!\n";

    std::cout << testObject.isValidSudoku(Debug);

    std::cout << '2' - 0 - 1;






}

