#include<stdio.h>
#include<stdbool.h>

int main(void) {
	int n,a,b,c;
	bool found = false;
	scanf("%d", &n);

	for (a = 1;a <= n/900  ;a++) {
		for (b = 2;b <= n / 750;b += 2){
			for (c = 1; c <= n / 200;c++){
                if ((a * 900 + b * 750 + c * 200) == n) {
                    if (c < a || c < b) {
                        found = true;
                        printf("%d %d %d\n", a, b, c);
                    }
                }
			}
		}
	}


	if (!found) {
		printf("none\n");
	}


	return 0;
}
