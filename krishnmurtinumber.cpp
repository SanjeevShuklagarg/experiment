#include<stdio.h>
int main(){
	printf("Enyter the number");
	int n,a,count=0,cube=0;
	scanf("%d",&n);
	int b=n;
	while(n!=0){
		count++;
		n=n/10;
	}
	n=b;
	while(b!=0){
		int a=0;
		a=b%10;
		int d=a;
		for(int i=1;i<=count-1;i++){
			a=a*d;
		}
		cube=cube+a;
		b=b/10;
	}
	if(cube==n){
		printf("it is krishnamurti number");
	}else{
		printf("The number is not an krishnamurti");
	}
}