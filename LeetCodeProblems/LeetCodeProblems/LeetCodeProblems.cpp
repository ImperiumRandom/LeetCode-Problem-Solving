#include <iostream>
#include <vector>


class Solution {

public:
    
    bool checkPossibility(std::vector<int>& nums) {

        bool modifiableElement = false;


        std::vector<int>::iterator checkNums;
        for (checkNums = nums.begin(); checkNums != nums.end(); checkNums++) {

            std::cout << "worked" << *checkNums;

            // returns false because array is decreasing
            
            // this if statement only executes if num is not on its last element
            if (!((checkNums != nums.end()) && (checkNums + 1 == nums.end()))){


                 if (*checkNums > *(checkNums + 1)) {

                    return false;

                 }

                 
                 else {

                    continue;

                 }


            }
            
        }

        // returns true because array is non decreasing
        return true;

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

        // input validation for integer
        while (!(std::cin >> userInput)) {

            std::cout << "Please enter an integer! \n";
            system("pause");
            std::cin.clear();
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


    std::cout << "Is your array non decreasing?:\n";

    // displays result with bool alpha (this makes result display as a string)
    std::cout << std::boolalpha << object.checkPossibility(testNums);

}

