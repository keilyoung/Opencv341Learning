#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;






int main()
{
	Mat src;// , dst, dst2;
	src = imread("d:/image/result.bmp");

	Mat dst,dst2;
	Canny(src, dst, 30, 120);
	Canny(src, dst2, 3, 120);


	//我现在在0上面进行修改！！！！


	//更新？
	system("pause");
	return 0;
}

