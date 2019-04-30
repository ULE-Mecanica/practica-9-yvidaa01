#include <stdio.h>

int main () {
int mat[10][10];
int num=1;

for (int i=0; i<10; i++){
	for (int j=0; j<10; j++){
		mat[i][j]= num;
		num++;
	}
}
for (int i=0; i<10; i++){
	for (int j=0; j<10; j++){
		printf("%d ",mat[i][j]);
	}
	printf("\n");
}

}
