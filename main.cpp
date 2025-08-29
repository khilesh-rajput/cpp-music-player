#include<iostream>
#include "playlist.h"
using namespace std;
int main(){

int musicPlayerStatus = 1; // this means music player is on
cout << "1 : Prev " << "2 : Next "<< "3 : add"<< "4 : delete";
Playlist myplaylist;
while(musicPlayerStatus){
    int action = 0;
    cin >> action;
    if(action == 1){
        myplaylist.playPrev();
    }else if(action == 2){
        myplaylist.playNext();
    }else if(action == 3){
        myplaylist.addSong();
    }else if(action == 4){
        myplaylist.deleteSong();
    }else{
        cout << " you pressed the wrong button";
    }
}

    return 0;
}