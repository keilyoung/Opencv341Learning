#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;






int main()
{
	//���¿�ʼ����0 ���޸ģ�
	Mat src;// , dst, dst2;
	src = imread("d:/image/result.bmp");

	//����1���޸ģ�

	Mat dst,dst2;
	Canny(src, dst, 30, 120);
	Canny(src, dst2, 3, 120);
	system("pause");
	return 0;
}

