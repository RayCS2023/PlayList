//
//  Song.hpp
//  playlistdriver
//
//  Created by Raymond Chen on 2020-01-15.
//  Copyright © 2020 Raymond Chen. All rights reserved.
//

#ifndef Song_hpp
#define Song_hpp

#include <iostream>
using std::string;

class Song {
public:
    Song(const string &artist, const string &name);
    Song(const Song &song_to_copy);
    Song &operator=(const Song &song );
    bool operator==(const Song &song );
    string get_artist() const;
    string get_name() const;
    
private:
    string artist;
    string name;
};

#endif /* Song_hpp */
