#include <stdio.h>
int main () {
	int m, s;
	scanf("%d%d", &m, &s);
	for (int i = 0; i < 10; i++) {
		if (m > s) {
			printf("%d\n", i);
			return 0;
		}
		m *= 3;
		s *= 2;
	}
	return 0;
}