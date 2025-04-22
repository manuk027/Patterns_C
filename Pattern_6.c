/*

A
B B
C C C
D D D D
E E E E E

*/


#include<stdio.h>
int main(){
	int i, j;
	char arr[5]={'A', 'B', 'C', 'D', 'E'};
	for (i=0; i<5; i++){
		for (j=0; j<=i; j++){
			printf("%c ", arr[i]);
		}
		printf("\n");
	}
}
