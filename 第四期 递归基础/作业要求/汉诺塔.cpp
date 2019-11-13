/*汉诺塔问题
有三根杆子A，B，C。A杆上有N个(N > 1)穿孔圆盘，盘的尺寸由下到上依次变小。要求按下列规则将
所有圆盘移至C杆： 每次只能移动一个圆盘； 大盘不能叠在小盘上面。 提示：可将圆盘临时置于B杆，也可将从A杆移出的圆盘重新移回A杆，但都必须遵循上述两条规则.

问：如何移？最少要移动多少次？*/

#include <iostream>
using namespace std;

//函数：盘子的移动
void movement(char x, char y)
{
	cout << "move " << x << " to " << y << endl;
}

//函数：如何移动（递归）
void Hanoi(int n, char a, char b, char c)
{
	if (n == 1) {
		movement(a, c);
	}
	else {
		Hanoi(n - 1, a, c, b);//把(n-1)块盘子由a通过c移动到b上
		movement(a, c);//把第一块移到c上
		Hanoi(n - 1, b, a, c);//再把(n-1)块盘子由b通过a移动到c上
	}
}


int main()
{
	int n;
	cout << "Please enter the number of plate you have: ";
	cin >> n;

	Hanoi(n, 'a', 'b', 'c');

	return 0;
}