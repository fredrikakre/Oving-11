#pragma once
#include "Source.h"

template<typename africa>

std::vector<africa> shuffle(std::vector<africa> liste) {
	int randNumber, IndexOne, IndexTwo; int countNumber = 0;
	africa temp; int max = liste.size();
	do {
		IndexOne = randomWithLimits(0, max - 1); IndexTwo = randomWithLimits(0, max - 1);
		temp = liste[IndexOne];
		liste[IndexOne] = liste[IndexTwo];
		liste[IndexTwo] = temp;
		++countNumber;
	} while (countNumber < 300);
	return liste;
}

template<typename africa>
void printVec(std::vector<africa> liste) {
	int max = liste.size();
	for (int i = 0; i < max; ++i) {
		std::cout << liste[i] << "  |  ";
	}
}
template<typename Toto>
Toto maximum(Toto varOne, Toto varTwo) {
	if (varOne > varTwo) return varOne;
	return varTwo;
}

void fillSomeVectors(std::vector<int>& intVec, std::vector<std::string>& stringVec) {
	for (int i = 0; i <= 100; ++i) {
		intVec.push_back(i);
		std::stringstream sso; sso << i;
		stringVec.push_back(sso.str());
	}
}



void testTemplates() {
	std::vector<int> intVec; std::vector<std::string> stringVec;
	fillSomeVectors(intVec, stringVec);
	printVec(stringVec);
	stringVec = shuffle(stringVec);
	std::cout << std::endl << " New: " << std::endl;
	printVec(stringVec);
}