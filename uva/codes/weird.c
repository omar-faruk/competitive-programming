#include<stdio.h>

int main() {
	int n=2,i=3;
	
	i^=n;
	n^=i;
	i^=n;
	printf("%d %d",n,i);
	return 0;
}
