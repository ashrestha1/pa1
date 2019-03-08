#include <iostream>
#include <fstream>
#include "picture.h"
#include "picture_pair.h"

const char SPACE = ' ';

using namespace std;

// Reads a char from ifstream
// Includes space but excludes newline
// Useful for reading character pictures
char get_ch(ifstream &in)
{
	char c = '\0';
	while (in >> noskipws >> c && c == '\n')
		;

	return c;
}
