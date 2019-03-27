#include "Linkedlist.h"
#include <iostream>
#include <string>

namespace LinkedList {
	std::ostream& operator<<(std::ostream& os, const Node& node) {		os << node.getValue();		return os;	}	Node* LinkedList::insert(Node *pos, const std::string& value1) {		//std::unique_ptr<Node> N1 = std::make_unique<Node>(value, std::move(pos), nullptr);		if (pos == LinkedList::begin()) {			head = std::make_unique<Node>(value1, std::move(head), nullptr);			pos->prev = begin();		} else {			pos->prev->next = std::make_unique<Node>(value1, move(pos->prev->next), pos->prev);			pos->prev = pos->prev->getNext();		}		return pos->prev;	}	Node* LinkedList::remove(Node *pos) {
		if (pos == LinkedList::begin()) {
			head = std::move(pos->next);	//Gjør head om til neste punkt aka posisjonenes neste
			pos->next->prev = nullptr;		// Gjøre forrige verdi om til nullptr
			return head.get();
		}
		else {
			Node* ret = pos->prev;
			pos->next->prev = pos->prev;
			pos->prev->next = std::move(pos->next);	// feil med unque pointer
			return ret;
		}
	}	Node* LinkedList::find(const std::string& value) {		for (Node* k = begin(); k != end(); k = k->getNext()) {			if (k->value == value) return k;		}		return tail;	}	void LinkedList::remove(const std::string& value) {		remove(find(value));	}}