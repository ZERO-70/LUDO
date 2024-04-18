#include"Token.h"
#include<iostream>
Token :: Token(Track_number::Tnum track, int tile, bool first_time, bool in_base) {
	setFTOT(first_time).setIB(in_base).setTrack(track).setTile(tile);
}
Token :: ~Token() {

}
Track_number::Tnum Token::getTrack() {
	return this->current_track;
}
int Token:: getTile() {
	return this->current_tile;
}
bool Token::getFTOT() {
	return this->first_time_on_mytrack;
}
bool Token::getIB() {
	return this->inside_base;
}
Token& Token:: setFTOT(const bool& first_time) {
	this->first_time_on_mytrack = first_time;
	return *this;
}
Token& Token:: setIB(const bool& in_base) {
	this->inside_base = in_base;
	return *this;
}
Token& Token:: setTrack(const Track_number::Tnum& track) {
	current_track = track;
	return *this;
}
Token& Token::setTile(const int& tile) {
	if (tile < 1 or tile > 72)
	{
		this->current_tile = 1;
		return *this;
	}
	this->current_tile = tile;
	return *this;
}