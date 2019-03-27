#include "Linkedlist.h"
#include <iostream>
#include <string>

namespace LinkedList {
	std::ostream& operator<<(std::ostream& os, const Node& node) {
		if (pos == LinkedList::begin()) {
			head = std::move(pos->next);	//Gj�r head om til neste punkt aka posisjonenes neste
			pos->next->prev = nullptr;		// Gj�re forrige verdi om til nullptr
			return head.get();
		}
		else {
			Node* ret = pos->prev;
			pos->next->prev = pos->prev;
			pos->prev->next = std::move(pos->next);	// feil med unque pointer
			return ret;
		}
	}