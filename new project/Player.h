#pragma once
#include<iostream>
#include"Token.h"
#include<vector>
using namespace std;
class Player {
	static int number_of_players;
	string name;
	int Player_number;
	bool is_playing;
	vector<int> dye_values;
	bool can_select_token;
	int d_track;
	int d_position;
	vector<Token> Tokens;
	Token *selected;
public:
    Player(int number_of_players, string name, int player_number, bool is_playing,
        vector<int> dye_values, bool can_select_token, int d_track, int d_position,
        vector<Token>tokens, Token *selected);
    static int getNumberOfPlayers();
    static void setNumberOfPlayers(int value);
    std::string getName() const;
    void setName(const std::string& value);
    int getPlayerNumber() const;
    void setPlayerNumber(int value);
    bool getIsPlaying() const;
    void setIsPlaying(bool value);
    std::vector<int> getDyeValues() const;
    void setDyeValues(const std::vector<int>& value);
    bool getCanSelectToken() const;
    void setCanSelectToken(bool value);
    int getDTrack() const;
    void setDTrack(int value);
    int getDPosition() const;
    void setDPosition(int value);
    std::vector<Token> getTokens() const;
    void setTokens(const std::vector<Token>& value);
	Token getSelectedToken() const;
	void setSelectedToken(const Token& value);
};
