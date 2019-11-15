#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;






int main()
{


	//我先在1上面进行了第二次修改额！！！
	//我先在1上面进行了修改额！！！！
	Mat src;// , dst, dst2;
	src = imread("d:/image/result.bmp");

	Mat dst,dst2;
	Canny(src, dst, 30, 120);
	Canny(src, dst2, 3, 120);

	system("pause");
	return 0;
}

