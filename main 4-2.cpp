#include<stdio.h>
#include<conio.h>



int main() {
	const int N=5;
	float A[N],sum=0,av;
	int i,counter=0;
	printf("Enter 5 numbers : \n");
	for(i=0;i<N;i++){
		printf("A[%d]=",i);
		scanf("%f",&A[i]);
	}
	for(i=0;i<N;i++){
		sum+=A[i];
		av=sum/N;}
		printf("list of this numbers:  ");
	for(i=0;i<N;i++){
	
	 if((av+3)>=A[i]&&(av-3)<=A[i]){
	 	
	   printf("%9.2f",A[i]);
	   counter++;}}
	   printf("\nAmount of this numbers: ");
	   printf("%3.d",counter);
	   getch();
	return 0;
}
