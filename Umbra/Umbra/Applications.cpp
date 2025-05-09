#include "Applications.h"

#include "Screen.h"

Screen* Applications::m_screen = nullptr;

Screen* Applications::GetScreen()
{
	return m_screen;
}

Applications::Applications()
{
	m_screen = new Screen();
}

Applications::~Applications()
{
	delete m_screen;
	m_screen = nullptr;
}

int Applications::Run()
{
	// Attempt to initialise the window
	// if we fail return failure
	if (!m_screen->Open())
	{
		return EXIT_FAILURE;
	}

	while (!WindowShouldClose())
	{
		m_screen->NewFrame();
		m_screen->EndFrame();
	}


	return 0;
}
