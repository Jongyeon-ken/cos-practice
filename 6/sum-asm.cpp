#include <iostream>
using namespace std;

int run() {
	    int result;
	        __asm__(
		        "movl $100, %0"  // 100을 변수 result(%0)에 대입
			        : "=r" (result)  // 출력 피연산자: result 변수에 결과를 저장
				    );
		    return result;
}

int main() { 
	    cout << "The skeleton code for the assembly language" << endl;
	        cout << "return value: " << run() << endl; 
		    return 0;
}
