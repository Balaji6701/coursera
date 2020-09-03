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
  
}
#endif /* __STATS_H__ */
