#include <stdio.h>
#include <conio.h>



int main() {
	const int N=5;
	int i,A[N],counter=0,t=0,h;
	printf("Enter 5 numbers: ");
	for(i=0;i<N;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	 printf("Answer\n");
	 for(i=0;i<N;i++){
	 	if(A[i]<0){
		 
	 	printf("A[%d]=%d\n",t,A[i]);
		 t++;}}
	 	i=counter;
	 	h=t;
	 for(i=counter;i<N;i++){
	 	if(A[i]>0){
		 
		
	 	printf("A[%d]=%d\n",h,A[i]);
		  h++;}}	
	 	
		  
	 	  
	return 0;
}
