#include <iostream>

#include "../src/FigMan.h"

int main(void) {
	std::cout << "Loading 'example.config' ... "
			<< (figman::loadConfig("examples/example.config") ? "OK" : "FAIL") << std::endl;

	std::cout << "Looking for key 'example.knf' ... "
				<< (figman::hasKey("example.knf") ? "OK" : "FAIL") << std::endl;

}
