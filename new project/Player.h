#pragma once
#include<iostream>
#include"Token.h"
#include<vector>
using namespace std;
class Player {
	static int number_of_players;
	string name;
	const int Player_number;
	bool is_playing;
	vector<int> dye_values;
	bool can_select_token;
	int d_track;
	int d_position;
	vector<Token> Tokens;
	Token selected;
};
