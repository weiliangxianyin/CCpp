#include <stdio.h>
int main(void) {
	int a,n,c=1,b=0;

	scanf("%d%d\n",&a,&n);
	do {
		scanf("%d",&b);
		if(c<=n) {
			if(b>a) {
				printf("Too big\n");
			} else if(b<a) {
				printf("Too small\n");
			} else if(b==a) {
				if(c==1) {
					printf("Bingo!\n");
					break;
				} else if(1<c&&c<=3) {
					printf("Lucky You!\n");
					break;
				} else if(c>3) {
					printf("Good Guess!\n");
					break;
				}
			}
			c++;
		} else if(c>n||b<0) {
			printf("Game Over\n");
			break;
		}
	} while(b>=0);

	return 0;
}
