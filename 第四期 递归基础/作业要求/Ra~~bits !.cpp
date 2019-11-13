//兔子问题（斐波那契函数）

#include<iostream>
using namespace std;

int rabit(int n) 
{
	if (n == 0 || n == 1)
		return 1;
	else {
	return rabit(n - 1) + rabit(n - 2);
    }
}

int main()
{
	int m;
	cout << "How many month have it passeed? " << endl;
	cin >> m;

	cout << "there are " << rabit(m)<<" couples of rabits."<<endl;

	return 0;
}
