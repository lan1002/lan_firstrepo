#include "learningOpenCV.h"

void QuickDemo::colorSpace_Demo(Mat& image) {
	if (image.empty())
	{
		std::cout << "�޷���ͼƬ" << std::endl;
		return;
	}


	namedWindow("RGBͼ��", WINDOW_FREERATIO); // �����´��ڣ����ɴ�С
	imshow("RGBͼ��", image);  // ��ʾͼ��


	Mat xiaoxuner_hsv, xiaoxuner_gray; // ����matrix,�������������������HSVͼ��ɫ�ࡢ���Ͷȡ����ȣ��ͻҶ�ͼ��255ȫ�ס�0ȫ�ڣ�


	namedWindow("HSVͼ��", WINDOW_FREERATIO); // �����´��ڣ����ɴ�С
	cvtColor(image, xiaoxuner_hsv, COLOR_BGR2HSV); // ɫ�ʿռ�ת����RGB->HSV��image->xiaoxuner_hsv
	imshow("HSVͼ��", xiaoxuner_hsv);


	namedWindow("GRAYͼ��", WINDOW_AUTOSIZE); // �����´��ڣ��Զ���С��Ĭ�ϳߴ磩
	cvtColor(image, xiaoxuner_gray, COLOR_BGR2GRAY); // ɫ�ʿռ�ת����RGB->GRAY��image->xiaoxuner_gray
	imshow("GRAYͼ��", xiaoxuner_gray);


	imwrite("xiaoxuner_hsv.png", xiaoxuner_hsv); // ����ͼƬ����ʱע��
	imwrite("xiaoxuner_gray.png", xiaoxuner_gray); // ����ͼƬ����ʱע��
}


//cv::Rect(int x, int y, int width, int height)  Rect�����Ͻ�x���� �� ���Ͻ�y���꣬���εĿ����εĸߣ�
cv::Point2f a;
