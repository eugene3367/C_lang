#include <Stdio.h>
//array : 배열
void main(){
	
	int arr1[10] = {90,65,75,80,60,70,50,95,85,60};	//1차원 배열 1depth array
	int arr2[3][4]= {{10,30,50,20},{35,25,65,45},{45,55,40,20}};	//2차원 배열 2depth array
	int arr3[2][3][2] = {{{30,40},{50,40},{40,20}},{{60,30},{40,30},{20,30}}};	//3차원 배열 3depth array
	
	for(int i=0;i<10;i++){
		printf("%d : %d\n", i, arr1[i]);
	}
		printf("\n\n");
		for(int i=0;i<3;i++){
			for(int j=0;j<4;j++){
				printf("(%d, %d) : %d\n", i, j, arr2[i][j]);
			}
			printf("\n");
		}
				printf("\n\n");
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				for(int k=0;k<2;k++){
					printf("(%d, %d, %d) : %d\n", i, j, k, arr3[i][j][k]);
				}
				printf("\n");
			}
			printf("%d side \n", i);
			printf("\n\n");
		
		}
		
	
}