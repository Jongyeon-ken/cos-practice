#include<iostream>
#define BUFLEN 10
using namespace std;
int main(int argc, char *argv[])
{
	int arr[BUFLEN];
	int *p;
	int a, i;

	for (i=0; i<BUFLEN; i++)
		arr[i] = 10-i;
	
	a = 5;
	p = &a; // 이 뒤부터 복습하면서 이해하세요
        cout << "a = " << a << endl;
	cout << "p = " << p << endl;

	*p = 10;
	
	cout << " a = " << a << endl;
	cout << "p = " << p << endl;

	return 0;
}
