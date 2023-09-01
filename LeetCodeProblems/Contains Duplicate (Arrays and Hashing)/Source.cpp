#include <string>
#include <vector>
#include <algorithm>
#include <iostream>




class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
    
        // sorts array in order
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            
            // stops program from checking a non existant index
            if (nums[i] != (nums.size() - 2)) {

                // catches duplicates
                if (nums[i] == nums[i++]) {
                   
                    return true;

                }

            }

            else {

                continue;

            }

        }

        return false;

    }
};



int main() {


    // Variables and Containers 

    int userInput;
    std::vector<int>testNums;
    bool containsDuplicate = false;


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

    Solution test;

    system("pause");

    std::cout << "Does your array have duplicates?:\n";

    system("pause");

    // displays results
    containsDuplicate = test.containsDuplicate(testNums);

    std::cout << std::boolalpha << containsDuplicate;

    if (containsDuplicate) {

        std::cout << "There are duplicates!!!!";

    }

    else {

        std::cout << "There are no duplicates!!!!";

    }

    



















}