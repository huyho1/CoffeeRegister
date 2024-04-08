#include "register.h"

void print_item(int rows, int cols, int data[][cols]) {
    int row = -1;
    while (row == -1) { //makes sure that input is valid
        printf("Which item?\n");
        scanf("%d", &row);
        if (row >= rows) {
            row = -1;
        }
    }
    printf ("Jan\t"); //manually adding the months
    printf ("Feb\t");
    printf ("Mar\t");
    printf ("Apr\t");
    printf ("May\t");
    printf ("Jun\t");
    printf ("Jul\t");
    printf ("Aug\t");
    printf ("Sep\t");
    printf ("Oct\t");
    printf ("Nov\t");
    printf ("Dec\n");
    for (int i = 0; i < cols; i++){
        printf ("%d", data[row][i]); //get sale of item from a certain month
        if (i == cols - 1){ 
            printf("\n"); 
        }
        else printf("\t");
    }
}

void total_sales(int rows, int cols, int data[][cols]) {
    FILE* f1 = fopen("sales.txt","w"); 
    fprintf(f1,"Item\tSales\n");
    for (int i = 0; i < rows; i++) {
        fprintf(f1, "%02d\t", i);
        int sum = 0; //sum of the row
        for (int j = 0; j < cols; j++) {
            sum = sum + data[i][j];
        }
        fprintf(f1, "%4d\n", sum);
    }
    fclose(f1);
}

void top_overall(int rows, int cols, int data[][cols]) {
    int currentTop = 0; // this is highest total sales so far
    int itemNum; // this is the row with currentTop
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum = sum + data[i][j];
        }
        if (sum > currentTop) {
            currentTop = sum;
            itemNum = i;
        }
    }
    printf("The most popular item is item %d.\n", itemNum);
}