#include <stdio.h>
int a = 100;//全局變量——{}外
int main()
{
	//int age = 19;\\創建變量
	//double weight = 56.5;

	//age = age + 1;運算
	//weight = weight + 2;
	//printf("%d\n", age);
	//printf("%lf\n", weight);
	int a = 10;//局部——{}内
	printf("%d\n", a);//a重複輸局部


	return 0;
}