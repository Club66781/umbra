#pragma once

class Screen;

class Applications
{
public:
	static Screen* GetScreen();

public:
	Applications();
	~Applications();

public:
	int Run();

private:
	static Screen* m_screen;

};

