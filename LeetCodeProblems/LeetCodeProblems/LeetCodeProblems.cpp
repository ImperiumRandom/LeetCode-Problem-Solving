#include <iostream>
#include <vector>


class Solution {

public:
    
    bool checkPossibility(std::vector<int>& nums) {





        return false;

    }

};



int main()
{
    // Variables and Containers 
   
    int userInput;
    std::vector<int>testNums;


    // main code
    
    std::cout << "Please enter a integer greater than 0! Enter 0 to finsih. \n"; // prompt
   
    while (true) {

        // input validation
        while (!(std::cin >> userInput)) {

            std::cout << "Please enter an integer! \n";
            system("pause");
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }

        std::cout << "You entered: " << userInput;
        std::cout << std::endl;

        // checks if user wants to finish entering integers
        if (userInput == 0) {

            break;

        }

        else {

            testNums.push_back(userInput);
            continue;

        }

    }

    system("pause");

    // random temporary object for checking possibility
    Solution object;
    
    std::cout << object.checkPossibility(testNums);



}

