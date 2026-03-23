#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
	int ret;
	ret = a % b;

	if(ret)// 여기서 부터 못 따라썼으 복습하면서 다시 확인해보기
	int a, b, c;
	if(argc != 3){
		cout << "Please insert two numbers" << endl;
		return 0;
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a % b;
	cout << a << " mod " << b << " = " << c << endl;
	
	return 0;
}
