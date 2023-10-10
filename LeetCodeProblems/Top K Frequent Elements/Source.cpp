#include "vector"
#include "string"
#include "iostream"
#include "algorithm"
#include "unordered_map"




class Solution {

public:

	std::vector<int> topKFrequent(std::vector<int>& nums, int k) {

		// variables -----

		std::unordered_map<int, int> frequency;

		std::vector<std::pair<int, int>> sortedNumberOfOcurrences;

		std::vector<int> frequentCharactersForK;

		int currentIndex;

		// code -----

		// creates keys for each numbers, then appends 1 to each value per occurence 

		for (int i = 0; i < nums.size(); i++) {

			frequency[nums[i]]++;

		}

		// places each value and key in a vector
		
		for (auto i : frequency) {

			sortedNumberOfOcurrences.push_back({i.second, i.first});

		}

		std::sort(sortedNumberOfOcurrences.begin(), sortedNumberOfOcurrences.end());

		// loop counting down our sorted vector from high to low

		currentIndex = sortedNumberOfOcurrences.size() - 1;

		for (int i = k; i > 0; i--) {

			frequentCharactersForK.push_back(sortedNumberOfOcurrences[currentIndex].second);

			currentIndex--;

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