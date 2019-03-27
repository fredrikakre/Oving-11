#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <time.h>
#include <list>


class Person {
	std::string fornavn, etternavn;
public:
	Person(std::string fnavn, std::string enavn);
	std::string getPersonName() const;
	std::string getPersonLastName() const;
};

void insertOrdered(std::list<Person> &l, const Person& p);