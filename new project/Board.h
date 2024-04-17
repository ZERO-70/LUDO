#pragma once
#include<iostream>
#include<vector>
#include"Track.h"
using namespace std;
class Board {
	int rows;
	int cols;
	vector<Track> Tracks;
public:
	void display_board();
};
