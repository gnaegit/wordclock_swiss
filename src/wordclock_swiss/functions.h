#ifndef LEDARRAYS_H
#define LEDARRAYS_H

void hideTime(bool day, bool write);

void showTime(int time_s, int time_m, int time_h, int time_d, int time_mo, int time_y)

//Add a word on leds buffer
void addWord(std::vector<int> arr, uint32_t color);

//Display a ring (turn on all leds used to display seconds) of specified color
void showRing(int r, int g, int b);

//Get a text containing a number, and returns a text with a number between 0 and maxi
String byteLimit(String number, int maxi);

//Return substring, with negative last index managed
String substring(String str, int start, int end);

void updateLightLevel();

String getFile(char* path);

bool wasResetExpected();

#endif