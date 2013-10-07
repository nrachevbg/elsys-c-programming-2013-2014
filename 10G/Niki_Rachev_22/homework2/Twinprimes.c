#include "stdio.h"

int main() {
	int c, p, result;
	for(c=3; c<100; c++) {
		result = 0;
		for(p=2; p<c; p++) {
			if(!(c%p)) {
				result++;
				break;
			}
		}
		if(!result) {
			printf("%d\n", c);
		}
	}
	return 0;
}
