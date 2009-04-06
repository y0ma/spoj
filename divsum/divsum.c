/*
	74. Divisor Summation
	Problem code: DIVSUM
	
	Link: https://www.spoj.pl/problems/DIVSUM/
*/

#include <stdio.h>
#include <math.h>

int main(void) {
	int testcases, n;
	int i, sq;
	long long int sum;
	
	scanf("%d", &testcases);
	
	while(testcases--) {
		scanf("%d", &n);
		
		sum = (n == 1) ? 0 : 1;
		
		sq = floor(sqrt((double) n));
		
		for(i = 2; i <= sq; ++i) {
			if(!n%i) {
				sum += i;
				
				if(n/i != i) {
					sum += n/i;
				}
			}
		}
		
		printf("%lld\n", sum);
	}
	
	return 0;
}
