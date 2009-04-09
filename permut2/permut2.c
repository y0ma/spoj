/*
	379. Ambiguous Permutations
	Problem code: PERMUT2
	
	Link: http://www.spoj.pl/problems/PERMUT2/
*/

#include <stdio.h>

#define MAXSIZE 100001

int main(void) {
	int len, permut[MAXSIZE];
	int i, ans;

	while(13) {
		scanf("%d", &len);
		
		if(!len) {
			break;
		}
		
		for(i = ans = 1; i <= len; ++i) {
			scanf("%d", permut + i);
			if(ans && permut[i] <= i && permut[permut[i]] != i) {
				ans = 0;
			}
		}
		
		printf("%sambiguous\n", ans ? "" : "not ");
	}
	
	return 0;
}
