#include "../includes/Clock.h"

std::string Clock::getCurrentTime()
{
    // Aktuelle Zeit vom System in time_point erhalten
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    // In std::time_t umwandeln
    std::time_t now_t = std::chrono::system_clock::to_time_t(now);

    // In ein für Menschen lesbares format bringen 
    std::string currentTime = std::ctime(&now_t);

    // Zeilenumbruch am Ende entfernen
    currentTime.pop_back();

    return currentTime;
}