//
//  main.cpp
//  playlistdriver
//
//  Created by Raymond Chen on 2020-01-09.
//  Copyright © 2020 Raymond Chen. All rights reserved.
//

#include <iostream>
#include "playlist.h"

using std::string;
using std::cout;
using std::endl;
using std::size_t;

playlistdriver::playlistdriver(){
    total_songs = 0;
}

playlistdriver::~playlistdriver(){
    for(int i = 0; i < total_songs; i++){
        delete playlist[i];
    }
    delete [] playlist;
    playlist = nullptr;
}

void playlistdriver::setSize(int size){
    array_size = size;
    playlist = new Song* [size];
    for(int i = 0; i < array_size; i++){
        playlist[i] = nullptr;
    }
    cout << "success" << endl;
}

void playlistdriver::add(Song* song){
    bool found = false;
    for(int i = 0; i < total_songs; i++){
        if(*playlist[i] == *song){
            found = true;
            break;
        }
    }

    if(total_songs < array_size && !found){
        playlist[total_songs] = song;
        total_songs++;
        cout << "success" << endl;
    }
    else{
        cout << "can not insert " << song->get_name() << ";" << song->get_artist() << endl;
    }
}

void playlistdriver::play(int pos){
    if(pos > total_songs){
        cout << "can not play " << pos << endl;
    }
    else{
        cout << "played " << pos << " " << playlist[pos-1]->get_name() << ";" << playlist[pos-1]->get_artist() << endl;
    }
}

void playlistdriver::del(int pos){
    if(pos > total_songs){
        cout << "can not erase " << pos << endl;
    }else{
        for(int i = pos - 1; i < total_songs-1; i++){
            *playlist[i] = *playlist[i+1];
        }
        playlist[total_songs-1] = nullptr;
        total_songs--;
        cout << "success" << endl;
    }
}

