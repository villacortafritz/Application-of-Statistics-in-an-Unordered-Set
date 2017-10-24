#include <stdio.h>
#include <stdlib.h>
#include "stat.h"

int main(int argc, char *argv[]) {
	
	Stat s1, s2, s3;
	
	s1=newStat();
	s2=newStat();
	s3=newStat();
	
	printf("Set 1:\t\t\t");
	//first: set | second: pos | third: occurence
	add(s1,2,5);
	add(s1,5,3);
	add(s1,6,2);
	add(s1,8,2);
	display(s1);
	
	printf("Set 2:\t\t\t");
	add(s2,1,3);
	add(s2,2,1);
	add(s2,6,3);
	add(s2,7,2);
	add(s2,9,5);
	display(s2);
	
	printf("Occurence of 5 in s1:\t%d", contains(s1,5));
	printf("\nOccurence of 2 in s2:\t%d", contains(s2,2));
	
	printf("\nElements of s1:\t\t");
	displayAll(s1);
	printf("\nElements of s2:\t\t");
	displayAll(s2);
	
	printf("\n# of occurances in s1:\t%d", getN(s1));
	printf("\n# of occurances in s2:\t%d", getN(s2));
	
	printf("\nSum of s1:\t\t%d", sum(s1));
	printf("\nSum of s2:\t\t%d", sum(s2));
	
	printf("\nMean of s1:\t\t%.2f", mean(s1));
	printf("\nMean of s2:\t\t%.2f", mean(s2));
	
	printf("\nMode of s1:\t\t%d", mode(s1));
	printf("\nMode of s2:\t\t%d", mode(s2));
	
	printf("\nSmallest of s1:\t\t%d", smallest(s1));
	printf("\nSmallest of s2:\t\t%d", smallest(s2));
	
	printf("\nLargest of s1:\t\t%d", largest(s1));
	printf("\nLargest of s2:\t\t%d", largest(s2));
	
	printf("\nMedian of s1:\t\t%.2f", median(s1));
	printf("\nMedian of s2:\t\t%.2f", median(s2));
	
	printf("\nSet 3: \t\t\t");
	add(s3,2,5);
	add(s3,7,6);
	add(s3,4,3);
	add(s3,8,1);
	display(s3);
	
	clear(s3);
	
	printf("s3 after clear:\t\t\t");
	display(s3);
	
	printf("Is s1 empty?\t\t");
	if(isEmpty(s1)==1){
		printf("No");
	}
	else{
		printf("YES");
	}
	printf("\nIs s2 empty?\t\t");
	if(isEmpty(s2)==1){
		printf("No");
	}
	else{
		printf("YES");
	}
	printf("\nIs s3 empty?\t\t");
	if(isEmpty(s3)==1){
		printf("No");
	}
	else{
		printf("YES");
	}

	
	printf("\n\nHistogramt of s1:");
	printHistogramt(s1);
	printf("\n\nHistogramt of s2:");
	printHistogramt(s2);
	
	
	
	
	
	return 0;
}
