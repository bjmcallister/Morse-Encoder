#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

void MorseTranslator(std::vector<std::string>& morse);

int main()
{
	std::vector<std::string> morse;
	std::string input;

	std::cout << "Please enter any word/words to be translated into morse:\n ";
	std::getline(std::cin, input);

	morse.push_back(input);
	MorseTranslator(morse);


	std::cout << " " << morse[0];

}

void MorseTranslator(std::vector<std::string>& morse) {
	std::map<char, std::string> Morse;

	Morse['a'] = ".-";
	Morse['b'] = "-...";
	Morse['c'] = "-.-.";
	Morse['d'] = "-..";
	Morse['e'] = ".";
	Morse['f'] = "..-.";
	Morse['g'] = "--.";
	Morse['h'] = "....";
	Morse['i'] = "..";
	Morse['j'] = ".---";
	Morse['k'] = "-.-";
	Morse['l'] = ".-..";
	Morse['m'] = "--";
	Morse['n'] = "-.";
	Morse['o'] = "---";
	Morse['p'] = ".--.";
	Morse['q'] = "--.-";
	Morse['r'] = ".-.";
	Morse['s'] = "...";
	Morse['t'] = "-";
	Morse['u'] = "..-";
	Morse['v'] = "...-";
	Morse['w'] = ".--";
	Morse['x'] = "-..-";
	Morse['y'] = "-.--";
	Morse['z'] = "--..";
	Morse[' '] = "/";

	std::string value = "";
	std::vector<std::string> dummyvec;

	for (std::string word : morse) {
		for (char c : word) {
			value.append(Morse[c]);
		}
		dummyvec.push_back(value);
		value = "";
	}
	morse.swap(dummyvec);
}