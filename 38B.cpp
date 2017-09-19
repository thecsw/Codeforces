#include <stdio.h>
#include <stdbool.h>
#include <iostream>
int mt[24][24];
int main() {
	int ld[10], kn[10];
	char ch;
	int y;
	//input
	scanf("%c%d", &ch, &y);
	ld[0] = ch - 89;
	ld[1] = y + 7;
	std::cin >> ch >> y;
	//scanf("%c%d", &ch, &y);
	kn[0] = ch - 89;
	kn[1] = y + 7;
	//end of input
	for (int i = 8; i < 16; i++) mt[ld[0]][i]= 1;
	for (int j = 8; j < 16; j++) mt[j][ld[1]] = 1;
	mt[ld[0] - 2][ld[1] - 1] = 1;
	mt[ld[0] - 1][ld[1] - 2] = 1;	
	mt[ld[0] + 1][ld[1] - 2] = 1;
	mt[ld[0] + 2][ld[1] - 1] = 1;
	mt[ld[0] + 2][ld[1] + 1] = 1;
	mt[ld[0] + 1][ld[1] + 2] = 1;
	mt[ld[0] - 1][ld[1] + 2] = 1;
	mt[ld[0] - 2][ld[1] + 1] = 1;
	//printf("%d %d\n", ld[0] - 8, ld[1] - 8);
	//printf("%d %d\n", kn[0] - 8, kn[1] - 8);
	mt[kn[0]][kn[1]] = 1;
	mt[kn[0] - 2][kn[1] - 1] = 1;
	mt[kn[0] - 1][kn[1] - 2] = 1;	
	mt[kn[0] + 1][kn[1] - 2] = 1;
	mt[kn[0] + 2][kn[1] - 1] = 1;
	mt[kn[0] + 2][kn[1] + 1] = 1;
	mt[kn[0] + 1][kn[1] + 2] = 1;
	mt[kn[0] - 1][kn[1] + 2] = 1;
	mt[kn[0] - 2][kn[1] + 1] = 1;
	int cu = 0;
	for (int i = 8; i < 16; i++) {
		for (int j = 8; j < 16; j++) {
			if (mt[i][j] == 0) cu++;
			//printf("%d ", mt[i][j]);
		}
		//printf("\n");
	}
	printf("%d\n", cu);
 	return 0;
}