#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main(int argc, char *argv[])
{
	VideoCapture video(0);
	Mat frame;
	while (true) {
		video >> frame;
		imshow("gica", frame);
		waitKey(1);
	}

	return 0;
}