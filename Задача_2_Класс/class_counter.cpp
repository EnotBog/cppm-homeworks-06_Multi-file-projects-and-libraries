#include "class_counter.h"


Counter::Counter() { this->counter = 0; }
	void Counter::set_counter(int x) { counter = x; }
	void Counter::up_counter() { counter++; }
	void Counter::down_counter() { counter--; }
	void Counter::print_counter() { std::cout << counter << std::endl; }

