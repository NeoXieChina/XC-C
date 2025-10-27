#include <stdio.h>
#include <math.h>
int main() {
	//定义
	//定义直角边
	float rightAngleEdge1 = 0;
	float rightAngleEdge2 = 0;
	//定义斜边
	float hypotenuseOfRightTriangle = 0;
	//定义周长
	float circumferenceOfRightTriangle = 0;
	//定义面积
	float areaOfRightTriangle = 0;

	//输入直角边
	printf_s("请输入第一条直角边长度：");
	scanf_s("%f", &rightAngleEdge1);
	printf_s("\n请输入第二条直角边长度：");
	scanf_s("%f", &rightAngleEdge2);
	
	//处理
	//计算斜边，根据x^2+y^2=z^2
	hypotenuseOfRightTriangle = sqrt(pow(rightAngleEdge1, 2) + pow(rightAngleEdge2, 2));
	//计算三角形周长，即三条边的和
	circumferenceOfRightTriangle = rightAngleEdge1 + rightAngleEdge2 + hypotenuseOfRightTriangle;
	//计算三角形的面积
	areaOfRightTriangle = rightAngleEdge1 + rightAngleEdge2;
	
	//输出
	printf_s("\n您输入的三角形直角边分别是%.2f和%.2f,斜边为%.2f，周长是%.2f,面积为%.2f。", rightAngleEdge1, rightAngleEdge2, hypotenuseOfRightTriangle, circumferenceOfRightTriangle, areaOfRightTriangle);
	return 0;
}
