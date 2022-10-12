#include <Stdio.h>
//구구단을 출력하는 문제
//이중 for문을 활용하여 아래와 같이 구구단을 출력
/*
2*1=2	3*1=3.... 9*1=9
2*2=4	3*2=6....
.
.
2*9=18			  9*9=81
*/

void main(){
	printf("*************************\n");
	printf("\t\tGUGUDAN \n");
	printf("*************************\n");
	
	for(int j=1;j<=9;j++){
		for(int i=2;i<=9;i++){
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
	
}
