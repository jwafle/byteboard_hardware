// CommandConverter.cpp
#include "CommandConverter.h"
#include <stdexcept>

std::map<std::string, Commands> stringToCommandMap() {
    return {
        { "nothing", Commands::NOTHING },
        { "acknowledge", Commands::ACKNOWLEDGE },
        { "tare", Commands::TARE },
        { "calibrate", Commands::CALIBRATE },
        { "timed_measure", Commands::TIMED_MEASURE }
    };
}

Commands stringToCommand(const std::string& command) {
    auto map = stringToCommandMap();
    auto it = map.find(command);
    if (it != map.end()) {
        // If found in the map, return the associated Commands enum value
        return it->second;
    } else {
        // If not found, throw an exception
        throw std::invalid_argument("Invalid command string: " + command);
    }
}
