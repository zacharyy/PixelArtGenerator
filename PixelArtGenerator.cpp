#include"PixelArtGenerator.h"

PixelArtGenerator::PixelArtGenerator(string s)
{
	img = imread(s,IMREAD_COLOR);
}

PixelArtGenerator::~PixelArtGenerator()
{

}

void PixelArtGenerator::GenerateArt()
{

}