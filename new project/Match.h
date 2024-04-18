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
	Match(vector<Player> Players,Board obj_Board){
		this->Players = Players;
		this->obj_Board = obj_Board;
		this->turn = 0;
	}
	void init() {
		cout << "Enter the number of Players (max 4):" << endl;
		int numberofplayers;
		cin >> numberofplayers;
		Player::setNumberOfPlayers(numberofplayers);
		cout << "Enter the number of Tokens (max 4):" << endl;
		int numberoftokens;
		cin >> numberoftokens;
		for (int i = 0; i < Player::getNumberOfPlayers();i++) {
			cout << "Enter the name of Player " << i << ": ";
			string name;
			cin >> name;
			vector<Token> Tokens(numberoftokens);
			//needs to initialize all tokens, wating for updates...
			for (int i = 0; i < numberoftokens;i++) {

			}
			vector<int> dye_values;
			Player p(numberofplayers, name, i, true, {}, false, -1, -1, Tokens, nullptr);
			Players.push_back(p);
		}


		
	}
};
