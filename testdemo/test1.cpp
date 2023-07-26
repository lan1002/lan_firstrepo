#include <opencv2/opencv.hpp>
#include <iostream>
#include "learningOpenCV.h"
using namespace cv;
int main()
{
	Mat xiaoxuner = imread("test_img.png", IMREAD_COLOR); // 读入图片，枚举类型可选择读入方式。彩色图、灰度图等
	QuickDemo qd; // 自定义的QuickDemo类
	qd.colorSpace_Demo(xiaoxuner);
	waitKey(0); //0：阻塞程序 大于零则表示阻塞多少毫秒
	return 0;
}