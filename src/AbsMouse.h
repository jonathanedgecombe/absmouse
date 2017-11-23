#ifndef ABSMOUSE_h
#define ABSMOUSE_h

#include "HID.h"

#if !defined(_USING_HID)

#warning "AbsMouse not compatible with this device and/or firmware"

#else

#define MOUSE_LEFT 0x01
#define MOUSE_RIGHT 0x02
#define MOUSE_MIDDLE 0x04

class AbsMouse_
{
private:
	uint8_t _buttons;
	int _x;
	int _y;
	long _width;
	long _height;
	void buttons(uint8_t b);

public:
	AbsMouse_(void);
	void init(int width = 32767, int height = 32767);
	void report(void);
	void move(int x, int y);
	void press(uint8_t b = MOUSE_LEFT);
	void release(uint8_t b = MOUSE_LEFT);
};
extern AbsMouse_ AbsMouse;

#endif
#endif
