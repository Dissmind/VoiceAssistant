#include "commandmanager.h"
#include "scripts.h"

#include <functional>

CommandManager::CommandManager()
{
//    std::function<void()> command = test;

    // Инициализация карты
    MapCommand["test"] = test;
}
