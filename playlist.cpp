#include "playlist.h"
#include <string>
struct Song{
    std::string title;
    Song* prev;
    Song* next;

    Song(std::string name){
        title = name;
        prev = nullptr;
        next = nullptr;
    }
};