/*
	1419. A Game with Numbers
	Problem code: NGM
	
	Link: http://www.spoj.pl/problems/NGM/
*/

#include <stdio.h>

int main(void) {
  int n;
  
  scanf("%d", &n);
  
  if(n%10) {
	printf("1\n%d\n", n%10);
  } else {
	printf("2\n");
  }
  
  return 0;
}
