#ifndef CONFIGMANAGER_H_
#define CONFIGMANAGER_H_

#include <fstream>
#include <map>
#include <string>
#include <algorithm>

#include "UnknownKeyException.h"

namespace figman {

/**
 * Loads a config file.
 *
 * @param fileName The name of the file
 */
static void loadConfig(std::string fileName);

/**
 * Gets the value for a given key.
 *
 * @param key The key
 * @return The value
 */
static std::string getValue(std::string key);

}

#endif
