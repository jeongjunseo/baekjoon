#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, m;
	scanf("%d %d", &m, &n);
	int** a = (int**)malloc(sizeof(int*) * m);
	int** b = (int**)malloc(sizeof(int*) * m);

	for (int i = 0;i < m;i++) {
		a[i] = (int*)malloc(sizeof(int) * n);
		b[i] = (int*)malloc(sizeof(int) * n);
	}

	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
			scanf("%d", &a[i][j]);
	}
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
			scanf("%d", &b[i][j]);
	}
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
			printf("%d ", a[i][j] + b[i][j]);
		printf("\n");
	}
	
}
