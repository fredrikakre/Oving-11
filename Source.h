#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <time.h>
#include <sstream> 

void iterator();
std::vector<std::string>& replacement(std::vector<std::string>& streng, std::string old, std::string replacement);
//void replacement(std::vector<std::string>* streng, std::string old, std::string replacement);
void printVecString(std::vector<std::string> streng);
std::set<int> hundredSet();
std::set<int> removeEvenNumbers(std::set<int>& Batman);
void printIntSet(std::set<int> intSet);


//UTILITIES
int randomWithLimits(int nedre, int ovre);

//TESTVECTORER
void testReplacement();
void testSets();