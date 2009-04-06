#include <stdio.h>
#include <math.h>

int main(void) {
	int i, testcases, n, sq;
	long long int sum;
	
	scanf("%d", &testcases);
	
	while(testcases--) {
		scanf("%d", &n);
		sum = (n == 1) ? 0 : 1;
		
		sq = floor(sqrt((double) n));
		
		for(i = 2; i <= sq; ++i) {
			if(n%i == 0) {
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
