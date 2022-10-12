#include <Stdio.h>
//함수호출 function
void main(){
	fnc1();
	fnc2(30);
	int a=fnc3();
	int b=fnc4(40);
}

void fnc1(){
	printf("fnc1 call - no parameter and no return \n");
}

void fnc2(int num1){
	printf("fnc2 call - using parameter and no return \n");
}

int fnc3(){
	printf("fnc3 call - no parameter using return \n");
	return 1004;
}

int fnc4(int num1){
	printf("fnc4 call - using parameter using return \n");
	return 18 + num1;
}