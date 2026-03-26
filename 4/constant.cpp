#include <iostream>
#define BUFLEN 5 // BUFLEN을 사용하면 메모리 및 시스템, 코딩 관리 차원에서 훨씬 효율적임
using namespace std;
int main(int argc, char *argv[])
{
	int arr[BUFLEN];
	int i;

	for (i=0; i<10; i++){
		arr[i] = 10-i;
	} 
		cout << "arr[0] = " << arr[0] << endl;
		cout << "arr[3] = " << arr[3] << endl;
		cout << "arr[7] = " << arr[7] << endl;

		return 0;
}
