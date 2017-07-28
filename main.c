#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#pragma warning(disable:4996)
//created by Arya HajiTaheri
int main(void)
{	//init
	long long int N = 0, modu;
	double x, y, z;
	long long int i, count = 0;
	double pi;
	//randomize
	srand(time(NULL));
	printf("Enter the number of iterations used: ");
	scanf("%llu", &N);
	count = 0;
	modu = N / 100;
	double ratio;
	for (i = 0; i < N; i++) {
		ratio = (double)i / N;
		// print what percentage is computed
		if (i % modu == 0) {
			system("cls");
			printf("Loading...\n %.1lf%% complete!\n", ratio * 100);
		}
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		z = x*x + y*y;
		// if in circle, increase count
		if (z <= 1) count++;
	}
	pi = (double)count / N * 4;
	system("cls");
	printf("After %llu trials, the estimate of pi is %.16lf \n\a", N, pi);
}