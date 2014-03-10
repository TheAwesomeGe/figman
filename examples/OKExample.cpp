#include <iostream>

#include "../src/FigMan.h"

int main(void) {
	std::cout << "Loading 'example.config' ... "
			<< (figman::loadConfig("examples/example.config") ? "OK" : "FAIL") << std::endl;

	std::cout << "Getting value of 'example.key' ... " << figman::getValue("example.key") << std::endl;
	std::cout << "Getting value of 'example.dir' ... " << figman::getValue("example.dir") << std::endl;
}
