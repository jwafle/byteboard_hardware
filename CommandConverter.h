// CommandConverter.h
#ifndef COMMAND_CONVERTER_H
#define COMMAND_CONVERTER_H

#include <string>
#include <map>

enum class Commands {
    NOTHING,
    ACKNOWLEDGE,
    TARE,
    CALIBRATE,
    TIMED_MEASURE
};

std::map<std::string, Commands> stringToCommandMap();

Commands stringToCommand(const std::string& command);

#endif //COMMAND_CONVERTER_H
