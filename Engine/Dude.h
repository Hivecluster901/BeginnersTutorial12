#pragma once
#include "Graphics.h"
#include "MainWindow.h"

class Dude
{
public:
	void ClampToScreen();
	void Update(MainWindow& wnd);
	Dude(int x, int y);
	void Draw(Graphics& gfx) const;
	int GetRelativeXcoord(int x);
	int GetRelativeYCoord(int y);
private:
	int x;
	int y;
	static constexpr int width = 20;
	static constexpr int height = 20;
};