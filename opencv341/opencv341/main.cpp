#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;




int main()
{
	Mat src;// , dst, dst2;
	src = imread("d:/image/result.bmp");
	vector<Mat> channels;
	split(src, channels);
	Mat dst1 = channels.at(1);

	Mat dst2;
	vector<Mat> m;
	m.push_back(channels[1]);
	m.push_back(channels[2]);
	m.push_back(channels[0]);
	merge(m, dst2);



	system("pause");
	return 0;
}

