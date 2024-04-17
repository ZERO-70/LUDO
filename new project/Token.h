#pragma once
#include<iostream>
#include"Track.h"
#include<vector>
using namespace std;
class Token {
	Track_number::Tnum current_track;
	int current_tile;
	bool first_time_on_mytrack;
	bool inside_base;
public:
	Token(Track_number::Tnum track= Track_number::Top, int tile=1, bool firts_time=false, bool in_base=false);
	~Token();
	Track_number::Tnum getTrack();
	int getTile();
	bool getFTOT();
	bool getIB();
	Token& setTrack(const Track_number::Tnum& track);
	Token& setTile(const int& tile);
	Token& setFTOT(const bool& first_time);
	Token& setIB(const bool& in_base);
};
