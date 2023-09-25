#include "iostream"
#include "string"
#include "vector"



class Solution {


	public:

		std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> & strs) {









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

	};

	Solution test;

	reArangedWords = test.groupAnagrams(words);
	
	for (int i = 0; i < 0; i++) {

		







	}
	
	

};