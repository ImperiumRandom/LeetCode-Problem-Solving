#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "unordered_map"

// code for debugging:

// std::cout << "Entered for loop"; //----------------------------------------------------------------------
// system("pause");


class Solution {


	public:


		std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs) {

			
			std::unordered_map<std::string, std::vector<std::string>> wordPairs;


			for (auto x: strs) {


				std::string currentWord = x;

				std::sort(currentWord.begin(), currentWord.end());

				wordPairs[currentWord].push_back(x);


			}

			
			std::vector<std::vector<std::string>> anwser;


			for (auto x : wordPairs) {


				anwser.push_back(x.second);


			}


			return anwser;


		}


};






int main() {
	

	// variables

	std::string userInput;

	std::vector<std::string> words;

	std::vector<std::vector<std::string>> reArangedWords;

	std::vector<std::string> newWords;


	// main code

	std::cout << "Please enter 0 to stop. \n\n";

	while (true) {

		std::cout << "UserInput: ";

		std::getline(std::cin, userInput);

		std::cout << "\n";

		if (userInput == "0") {

			break;

		}
	
		words.push_back(userInput);

	}

	Solution test;

	reArangedWords = test.groupAnagrams(words);

	system("cls");
	
	for (int i = 0; i < words.size(); i++) {

		for (int c = 0; c < words[i].size(); c++) {


			std::cout << words[i] << "\n\n";


		}

	}

};