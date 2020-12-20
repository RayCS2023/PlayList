//
//  Song.cpp
//  playlistdriver
//
//  Created by Raymond Chen on 2020-01-15.
//  Copyright © 2020 Raymond Chen. All rights reserved.
//

#include "Song.h"

Song::Song(const string &artist, const string &name){
    this->artist = artist;
    this->name = name;
}

string Song::get_name() const{
    return name;
}

string Song::get_artist() const{
    return artist;
}


bool Song::operator==(const Song &song){
    if(name == song.get_name() && artist == song.get_artist())
        return true;
    else
        return false;
}

Song::Song(const Song &song_to_copy){
    artist = song_to_copy.get_artist();
    name = song_to_copy.get_name();
}

Song &Song::operator=(const Song &song){
    string temp_artist = artist;
    string temp_name = name;
    artist = song.get_artist();
    name = song.get_name();
    return *this;
}
