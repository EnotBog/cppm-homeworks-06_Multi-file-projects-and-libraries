#pragma once
#include <iostream>


class Counter
{
public:
	Counter();
	void set_counter(int x);
	void up_counter();
	void down_counter();
	void print_counter();

private:
	int counter;



};