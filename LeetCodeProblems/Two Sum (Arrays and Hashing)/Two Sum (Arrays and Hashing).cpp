#include <iostream>
#include <vector>
#include <numeric>


class Solution {

    public:

        static std::vector<int> twoSum(std::vector<int> nums, int target) {

            if (nums[0] == target) {

                return { 0 };

             }

            for (int i = 1; i < nums.size(); i++) {

                if ((nums[i] + nums[i - 1]) == target) {

                    
                    return {i, i - 1};

                }

            }
           
            return { 0 };

        }

        


};







int main()
{
    std::cout << "Hello World!\n";

    std::vector<int> testNumbers { 1, 4, 6, 3, 6, 10 };
    int numToFind = 7;

    system("pause");

    std::vector<int> returnedNums = Solution::twoSum(testNumbers, numToFind);

    std::cout << "[" << returnedNums[0] << "," << returnedNums[1] << "]";





}

