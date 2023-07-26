#include "learningOpenCV.h"

void QuickDemo::colorSpace_Demo(Mat& image) {
	if (image.empty())
	{
		std::cout << "无法打开图片" << std::endl;
		return;
	}


	namedWindow("RGB图像", WINDOW_FREERATIO); // 创建新窗口，自由大小
	imshow("RGB图像", image);  // 显示图像


	Mat xiaoxuner_hsv, xiaoxuner_gray; // 矩阵matrix,创建两个矩阵用来存放HSV图像（色相、饱和度、明度）和灰度图像（255全白、0全黑）


	namedWindow("HSV图像", WINDOW_FREERATIO); // 创建新窗口，自由大小
	cvtColor(image, xiaoxuner_hsv, COLOR_BGR2HSV); // 色彩空间转换，RGB->HSV：image->xiaoxuner_hsv
	imshow("HSV图像", xiaoxuner_hsv);


	namedWindow("GRAY图像", WINDOW_AUTOSIZE); // 创建新窗口，自动大小（默认尺寸）
	cvtColor(image, xiaoxuner_gray, COLOR_BGR2GRAY); // 色彩空间转换，RGB->GRAY：image->xiaoxuner_gray
	imshow("GRAY图像", xiaoxuner_gray);


	imwrite("xiaoxuner_hsv.png", xiaoxuner_hsv); // 保存图片，暂时注释
	imwrite("xiaoxuner_gray.png", xiaoxuner_gray); // 保存图片，暂时注释
}


//cv::Rect(int x, int y, int width, int height)  Rect（左上角x坐标 ， 左上角y坐标，矩形的宽，矩形的高）
cv::Point2f a;
