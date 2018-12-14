#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

class Morse {
private:
	std::string value = "";
	std::vector<std::string> dummyvec;

public:

	std::vector<std::string> morse;
	std::string input;

	void Translate(std::vector<std::string>& morse) {
		std::map<const char, std::string> Morse;

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

		for (std::string word : morse) {
			for (char c : word) {
				value.append(Morse[c]);
			}
			dummyvec.push_back(value);
			value = "";
		}

		morse.swap(dummyvec);
	}
};

int main()
{
	Morse Coder;

	std::cout << "Please enter any word/words to be translated into morse:\n ";
	std::getline(std::cin, Coder.input);

	Coder.morse.push_back(Coder.input);
	
	Coder.Translate(Coder.morse);

	std::cout << " " << Coder.morse[0];
}