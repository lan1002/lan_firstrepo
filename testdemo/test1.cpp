#include <opencv2/opencv.hpp>
#include <iostream>
#include "learningOpenCV.h"
using namespace cv;
int main()
{
	Mat xiaoxuner = imread("test_img.png", IMREAD_COLOR); // ����ͼƬ��ö�����Ϳ�ѡ����뷽ʽ����ɫͼ���Ҷ�ͼ��
	QuickDemo qd; // �Զ����QuickDemo��
	qd.colorSpace_Demo(xiaoxuner);
	waitKey(0); //0���������� ���������ʾ�������ٺ���
	return 0;
}