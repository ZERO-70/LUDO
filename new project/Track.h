#pragma once
#include<iostream>
#include<vector>
using namespace std;
namespace Track_number {
	enum Tnum {
		Top=1,Down,Left,Right
	};
}
class Track {
	bool enabled;
	const int size;
	Track_number::Tnum trackNO;
public:
	Track(bool enbl = false, int s = 0, Track_number::Tnum TN = Track_number::Top);
	~Track();
	Track& setEnabled(bool snbl);
	Track& setTrackNO(Track_number::Tnum TN);
	bool getEnabled();
	int getSize();
	Track_number::Tnum getTrackNO();
};
