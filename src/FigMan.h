#ifndef FIGMAN_H_
#define FIGMAN_H_

#include <fstream>
#include <map>
#include <string>
#include <algorithm>
#include <iostream>

namespace figman {

/**
 * Loads a config file.
 *
 * @param fileName The name of the file.
 * @return True if the file was correctly loaded and false otherwise.
 */
bool loadConfig(const std::string fileName);

/**
 * Checks whether a given key exists.
 *
 * @param key The key.
 * @return True if the key exists and false otherwise.
 */
bool hasKey(const std::string key);

/**
 * Gets the value for a given key.
 *
 * @param key The key.
 * @return The corresponding value or NULL if the key does not exist.
 */
std::string getValue(const std::string key);

}

#endif
