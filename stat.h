#ifndef STAT_C
#define STAT_C
#define MAX 10

typedef int *Stat;

Stat newStat();
void destroyStat(Stat *s);
void add(Stat s,int x,int count); // add count occurrences of x in s
void remov(Stat s,int x,int count);// remove count occurrences of x
int contains(Stat s,int x); // will return the number of occurrences of x, assume x is valid
void display(Stat s);//calling display(s1) will display [ 5:2 3:5 2:6 2:8 ]
void displayAll(Stat s);//calling displayAll(s1) will display [ 2 2 2 2 2 5 5 5 6 6 8 8 ]
int getN(Stat s); // will return the number of elements, for s1 „³ it is 12
int sum(Stat s); // will return the sum of the elements, for s1 „³ it is 53
float mean(Stat s); // will return the average, for s1 „³ it is 53/12 = 6.36
int mode(Stat s); // will return the mode which is the element that occurs most frequently, for s1, the mode is 2 since there are 5 occurrences of 2, give only one mode
int smallest(Stat s); // will return the smallest element, for s1 „³ it is 2
int largest(Stat s); // will return the largest element, for s1 „³ it is 8
float median(Stat s); // will return the median which is the middle element or the average of the 2 middle, for s1 it is 5 since there are 12 elements and the 6th and 7th elements are both 5
void clear(Stat s);
int isEmpty(Stat s);
void printHistogramt(Stat s); //calling printHistogram(s1) will display

#endif
