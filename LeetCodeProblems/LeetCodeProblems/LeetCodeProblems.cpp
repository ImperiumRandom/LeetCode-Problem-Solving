#include <iostream>
#include <vector>


// make sure element before found element is compared to next element


class solution {

public:
    
    static bool checkPossibility(std::vector<int>& nums) {

        // will be used to check if a modifiable element has already been found
        bool modifiableElement = false;
        bool comparePreviousElement = false; // this will compare the element before our modifiable element
        int previousElement;

        std::vector<int>::iterator checkNums;
        for (checkNums = nums.begin(); checkNums != nums.end(); checkNums++) {
           
            // this if statement only executes if num is not on its last element
            if (!(checkNums + 1 == nums.end())){

                if (comparePreviousElement) {

                    std::cout << "executed compare previous element";
                    system("pause");

                    if (comparePreviousElement > *checkNums) {

                        
                        return false;

                    }

                    else {

                        std::cout << "set compare previous element to false";
                        system("pause");
                        comparePreviousElement = false;

                    }


                }



                 if (*checkNums > *(checkNums + 1)) {

                     if (modifiableElement = true) {

                         // returns false because array is decreasing   
                         return false;

                     }

                     else {

                         modifiableElement = true;
                         comparePreviousElement = true;
                         previousElement = *checkNums;
                     }

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
    bool isNonDecreasing = false;


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

    std::cout << "Is your array non decreasing?:\n";

    // displays results
    isNonDecreasing = solution::checkPossibility(testNums);
    std::cout << std::boolalpha << isNonDecreasing;

    if (isNonDecreasing) {

        std::cout << ", there is either no or just one modifiable element.";

    }

    else {

        std::cout << ", there more than one modifiable element.";

    }

    system("pause");

}

