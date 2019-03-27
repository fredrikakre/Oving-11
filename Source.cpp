#include "Source.h"
#include <iterator>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <sstream> 

void iterator() {
	std::vector<std::string> testVector;
	testVector.push_back("1"); testVector.push_back("2"); testVector.push_back("3"); testVector.push_back("4");
	for (std::vector<std::string>::iterator it = testVector.begin(); it != testVector.end(); ++it) 
		std::cout << *it << std::endl;
	std::cout << "---\n";
	for (std::vector<std::string>::reverse_iterator reIt = testVector.rbegin(); reIt != testVector.rend(); ++reIt)
		std::cout << *reIt << std::endl;
}

//void replacement(std::vector<std::string>* streng, std::string old, std::string replacement) {
//	for (std::vector<std::string>::iterator it = (*streng).begin(); it != (*streng).end(); ++it) {
//		if (*it == old) {
//			*it = replacement;
//		}
//	}
//}

//std::vector<std::string>& replacement(std::vector<std::string>& streng, std::string old, std::string replacement) {
//	for (std::vector<std::string>::iterator it = streng.begin(); it < streng.end(); ++it) {
//		std::cout << "Check: " << *it;
//		if (*it == old) {
//			std::cout << "found";
//			streng.erase(it);
//			//std::cout << "found2";
//			streng.insert(it, replacement);
//		}
//	}
//	return streng;
//}
std::vector<std::string>& replacement(std::vector<std::string>& vec, std::string old, std::string replace) {
	for (std::vector<std::string>::iterator ptr = vec.begin(); ptr < vec.end(); ++ptr) {
		if (*ptr == old) {
			ptr = vec.erase(ptr);
			ptr = vec.insert(ptr, replace);
		}
	}
	return vec;
}


void printVecString(std::vector<std::string> streng) {
	for (std::vector<std::string>::iterator it = streng.begin(); it != streng.end(); ++it)
		std::cout << *it << std::endl;
}
void printIntSet(std::set<int> intSet) {
	for (std::set<int>::iterator it = intSet.begin(); it != intSet.end(); ++it)
	std::cout << *it << std::endl;
}

std::set<int> hundredSet() {
	std::set<int> Godzilla;
	for (int i = 0; i <= 100; ++i) Godzilla.insert(i);
	return Godzilla;
}
std::set<int> removeEvenNumbers(std::set<int>& Batman) {
	for (std::set<int>::iterator it = Batman.begin(); *it < 100 ; ++it){
		if ((*it % 2) == 0) {
			it = Batman.erase(it);  //OK så erase returnerer ptr til "it+1"
		}		
	}
	return Batman;
}



//TESTVECTORER
void testReplacement() {
	std::vector<std::string> testVector; 
	testVector.push_back("1"); testVector.push_back("2"); testVector.push_back("3"); testVector.push_back("4");
	//std::vector<std::string>* refTestVector = &testVector;
	replacement(testVector, "4", "Hei");
	printVecString(testVector);
}

void testSets() {
	std::set<int> testSet;
	testSet = hundredSet();
	//std::set<int>::iterator it = testSet.find(5);
	//std::set<int>* pointer 
	//it = testSet.erase(it);
	//std::cout << "Check it: " << *it << std::endl;
	//printIntSet(testSet);
	testSet = removeEvenNumbers(testSet);
	printIntSet(testSet);
}