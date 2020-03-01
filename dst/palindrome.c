#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int rev_n = 0;
	if(n%10 == 0) {
		printf("N");
		return 0;
	}
	while (rev_n < n ) {
		rev_n *= 10;
		rev_n += n%10;
		n/=10;
	}
	if(rev_n == n || rev_n/10 == n){
		printf("Y");
	}else{
		printf("N");
	}
	return 0;
}
