#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

class PixelArtGenerator {
	public:
	PixelArtGenerator(string s);
	~PixelArtGenerator();
	void GenerateArt(int);

	Mat img;
};