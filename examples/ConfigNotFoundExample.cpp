#include <iostream>

#include "../src/FigMan.h"

int main(void) {
	std::cout << "Loading 'FNF.config' ... ";

	std::cout << (figman::loadConfig("FNF.config") ? "OK" : "FAIL") << std::endl;
}
