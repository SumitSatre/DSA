//selection sort
#include<iostream>
#include<stdio.h>
#include<conio.h>
#define MAX 30

int main(){
	int array[MAX];
	int n,i,j;
	printf("\nHow Many Elements: ");
	scanf("%d",&n);
	
	printf("\nEnter array elements: ");
	
	for(i=0;i<n;i++){
		printf("\nEnter Element @index %d: ",i);
		scanf("%d",&array[i]);
		
	}
	printf("\nArray before sorting is: ");
	
	for(i=0;i<n;i++){
		printf("%d",array[i]);
		
	}
	int imin;
	int temp;
	for(i+0;i<n-1;i++){
		imin=i;
		for(j=i+1;j<n;j++){
			if(array[imin]>array[j]){
				imin=j;
				
			}	
				}
		temp=array[i];
		array[i]=array[imin];
		array[imin]=temp;
		
	}
	printf("\nArray after sorting is:");
	
	for(i=0;i<n;i++){
		printf("%d",array[i]);
		
	}
	getche();
}