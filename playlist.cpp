#include "playlist.h"
#include <iostream>
using namespace std;

Playlist:: Playlist(){
    head = nullptr;
    tail = nullptr;
    current = nullptr;
}

void Playlist::addSong() {
    string name;
    cout << "Enter song name : ";
    cin.ignore();
    getline(cin,name);

    Song* newSong = new Song(name);

    if(head == nullptr){
        head = newSong;
        tail = newSong;
        current = newSong;
    }else{
        tail->next = newSong;
        newSong->prev = tail;
        tail = newSong;
    }
}


void Playlist::playNext(){

    if(current == nullptr) {
        cout << "Playlist is empty.\n";
        return;
    }

    if(current->next == nullptr){
        cout << "this is the last song of the playlist, add more songs" << endl;
        return;
    }else{
        current = current->next;
    }
    cout << "Now playing: " << current->title << endl;
}

void Playlist::playPrev(){

    if(current == nullptr) {
        cout << "Playlist is empty" << endl;
        return;
    }

    if(current->prev == nullptr){
        cout << "this is first song of the playlist";
    }else{
        current = current->prev;
        cout << "Now playing: " << current->title << endl;
    }
}    

void Playlist::deleteSong(){
    cout << "not implemented yet";
}

void Playlist::displayPlaylist(){
    cout << "not implemented yet";
}

