#include <iostream>
#include <vector>


class Solution {
public:

    bool isValidSudoku(std::vector<std::vector<char>>& board) {

        // variables
       
        int nextSetOfColumnsStart = 3; 

        int CounterTillNextStartOfRow = 0; // iterate through elements (3 times) for each row

        int currentColumnCounterReset = 0;
        
        int currentColumnCounter = 0;

        std::vector<int> subBoxNums;

        // iterate throuh overall board (the baords are not split into sections of three, i will have to use int counters to make sure that is done on each iteration when storeing my values into the vector, which can be cleared after each of the 3x3 hypotheical squares are checked)

        for (int i = 1; i <= 3; i++) {

            for (int c = 1; c <= 9; c++) {








            }

        }

    }

};






int main()
{



    std::cout << "Hello World!\n";







}

