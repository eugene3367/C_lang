#include <Stdio.h>
#

/* 입력된 두 수의 큰 값을 찾아서 반환하는 함수 작성
 * 함수 이름 : bigNum
 * 입력 변수 : a, b
 * 결과 변수 : res
*/

void main(){
	int a, b, res;
	scanf("%d", &a);
	scanf("%d", &b);
	res = bigNum(a,b);
	printf("big number : %d\n", res);
	
}

int bigNum(int num1, int num2){
		if(num1>num2) return num1;
	else if(num1<num2)return num2;
	else
		printf(":)");
}