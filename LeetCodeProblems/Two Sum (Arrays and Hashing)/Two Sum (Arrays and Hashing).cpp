#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_map>

// this solution uses an unordered map to create a hash table, we form the compliment which is made up of taking our target, subtracting the current index, and seeing if any number in the hash map matches our compliment, if not we redefine
// our complement using the next num in our vector.

class Solution {
public:

    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        std::unordered_map<int, int> numMap;
        int n = nums.size();


        // build hash table

        for (int i = 0; i < n; i++) {

            numMap[nums[i]] = i;


        }


        // find the complement

        for (int i = 0; i < n; i++) {

            int complement = target - nums[i];

            if (numMap.count(complement) && numMap[complement] != i) {

                return { i, numMap[complement] };

            }


        }


        return {}; // no solution found



    }
    

};







int main()
{
    std::cout << "Hello World!\n";

    std::vector<int> testNumbers { 1, 4, 6, 3, 6, 10 };
    int numToFind = 7;

    system("pause");

    Solution test;

    std::vector<int> returnedNums = test.twoSum(testNumbers, numToFind);

    std::cout << "[" << returnedNums[0] << "," << returnedNums[1] << "]";





}

