#include"PixelArtGenerator.h"
#include<iostream>

PixelArtGenerator::PixelArtGenerator(string s)
{
	img = imread(s,IMREAD_COLOR);
}

PixelArtGenerator::~PixelArtGenerator()
{

}

void PixelArtGenerator::GenerateArt(int scaleFactor)
{

	Mat newImg = img;

	cout << img.rows << " " << img.cols << endl;
	for(int y = 0; y < img.rows; y+=scaleFactor)
	{
		for(int x = 0; x < img.cols; x+=scaleFactor)
		{
			Vec3b colors;
			Vec3b color;
			cout << x << " " << y << " ";
			for(int i = 0; i < scaleFactor; i++)
			{
				for(int j = 0; j < scaleFactor; j++)
				{
					color = img.at<Vec3b>(y+i,x+j);
					colors.val[0] += color.val[0]/scaleFactor/scaleFactor;
					colors.val[1] += color.val[1]/scaleFactor/scaleFactor;
					colors.val[2] += color.val[2]/scaleFactor/scaleFactor;
				}
			}
			for(int i = 0; i < scaleFactor; i++)
				for(int j = 0; j < scaleFactor; j++)
				{
					newImg.at<Vec3b>(y+i,x+j) = colors;
				}
		}
	}
	cout << endl;
	imshow("Display Window",newImg);
	waitKey(0);
}