#include <iostream>
#include <vector>


// make sure element before found element is compared to next element


class solution {
public:
    static bool checkPossibility(std::vector<int>& nums) {
        int n = nums.size();
        bool flag = true;
        int i;
        for (i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                if (flag == false)
                    break;
                flag = false;
                if (i != n - 2 && nums[i] > nums[i + 2]) {
                    if (i != 0 && nums[i - 1] > nums[i + 1])
                        break;
                }
                else {
                    i++;
                }
            }
        }
        if (i < n - 1)
            return false;
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

