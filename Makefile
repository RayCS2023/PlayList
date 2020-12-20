all: playlistdriver

playlistdriver: playlist.h playlist.cpp Song.h Song.cpp
		g++ -std=c++11 -o playlistdriver playlistdriver.cpp playlist.cpp Song.cpp

run:    playlistdriver 
	./playlistdriver < test01.in > test01.out
	./playlistdriver < test02.in > test02.out
	./playlistdriver < test03.in > test03.out

clean:           
	rm  -f playlistdriver 
