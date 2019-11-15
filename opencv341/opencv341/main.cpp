#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;






int main()
{
	//重新开始，在0 处修改！
	Mat src;// , dst, dst2;
	src = imread("d:/image/result.bmp");

	//我在1处修改！

	Mat dst,dst2;
	Canny(src, dst, 30, 120);
	Canny(src, dst2, 3, 120);
	system("pause");
	return 0;
}

