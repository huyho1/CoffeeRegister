#ifndef REGISTER_H
#define REGISTER_H
#include <stdio.h>
#include <stdlib.h>

/***************************************************
* void print_item(int rows, int cols, int data[][cols])
* Prints out the sales of an item chosen by the user
*
* Parameters:
* rows: the number of rows in data
* cols: the number of cols in the data
* data: A 2D array of the sales data
************************************************/	
void print_item(int rows, int cols, int data[][cols]);

/***************************************************
* void total_sales(int rows, int cols, int data[][cols])
* Prints out into sales.txt the total sales of all items
*
* Parameters:
* rows: the number of rows in data
* cols: the number of cols in the data
* data: A 2D array of the sales data
************************************************/
void total_sales(int rows, int cols, int data[][cols]);

/***************************************************
* void top_overall(int rows, int cols, int data[][cols])
* Prints out the item with the most sales
*
* Parameters:
* rows: the number of rows in data
* cols: the number of cols in the data
* data: A 2D array of the sales data
************************************************/
void top_overall(int rows, int cols, int data[][cols]);

#endif