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
	Board();
	Board(int rows,int cols,vector<Track> Tracks) {
		this->cols = cols;
		this->rows = rows;
		this->Tracks = Tracks;
	}
	void display_board();
};
