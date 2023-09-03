#include <iostream>
#include <string>
#include <algorithm>


// decided not to use big 0(n²) - sort letters then check with big O(n)



class Solution {
public:
    bool isAnagram(std::string s, std::string t) {

        // checks if size is same, this means it can be the same string
        if (s.size() != t.size()) {

            return false;

        }

        std::sort(t.begin(), t.end());

        std::sort(s.begin(), s.end());

        return s == t;


    }


};









int main() {

    std::string originalForm;
    std::string anagram;

    std::cout << "Please enter a string\n\n";

    std::getline(std::cin, originalForm);

    system("cls");

    std::cout << "Please enter a anagram\n\n";

    std::getline(std::cin, anagram);

    system("cls");
    
    Solution test;

    std::cout << test.isAnagram(originalForm, anagram);







}