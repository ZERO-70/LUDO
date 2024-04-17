#include"Track.h"
#include<iostream>
Track::Track(bool enbl, int s, Track_number::Tnum TN) :size{s} {
	setEnabled(enbl).setTrackNO(TN);
}
Track:: ~Track() {

}
Track& Track::setEnabled(bool enbl) {
	this->enabled = enbl;
	return *this;
}
Track& Track::setTrackNO(Track_number::Tnum TN) {
	this->trackNO = TN;
	return *this;
}
bool Track::getEnabled() { return this->enabled; }
int Track::getSize() { return this->size; }
Track_number::Tnum Track::getTrackNO() { return this->trackNO; }