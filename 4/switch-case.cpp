#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int x{};
	cout << "Enter a number: ";
	cin >> x;
	switch (x) {
		case 1:
		cout << "YOu entered 1" << endl;
		break; // break가 없어지면 무슨 일이 일어날지 생각해보기
		case 2:
		cout << "YOu entered 2" << endl;
		break;
		default:
		cout << "YOu entered unknown number" << endl;
	}
	return 0;
}

