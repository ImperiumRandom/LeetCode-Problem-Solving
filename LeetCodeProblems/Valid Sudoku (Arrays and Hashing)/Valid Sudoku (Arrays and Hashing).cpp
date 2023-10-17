#include <iostream>
#include <vector>
#include <unordered_map>


class Solution {
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

                if(board[rowStart][columnStart] > 0) {

                    numbersInSubBox ++;

                    subBoxNums[(board[rowStart][columnStart])] ++;

                };

                if(board[rowStart][columnStart + 1] > 0) {

                    numbersInSubBox ++;

                    subBoxNums[(board[rowStart][columnStart + 1])] ++;

                };

                if(board[rowStart][columnStart + 2] > 0) {

                    numbersInSubBox ++;

                    subBoxNums[(board[rowStart][columnStart + 2])] ++;

                };

                rowStart++;

                // since we have now formed our subbox, checks if our hashed numbers are equal to the amount of numbers we found in the box. (if there are duplicates)
                // then resets our row start, updates our column start as well

                if (c == 3 || c == 6) {

                    if(subBoxNums.size() < numbersInSubBox) {

                        return false;

                    }

                    numbersInSubBox = 0;

                    columnStart += 3;

                    rowStart = rowStart - 2;

                }

            }

            rowStart += 3;

        }

        return true;

    }

};






int main()
{

    Solution testObject;

    char test = '.';

    char testTwo = '1';

    std::vector<std::vector<char>> Debug{{'1', '3', '5','.','6', '9', '.','.', '.'},{'1', '3', '5','.','6', '9', '.','.', '.'},{'1', '3', '5','.','6', '9', '.','.', '.'},{'1', '3', '5','.','6', '9', '.','.', '.'},{'1', '3', '5','.','6', '9', '.','.', '.'},{'1', '3', '5','.','6', '9', '.','.', '.'},
    {'1', '3', '5','.','6', '9', '.','.', '.'},{'1', '3', '5','.','6', '9', '.','.', '.'},{'1', '3', '5','.','6', '9', '.','.', '.'}};

    std::cout << test;

    std::cout << "Hello World!\n";

    std::cout << testObject.isValidSudoku(Debug);

    std::cout << testTwo;






}

