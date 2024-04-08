#include "register.h"

int main(void) {
    int userInput = -1; 
    int numR = 50; 
    int numC = 12;
    int x[numR][numC]; // 50x12 array

    // the different months data txt
    FILE* f1 = fopen("Jan_2023_data.txt","r");
    FILE* f2 = fopen("Feb_2023_data.txt","r");
    FILE* f3 = fopen("Mar_2023_data.txt","r");
    FILE* f4 = fopen("Apr_2023_data.txt","r");
    FILE* f5 = fopen("May_2023_data.txt","r");
    FILE* f6 = fopen("Jun_2023_data.txt","r");
    FILE* f7 = fopen("Jul_2023_data.txt","r");
    FILE* f8 = fopen("Aug_2023_data.txt","r");
    FILE* f9 = fopen("Sep_2023_data.txt","r");
    FILE* f10 = fopen("Oct_2023_data.txt","r");
    FILE* f11 = fopen("Nov_2023_data.txt","r");
    FILE* f12 = fopen("Dec_2023_data.txt","r");

    // inserting the different months data into array
    for (int i = 0; i < numR; i++) {
        fscanf(f1, "%*d %*s %d", &x[i][0]);
        fscanf(f2, "%*d %*s %d", &x[i][1]);
        fscanf(f3, "%*d %*s %d", &x[i][2]);
        fscanf(f4, "%*d %*s %d", &x[i][3]);
        fscanf(f5, "%*d %*s %d", &x[i][4]);
        fscanf(f6, "%*d %*s %d", &x[i][5]);
        fscanf(f7, "%*d %*s %d", &x[i][6]);
        fscanf(f8, "%*d %*s %d", &x[i][7]);
        fscanf(f9, "%*d %*s %d", &x[i][8]);
        fscanf(f10, "%*d %*s %d", &x[i][9]);
        fscanf(f11, "%*d %*s %d", &x[i][10]);
        fscanf(f12, "%*d %*s %d", &x[i][11]);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
    fclose(f5);
    fclose(f6);
    fclose(f7);
    fclose(f8);
    fclose(f9);
    fclose(f10);
    fclose(f11);
    fclose(f12);

    //makes sure that input is a valid one
    while (userInput == -1) {
        printf("Which program would you like to run?\n");
        printf("(1) Output the monthly sales of an item.\n");
        printf("(2) Calculate overall sales for all items.\n");
        printf("(3) Find the most popular item.\n");
        scanf("%d", &userInput);
        if (userInput > 3 || userInput < 1) {
            userInput = -1;
        }
    }
    
    //does program chosen associated with userInput
    if (userInput == 1) {
        print_item(numR,numC,x);
    }
    if (userInput == 2) {
        total_sales(numR,numC,x);
    }
    if (userInput == 3) {
        top_overall(numR,numC,x);
    }

    return 0;
}