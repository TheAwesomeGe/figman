#include "FigMan.h"

namespace figman {

static std::map<std::string, std::string> config;

void loadConfig(const std::string fileName) {
	config.clear();
	std::string line;
	std::ifstream file(fileName.c_str());

	while(std::getline(file, line)) {
		line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end()); // Remove whitespaces

		if(line[0] == '#') // Ignore comments
			continue;

		std::size_t split = line.find('=');
		std::string key = line.substr(0, split);

		if(key.empty()) // No empty keys
			continue;

		std::string value = line.substr(split + 1);

		config[key] = value;
	}
}

std::string getValue(const std::string key) const {
	std::map<std::string, std::string>::iterator it = config.find(key);
	if(it != config.end())
		return it->second;
	else return NULL;
}

}
