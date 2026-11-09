#include<stdio.h>
int main() {
	int a,b,i;
    long long c;
	scanf("%d",&a);
	for ( i=0; i < a; i++){
	    scanf("%d",&b);
	    b = b-i;
	    c = c+b;
	}
	printf("%lld\n",c);
	return 0;
}