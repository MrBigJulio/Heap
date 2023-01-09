#include <iostream>
#include "Heap.h"
using namespace std;

int main() {
	Heap* h = new Heap();
	h->add(5, "a");
	h->print();
	h->add(3, "a");
	h->print();
	h->add(4, "a");
	h->print();
	h->add(10, "a");
	h->print();
	h->add(12, "a");
	h->print();
	h->add(8, "a");
	h->print();
	h->add(1, "a");
	h->print();
	h->add(6, "a");
	h->print();
	h->add(7, "a");
	h->print();
	Data* a = h->del();
	h->print();


}