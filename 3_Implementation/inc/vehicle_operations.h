/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __WINDOWS_H__
#define __WINDOWS_H__

#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h>

/**
  /* adds a data of vehicle 
* @param[in] operand1 
* @param[in] operand2 
* @param[in] operand3 
* @param[in] operand4 
* @return Result of v
*/
struct vehicle * add ( int operand1, int operand2, int operand3, int operand4 )


/**
/* decrements the col. number by one this fun. is called when the data is shifted one place to left 
* @param[in] operand* 
* @return  Result of v
*/

void changecol ( struct operand*) 


/**
*   get the row-col position for the vehicle to be parked 
* @param[in] operand1 
* @param[in] operand2
* @return Result of v
*/

void getfreerowcol ( int operand1, int operand*) 


/**
* get the row-col position for the vehicle with specified number 
* @param[in] operand1 
* @param[in] operand2 
* @return Result of v
*/
void getrcbyinfo ( int operand1, int operand2, int operand* )

/**
* display the data into row and column
* @param[in] operand1 
* @param[in] operand2 
* @return Result of v
*/
int Display(int operand1, int operand2)

/**
* delete the data of vehicle
* @param[in] operand1 
* @return Result of v
*/
void del ( struct operand* ) ;
#endif  /* #define __WINDOWS_H__ */