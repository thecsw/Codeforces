#include <stdio.h>
int main() {
	int ch, nech, chc;
	scanf("%d%d", &ch, &nech);
	if (ch == nech & ch == 0) {
		printf("NO");
		return 0;
	}
	chc = ch - nech;
	if (chc < 0 ) chc *= -1;
	if (chc > 1) printf("NO");
	else printf("YES");
	return 0;
}