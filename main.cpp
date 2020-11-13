#include <iostream>
#include "PixelArtGenerator.h"
using namespace std;

int main(int argc, char *argv[])
{
	string s;
	if(argc == 2)
	{
		s = argv[1];
	}
	else 
		return 1;

	cout << s << endl;
}
