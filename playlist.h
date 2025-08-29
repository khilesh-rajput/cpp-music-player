#include <string>

struct Song{
    std::string title;
    Song* prev;
    Song* next;

    Song(std::string name) {
        title = name;
        prev = nullptr;
        next = nullptr;
    }
};
class Playlist{

    private:
    Song* head;
    Song* tail;
    Song* current;

    public:
    Playlist();
    void addSong();
    void deleteSong();
    void displayPlaylist();
    void playNext();
    void playPrev();
};
