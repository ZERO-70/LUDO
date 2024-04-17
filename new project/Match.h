#pragma once
#include<iostream>
#include"player.h"
#include"Board.h"
#include<vector>
using namespace std;
class Match {
	vector<Player> Players;
	Board obj_Board;
	vector<string> Positions;
	int turn;
};
