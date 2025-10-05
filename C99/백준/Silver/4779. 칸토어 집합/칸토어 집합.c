#include <stdio.h>
#include <math.h>

void killing(int n) {
	int size = (int)pow(3, n) / 3;
	if (n == 0) {
		printf("-");
	}
	else {
		killing(n - 1);
		for (int i = 0;i < size;i++)
			printf(" ");
		killing(n - 1);
	}
	
}
int main() {
	int n;
	int i = 0;

	while (scanf("%d", &n) != EOF) {
		killing(n);
		printf("\n");
	}
}