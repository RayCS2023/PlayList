//
//  playlistdriver.cpp
//  playlistdriver
//
//  Created by Raymond Chen on 2020-01-17.
//  Copyright © 2020 Raymond Chen. All rights reserved.
//

#include <iostream>
#include "playlist.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::stoi;

int main(int argc, const char * argv[]) {
    string line;
    string command;
    string info;
    playlistdriver playlist;
    while (!cin.eof()){
        getline(cin, line);
        if(line == "")
            break;
        command = line.substr(0,1);
        info = line.substr(2);
        
        if(command  == "m"){
            playlist.setSize(stoi(info));
        }
        else if(command == "i"){
            std::size_t semi_colon_index = line.find(";");
            string name = info.substr(0,semi_colon_index-2);
            string artist = info.substr(semi_colon_index-1);
            playlist.add(new Song(artist,name));
       }
        else if(command == "p"){
            playlist.play(stoi(info));
        }
        else if(command == "e"){
            playlist.del(stoi(info));
        }
        else{
            cout << "invalid command" << endl;
        }
    }
    return 0;
}
