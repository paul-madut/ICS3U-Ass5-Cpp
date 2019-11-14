// Copyright (c) 2019 St Mother Teresa High School All rights reserved.
//
// Created by: Paul M
// Created on: Nov 2019
// This program manipulates string
// with user input

#include <iostream>
#include <cstdlib>


int main() {
    int wordChar;
    int wordLoop;
    int wordPrint;
    std::string wordStr;
    int wordCharInt;
    int wordLoopInt;
    std::string word;
    std::string ss = word;

    // this program prints modified words
    
        // input
        std::cout << "What word do you want looped? ";
        std::cin >> word;
        std::cout << "How many characters would you like looped: ";
        std::cin >> wordChar;
        std::cout << "How many times would ou like the word looped: ";
        std::cin >> wordLoop;
        // process and output
        try {
           
           wordStr = std::stoi(word);
           wordCharInt = int(wordChar);
           wordLoopInt = int(wordLoop);
           
           std::string::size_type i = 0;
           while (i < s.length()) {
                i = s.find('\n', i);
                if (i == std::string:npos) {
                    break;
    }
    s.erase(i);
}
          
             for (int wordLoopInt = int(wordLoop); wordLoopInt > 0; wordLoopInt-- ) {
                 wordStr.erase(std::remove(wordStr.begin(), wordStr.end(), '\n'), wordStr.end());
                 std::cout << word.substr(0, wordCharInt) << std::endl;
                    }
    
           } catch(...) {
               std::cout << "Sorry that is not a valid integer" << std::endl;
        }

        
    }

