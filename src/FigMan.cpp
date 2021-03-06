#include "FigMan.h"

namespace figman {

std::map<std::string, std::string> config;

bool loadConfig(const std::string fileName) {
	config.clear();
	std::string line;
	std::ifstream file(fileName.c_str());

	if(!file.is_open())
		return false;

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

	return true;
}

bool hasKey(const std::string key) {
	std::map<std::string, std::string>::iterator it = config.find(key);
	return it != config.end();
}

std::string getValue(const std::string key) {
	std::map<std::string, std::string>::iterator it = config.find(key);
	if(it != config.end())
		return it->second;
	else return NULL;
}

}
