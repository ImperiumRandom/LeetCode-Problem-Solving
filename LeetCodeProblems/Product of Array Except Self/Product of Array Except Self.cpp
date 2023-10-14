// Product of Array Except Self.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


class Solution {

public:

    std::vector<int> productExceptSelf(std::vector<int>& nums) {

        // variables

        int sizeOfNums = nums.size();

        std::vector<int> left(nums.size());

        std::vector<int> right(nums.size());

        std::vector<int> anwser;

        // code

        for (int i = 0; i < sizeOfNums; i++) {

            if (i == 0) {

                right[i] = 1;

            }

            else {

                right[i] = nums[i - 1] * right[i - 1];

            }

        }

        for (int i = sizeOfNums - 1; i >= 0; i--) {

            if (i == sizeOfNums - 1) {

                left[i] = 1;

            }

            else {

                left[i] = nums[i + 1] * left[i + 1];

            }


        }

        for (int i = 0; i < sizeOfNums; i++) {

            anwser.push_back(left[i] * right[i]);

        }

        return anwser;


    }

};


class SolutionTwo {


public:

    std::vector<int> productExceptSelf(std::vector<int>& nums) {

        // variables

        int sizeOfNums = nums.size();

        std::vector<int> right(sizeOfNums);

        std::vector<int> left(sizeOfNums);

        std::vector<int> anwser;

        int leftCounter = sizeOfNums - 1;

        // code

        for (int i = 0; i < sizeOfNums; i++) {

            if (i == 0) {

                right[i] = 1;

                left[leftCounter] = 1;

            }

            else {

                right[i] = right[i - 1] * nums[i - 1];

                left[leftCounter] = left[leftCounter + 1] * nums[leftCounter + 1];

            }

            leftCounter--;


        }

        for (int i = 0; i < sizeOfNums; i++) {

            anwser.push_back(left[i] * right[i]);

        }

        return anwser;

    }

};



// mostly me

class SolutionThree {

public:

    std::vector<int> productExceptSelf(std::vector<int>& nums) {

        // least lines of code

        int sizeOfNums = nums.size();

        std::vector<int> answer(sizeOfNums);

        // preProductMultiplication

        int temp = 1;

        for (int i = 0; i < sizeOfNums; i++) {
       
            answer[i] = temp;
            
            temp *= nums[i];
        
        }

        // posProductMultiplication

        temp = 1;

        for (int i = sizeOfNums - 1; i >= 0; i--) {
        
            answer[i] *= temp;
            
            temp *= nums[i];
        
        }


        return answer;

    }

};






int main()
{   

    std::vector<int> nums{4, 5, 1, 8, 2};

    std::vector<int> anwser;

    std::cout << "Hello World!\n";

    Solution object;

    anwser = object.productExceptSelf(nums);
    
    for (int i = 0; i < anwser.size(); i++) {

        std::cout << anwser[i] << ",";

    }

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
