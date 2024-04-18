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
public:
	void init() {
		cout << "Enter the number of Players (max 4):" << endl;
		int numberofplayers;
		cin >> numberofplayers;
		Player::setNumberOfPlayers(numberofplayers);
	}
};
