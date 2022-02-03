#pragma once
#include <raylib.h>

#define STYLE_DARK	'd'
#define STYLE_LIGHT 'l'

struct Theme {
	//every color has two modes: dark and light
	Color		col_1[2], col_2[2], col_3[2];
	Color		fromhex(const char* hex);
	const char* tohex(Color col);

	//every theme has a style being used at the moment
	enum {
		style_dark	= 0,
		style_light = 1,
	}style;

public:
	void	setTheme(Color col_1, Color col_2, Color col_3,char style);
	void	setTheme(const char* hex_1, const char* hex_2, const char* hex_3,char style);
	void	setStyle(char style);
	char	getStyle();
	Theme	getTheme();
	void	setTheme(Theme theme);
};

class Settings{
	int			width, height;
	const char* name, buildstr;
	Theme		theme;
};

