#ifndef ICOMMANDMANAGER_H
#define ICOMMANDMANAGER_H

#include <map>
#include <functional>


class CommandManager
{
public:
    CommandManager();


    std::map<std::string, std::function<void()>> MapCommand;
    void manage(std::string command);
    struct TimeTableInfo;
};

#endif // ICOMMANDMANAGER_H
