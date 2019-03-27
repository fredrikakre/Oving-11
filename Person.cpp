#include "Person.h"
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <sstream> 
#include <list>

Person::Person(std::string fnavn, std::string enavn) : fornavn(fnavn), etternavn(enavn) {}
std::string Person::getPersonName() const {
	return fornavn;
}
std::string Person::getPersonLastName() const {
	return etternavn;
}


void insertOrdered(std::list<Person>& liste, const Person& person) {
	for (std::list<Person>::iterator it = liste.begin(); it != liste.end(); ++it) {
		if (it->getPersonName() > person.getPersonName()) {
			liste.insert(it, person);
			return;
		}
	}
	liste.push_back(person);
}