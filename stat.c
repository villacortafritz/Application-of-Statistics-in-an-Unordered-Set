#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "stat.h"

Stat newStat(){
	Stat m;
	m = (int*)calloc(sizeof(m), MAX);
	return m;
}
void destroyStat(Stat *s){
	free(*s);
	s=NULL;
}
void add(Stat s,int x,int count){
	if(x>0 && x<MAX){
		s[x] = count;
	}
} 	
void remov(Stat s,int x,int count){
	if(x>=0 && x<MAX){
		s[x]--;
	}
}
int contains(Stat s,int x){
	int ctr=0, cont, i;
	if(x>0 && x<MAX){
		for(i=0; i<MAX; i++){
			if(x==i){
				cont=s[i];
			}
		}
	}
	return cont;
}
void display(Stat s){
	int i;
	for(i=0; i<MAX; i++){
		if(s[i]!=0){
			printf("[%d:%d] ", s[i], i);
		}
	}
	printf("\n");
}
void displayAll(Stat s){
	int i,j;
	for(i=0; i<MAX; i++){
		if(s[i]!=0){
			for(j=0; j<s[i]; j++){
				printf("%d ", i);
			}
		}
	}
}
int getN(Stat s){
	int i,j,total=0;
	for(i=0; i<MAX; i++){
		if(s[i]!=0){
			total+=s[i];
		}
	}
	return total;
}

int sum(Stat s){
	int i,j, sum=0;
	for(i=0; i<MAX; i++){
		if(s[i]!=0){
			for(j=0; j<s[i]; j++){
				sum+=i;
			}
		}
	}
	return sum;
}
float mean(Stat s){
	float mean, i=sum(s), j=getN(s);
	return mean=i/j;
	
}
int mode(Stat s){
	int i, largest=s[0];
	for(i=1; i<MAX; i++){
		if(s[i]>largest){
			largest=s[i];
		}
	}
	return largest;
}
int smallest(Stat s){
	int i, small=0;
	for(i=0; i<MAX; i++){
		if(s[i]!=0){
			small=i;
			break;
		}
	}
	return small;
}
int largest(Stat s){
	int i, large=0;
	for(i=MAX-1; i>=0; i--){
		if(s[i]!=0){
			large=i;
			break;
		}
	}
	return large;
}

float median(Stat s){
	float med=0, medi;
	int j, x, count=0, result=0, prev=0;
	result = (int)ceil((float)getN(s)/2);
	for(j=0; j<MAX; j++){
		for(x=s[j]; x>0; x--){
			count+=1;
			prev=j;
			if(count==result){
				if(result%2==0){
					med=(float)((prev)+(x+1))/2;
				}
				else{
					med=j;
				}
				break;
			}
		}
	}
	medi=ceil(med);
	return medi;
	
	/*int i, j,total = getN(s), temp=0, result=0;
	for(i=0; i<total;i++){
		for(j=i+1; j<total; j++){
			if(s[i]> s[j]){
				temp=s[j];
				s[j]=s[i];
				s[i]=temp;
			}
		}
		if(total%2==0){
			return (s[total/2]+s[total/2-1])/2;
		}
		else{
			return s[total/2];
		}
	}*/
}
void clear(Stat s){
	int i;
	for(i=0; i<MAX; i++){
		s[i]=0;
	}
}
int isEmpty(Stat s){
	int i, flag=0;
	for(i=0; i<MAX; i++){
		if(s[i]!=0){
			flag=1;
			break;
		}
	}
	return flag;
}
void printHistogramt(Stat s){
	int i,j;
	for(i=0; i<MAX; i++){
		printf("\n%d (%d)", i, s[i]);
		if(s[i]!=0){
			for(j=0; j<s[i]; j++){
				printf("*");
			}
		}
	}
}
