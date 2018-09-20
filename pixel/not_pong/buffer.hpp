#ifndef BUFFER_HPP_
#define BUFFER_HPP_

#include <iostream>
#include <string>
#include <unistd.h>
#include <termios.h>

class Buffer
{
private:
	struct termios t;

public:
	void off(void)
	{
		tcgetattr(STDIN_FILENO, &t);
		t.c_lflag &= ~ICANON;
		tcsetattr(STDIN_FILENO, TCSANOW, &t);
	}

	void on(void)
	{
		tcgetattr(STDIN_FILENO, &t);
		t.c_lflag |= ICANON;
		tcsetattr(STDIN_FILENO, TCSANOW, &t);
	}
};

#endif
