#include "Player.h" 

int Player::number_of_players = 0;
Player::Player(int number_of_players, string name, int player_number, bool is_playing,
    vector<int> dye_values, bool can_select_token, int d_track, int d_position,
    vector<Token>tokens, Token *selected) {
    this->can_select_token = can_select_token;
    this->dye_values = dye_values;
    this->d_position = d_position;
    this->d_track = d_track;
    this->is_playing = is_playing;
    this->name = name;
    this->number_of_players++;
    this->Player_number = number_of_players;
    this->selected = selected;
}
int Player::getNumberOfPlayers() {
    return number_of_players;
}
void Player::setNumberOfPlayers(int value) {
    number_of_players = value;
}
std::string Player::getName() const {
    return name;
}
void Player::setName(const std::string& value) {
    name = value;
}
int Player::getPlayerNumber() const {
    return Player_number;
}
void Player::setPlayerNumber(int value) {
    Player_number = value;
}
bool Player::getIsPlaying() const {
    return is_playing;
}
void Player::setIsPlaying(bool value) {
    is_playing = value;
}
std::vector<int> Player::getDyeValues() const {
    return dye_values;
}
void Player::setDyeValues(const std::vector<int>& value) {
    dye_values = value;
}
bool Player::getCanSelectToken() const {
    return can_select_token;
}
void Player::setCanSelectToken(bool value) {
    can_select_token = value;
}
int Player::getDTrack() const {
    return d_track;
}
void Player::setDTrack(int value) {
    d_track = value;
}
int Player::getDPosition() const {
    return d_position;
}
void Player::setDPosition(int value) {
    d_position = value;
}
std::vector<Token> Player::getTokens() const {
    return Tokens;
}
void Player::setTokens(const std::vector<Token>& value) {
    Tokens = value;
}
Token Player::getSelectedToken() const {
    return selected;
}
void Player::setSelectedToken(const Token& value) {
    selected = value;
}
