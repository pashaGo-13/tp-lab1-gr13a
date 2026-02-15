#include <stdio.h>
#include <math.h>
//комментарий 1
int main() {
	double a, b, c;
	printf("Введите a: ");
	scanf("%lf", &a);
        printf("Введите b: ");
        scanf("%lf", &b);
        printf("Введите c: ");
        scanf("%lf", &c);
	double ma, mb, mc;//комментарий 2

	if (a + b > c && a + c > b && b + c > a) {
		ma = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
		mb = 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);
		mc = 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
		printf("Медиана к а: %.2lf\n ", ma);
		printf("Медиана к b: %.2lf\n ", mb);
		printf("Медиана к c: %.2lf\n ", mc);
	}
	 else {//комментарий 3
		printf("Треугольник не существует");
	}

	return 0;
}

