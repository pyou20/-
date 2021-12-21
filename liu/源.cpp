#include<stdio.h>

int main() {
	void show(int a[4][3], int b[4][3], int* c, int* d);
	int areyouok(int a[4][3], int b[4][3], int* c, int* d, int* marktwo);
	int whichone(int a[4][3], int b[4][3], int* c, int* d);
	void dododo(int x, int y, int a[4][3], int b[4][3], int* c, int* d);


	int Need[4][3] = { 3,2,2,6,1,3,3,1,4,4,2,2 };
	int Allocation[4][3] = { 1,0,0,6,1,2,2,1,1,0,0,2 };
	int Resource[3] = { 9,3,6 };
	int Available[3] = { 0,1,1 };
	int marktwo[4] = { 0,0,0,0 };
	int i, j, yesdo, theone;


	show(Need, Allocation, Resource, Available);
	printf("\n");
	printf("\n");
	printf("\n");

	yesdo = areyouok(Need, Allocation, Resource, Available, marktwo);
	theone = whichone(Need, Allocation, Resource, Available);
	dododo(yesdo, theone, Need, Allocation, Resource, Available);
	show(Need, Allocation, Resource, Available);
	printf("\n");
	printf("\n");
	printf("\n");

	yesdo = areyouok(Need, Allocation, Resource, Available, marktwo);
	theone = whichone(Need, Allocation, Resource, Available);
	dododo(yesdo, theone, Need, Allocation, Resource, Available);
	show(Need, Allocation, Resource, Available);
	printf("\n");
	printf("\n");
	printf("\n");

	yesdo = areyouok(Need, Allocation, Resource, Available, marktwo);
	theone = whichone(Need, Allocation, Resource, Available);
	dododo(yesdo, theone, Need, Allocation, Resource, Available);
	show(Need, Allocation, Resource, Available);
	printf("\n");
	printf("\n");
	printf("\n");

	yesdo = areyouok(Need, Allocation, Resource, Available, marktwo);
	theone = whichone(Need, Allocation, Resource, Available);
	dododo(yesdo, theone, Need, Allocation, Resource, Available);
	show(Need, Allocation, Resource, Available);

	return 0;
}

int areyouok(int a[4][3], int b[4][3], int* c, int* d, int* marktwo) {
	int i;

	for (i = 0; i < 4; i++) {
		if (marktwo[i] == 1) {
			continue;
		}
		if (a[i][0] <= b[i][0] + d[0]&& a[i][1] <= b[i][1] + d[1]&& a[i][2] <= b[i][2] + d[2]) {
			marktwo[i] = 1;
			break;
		}
	}
	return i;
}

int whichone(int a[4][3], int b[4][3], int* c, int* d) {
	int i, j;
	for (i = 0; i < 4; i++){
		if (a[i][0] <= b[i][0] + d[0] && a[i][1] <= b[i][1] + d[1] && a[i][2] <= b[i][2] + d[2]) {
			break;
		}
	}
	return i;
}

void show(int a[4][3], int b[4][3], int* c, int* d) {
	int i, j;
	printf("Need¾ØÕó:");
	printf("\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
			if (j == 2) {
				printf("\n");
			}
		}
	}
	printf("Allocation¾ØÕó:");
	printf("\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", b[i][j]);
			if (j == 2) {
				printf("\n");
			}
		}
	}
	printf("Resource¾ØÕó:");
	printf("\n");
	for (i = 0; i < 3; i++)
		printf("%d ", c[i]);
	printf("\n");
	printf("Available¾ØÕó:");
	printf("\n");
	for (i = 0; i < 3; i++)
		printf("%d ", d[i]);
}

void dododo(int x, int y, int a[4][3], int b[4][3], int* c, int* d) {
	int j = 3;
		for (j = 0; j < 3; j++) {
			d[j] = b[x][j] + d[j];
			a[x][j] = 0;
			b[x][j] = 0;

		}
}
