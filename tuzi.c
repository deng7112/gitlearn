#include<stdio.h>
int main(){
	int n,i=0,j=1,k=0,ii=1;
	scanf("%d",&n);
	if(n==1){
		printf("1");
		return 0;
	}
	while(1){
		if(i!=0)
			j=ii;
		ii=i;
		i+=j;
		k++;
		if(i>=n)
			break;
	}
	printf("%d",k);
	return 0;
}
