//
//  playlistdriver.h
//  playlistdriver
//
//  Created by Raymond Chen on 2020-01-09.
//  Copyright © 2020 Raymond Chen. All rights reserved.
//

#ifndef playlistdriver_h
#define playlistdriver_h

#include "Song.h"

class playlistdriver{
public:
    playlistdriver();
    ~playlistdriver();
    

    void setSize(int size);
    void add(Song* song);
    void play(int pos);
    void del(int pos);
private:
    Song** playlist;
    int total_songs;
    int array_size;
};

#endif /* playlistdriver_h */
