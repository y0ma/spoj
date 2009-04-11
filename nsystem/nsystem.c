#include <stdio.h>

#define MAXSIZE (10)

int mcxi_to_i(char* mcxi);
void i_to_mcxi(int n, char* buf);

int main(void) {
	int testcases;
	char spec[2][MAXSIZE];
	
	scanf("%d", &testcases);

	while(testcases--) {
		scanf("%s %s", spec[0], spec[1]);
		
		i_to_mcxi(mcxi_to_i(spec[0]) + mcxi_to_i(spec[1]), spec[0]);
		
		printf("%s\n", spec[0]);
	}
	
	return 0;
}

int mcxi_to_i(char* mcxi) {
	int w, res, a;
	
	res = 0;
	
	while(*mcxi != '\0') {
		w = 1;
		
		if(*mcxi <= '9' && *mcxi >= '0') {
			w = *mcxi - '0';
			mcxi++;
		}
		
		switch(*mcxi) {
			case 'm': a = 1000; break;
			case 'c': a = 100; break;
			case 'x': a = 10; break;
			case 'i': a = 1; break;
		}
		
		res += w*a;
		mcxi++;
	}
	
	return res;
}

void i_to_mcxi(int n, char* buf) {
	int a, d, i;
	int sym[4] = {'m', 'c', 'x', 'i'};
	
	for(i = 0, d = 1000; i < 4; ++i) {
		a = n/d;
		if(a) {
			if(a > 1) {
				sprintf(buf, "%i", a);
				buf++;
			}
			
			*buf = sym[i];
			buf++;
		}
		n %= d;
		d /= 10;
	}
	
	*buf = '\0';
}
