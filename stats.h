/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <This is the headerfile for performing various operations on the input array>
 *
 * <This file performs sorting,find maximum,minimum,mean,median and print the statistics>
 *
 * @author <Balaji Balasubramanian>
 * @date <02/10/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
 * @brief <printstat function calls the other functions that performs various operations over the input array>
 *
 * <this function contains the call statements for printing,sorting,finding maximum,minimum,mean and median over the input array>
 *
 * @param <a> <stores the address that points to the input array>
 * @param <val> <stores the size of the input array>
 *
 * @return <returns the value 0>
 */
int printstat(unsigned char *a,int val){
     printf("unsorted array \n");
    for(int i=0;i<val;i++){ 
        long int b= a[i];
        printf("%d\n",b);
    }
    printf("\n");
    int s=mean(a,SIZE);
    printf("mean:%d\n",s);
    int median=med(a,SIZE);
    printf("median:%d\n",median);
    int maximum=max(a,SIZE);
    printf("maximum:%d\n",maximum);
    int minimum=min(a,SIZE,maximum);
    printf("minimum:%d\n",minimum);
    printf("sorted array \n");
    sort(a,SIZE);
	return(0);
}
/**
 * @brief <function that calculates mean>
 *
 * <this function calculates the mean of the input array>
 *
 * @param <a> <stores the address that points to the input array>
 * @param <val> <stores the size of the input array>
 *
 * @return <returns the variable s,which holds the mean>
 */
int mean(unsigned char *a,int val){
    int s=0;
    for(int i=0;i<val;i++){ 
        long int b= a[i];
        s=s+b;
    }
    s=s/val;
    return s;
}
/**
 * @brief <function that calculates median>
 *
 * <this function calculates the median of the input array>
 *
 * @param <a> <stores the address that points to the input array>
 * @param <val> <stores the size of the input array>
 *
 * @return <returns the variable median,which holds the median>
 */
int med(unsigned char *a,int val){
    int median=0;
    if(val%2!=0){
       median=a[(val/2)-1];
       return median;
    }
    if(val%2==0){
        median=(a[(val/2)-1]+a[(val/2)])/2;
        return median;
    }
}
/**
 * @brief <function that finds the maximum>
 *
 * <this function finds the maximum value stored in the input array>
 *
 * @param <a> <stores the address that points to the input array>
 * @param <val> <stores the size of the input array>
 *
 * @return <returns the variable maximum,which holds the maximum number in the array>
 */
int max(unsigned char *a,int val){
    int maximum=0;
    for(int i=0;i<val;i++){
        if(maximum<a[i]){
            maximum=a[i];
        }
    }
   
    return maximum;
}
/**
 * @brief <function that finds the minimum>
 *
 * <this function finds the minimum value stored in the input array>
 *
 * @param <a> <stores the address that points to the input array>
 * @param <val> <stores the size of the input array>
 *
 * @return <returns the variable minimum,which holds the minimum number in the array>
 */
int min(unsigned char *a,int val,int maximum){
    int minimum=maximum;
    for(int i=0;i<val;i++){
        if(minimum>a[i]){
            minimum=a[i];
        }
    }
    return minimum;
}
/**
 * @brief <function that sorts the input array and prints it>
 *
 * <this function sort the given input array and prints it>
 *
 * @param <a> <stores the address that points to the input array>
 * @param <val> <stores the size of the input array>
 *
 * @return <returns the value 0>
 */
int sort(unsigned char *a,int val){
    int swap=0;
    for (int c = 0 ; c < val - 1; c++)
  {
    for (int d = 0 ; d < val - c - 1; d++)
    {
      if (a[d] > a[d+1]) /* For decreasing order use < */
      {
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap;
      }
    }
  }
  for(int i=0;i<val;i++){ 
        long int b= a[i];
        printf("%d\n",b);
    }
    printf("\n");
	return(0);
}
#endif /* __STATS_H__ */
