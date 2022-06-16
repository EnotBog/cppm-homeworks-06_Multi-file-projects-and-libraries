#include "Header.h"

class Counter
{
public:
	Counter() { this->counter = 0; }
	void set_counter(int x) { counter = x; }
	void up_counter() { counter++; }
	void down_counter() { counter--; }
	void print_counter() { std::cout << counter << std::endl; }

private:
	int counter;



};
