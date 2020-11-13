#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

class PixelArtGenerator {
	PixelArtGenerator(string s);
	~PixelArtGenerator();

	void GenerateArt();

	Mat img;
};