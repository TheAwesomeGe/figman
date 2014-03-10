#ifndef CONFIGMANAGER_H_
#define CONFIGMANAGER_H_

#include <fstream>
#include <map>
#include <string>
#include <algorithm>

namespace figman {

/**
 * Loads a config file.
 *
 * @param fileName The name of the file.
 */
static void loadConfig(const std::string fileName);

/**
 * Gets the value for a given key.
 *
 * @param key The key.
 * @return The corresponding value or NULL if the key does not exist.
 */
static std::string getValue(const std::string key) const;

}

#endif
