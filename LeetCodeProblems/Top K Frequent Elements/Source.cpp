#include "vector"
#include "string"
#include "iostream"
#include "algorithm"
#include "unordered_map"




class Solution {

public:

	std::vector<int> topKFrequent(std::vector<int>& nums, int k) {

		// variables

		std::unordered_map<int, int> frequency;

		std::vector<int> frequentCharactersForK;

		// code

		for (int i = 0; i < nums.size(); i++) {

			frequency[nums[i]]++;

		}
		
		for (auto i : frequency) {

			if (i.second >= k) {

				frequentCharactersForK.push_back(i.first);

			}

			else {

				continue;

			}

		}

		return frequentCharactersForK;

	}

};



int main() {
	
	// variables

	std::vector<int>nums{ 1, 1, 1, 3, 3, 3, 2, 2, 5 };

	int k = 3;

	Solution test;

	//code

	std::vector<int>anwser = test.topKFrequent(nums, k);

	std::cout << "[";

	for (int i = 0; i < anwser.size(); i++) {

		std::cout << anwser[i];

		if (i < anwser.size() - 1) {

			std::cout << ",";

		}

	}

	std::cout << "]";


}