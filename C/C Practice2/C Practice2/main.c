//
//  main.c
//  C Practice2
//
//  Created by TakahashiMai on 2015-11-20.
//  Copyright © 2015 TakahashiMai. All rights reserved.
//

#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//
//    int choice = 0;
//    int x, y;
//    
//    
//    for (; choice >= 0; ){
//        printf("Welcome to my grogram:\n");
//        printf("................\n");
//        printf("For Addition press 1:\n");
//        printf("For Substraction press 2:\n");
//        printf("For Substraction press 3:\n");
//        printf("For Devision press 4:\n");
//        printf("For exit enter a negative number:\n");
//        printf("Your choice: ");
//        scanf("%i", &choice);
//        
//
//    switch (choice) {
//        case 1:
//            printf("Please enter two numbers: ");
//            scanf("%i %i", &x, &y);
//            printf("The result: %i\n\n\n", x + y);
//            break;
//        case 2:
//            printf("Please enter two numbers: ");
//            scanf("%i %i", &x, &y);
//            printf("The result: %i\n\n\n", x - y);
//            break;
//        case 3:
//            printf("Please enter two numbers: ");
//            scanf("%i %i", &x, &y);
//            printf("The result: %i\n\n\n", x - y);
//            break;
//        case 4:
//            printf("Please enter two numbers: ");
//            scanf("%i %i", &x, &y);
//            printf("The result: %i\n\n\n", x / y);
//            break;
//            
//            case 5:
//            case 6:
//            case 7:
//            printf("Why did you enter a wrong value like %i\n\n\n", choice);
//            break;
//            
//        default:
//            printf("Wrong choice.\n");
//               
//        }
//        getchar();
//        getchar();
//    }
//
//    return 0;
//
//}

//
//
//int main(int argc, const char * argv[]) {
//    float x, y, z;
//    float max;
//    
//    printf("Enter 3 values: ");
//    scanf("%f %f %f", &x, &y, &z);
//    
//    if(x >= y && x >= 2)
//        printf("%f is max\n", x);
//    
//    else if (z >= x && z >= y)
//        printf("%f is max\n", z);
//    else
//        printf("5f is max\n");
//    
//    return 0;
//
//}


//
//
//int main(int argc, const char * argv[]) {
//    int x;
//    float y, max;
//    int i;
//    
//    printf("How many numbers do you want to enter? ");
//    scanf("%i", &x);
//    
//    printf("Enter your number: ");
//    scanf("%f", &y);
//    max = y;
//    
//    for (i = 1; i < x; i++)
//    {
//    
//        printf("Enter your number: ");
//        scanf("%f", &y);
//        if(y > max)
//            max = y;
//    
//    }
//    printf("The max is: %f\n", max);
//    return 0;
//    
//}

//
//
//
//
//int main(int argc, const char * argv[]) {
//    int x;
//    float y, min;
//    int i;
//    
//    printf("How many numbers do you want to enter? ");
//    scanf("%i", &x);
//    
//    printf("Enter your number: ");
//    scanf("%f", &y);
//    min = y;
//    
//    for (i = 1; i < x; i++)
//    {
//        
//        printf("Enter your number: ");
//        scanf("%f", &y);
//        if(y < min)
//            min = y;
//        
//    }
//    printf("The min is: %f\n", min);
//    return 0;
//    
//}




//
//
//int main(int argc, const char * argv[]) {
//    int x;
//    int y;
//    float min, max;
//    int i;
//    
//    printf("How many numbers do you want to enter? ");
//    scanf("%i", &x);
//    
//    printf("Enter your number: ");
//    scanf("%i", &y);
//    min = y;
//    max = y;
//    
//    for (i = 1; i < x; i++)
//    {
//        
//        printf("Enter your number: ");
//        scanf("%i", &y);
//        if(y < min)
//            min = y;
//        if(y < max)
//            max = y;
//
//        
//    }
//    printf("The max is: %f\n", max);
//    printf("The min is: %f\n", min);
//    return 0;
//    
//}
//


//forじゃなくてwhileでもやってみよう！

int main(int argc, const char * argv[]) {
    int x;
    int y;
    int min, max;
    int i=1;
    
    printf("How many numbers do you want to enter? ");
    scanf("%i", &x);
    
    printf("Enter your number: ");
    scanf("%i", &y);
    
    min = y;
    max = y;

    do{
        printf("Enter your number: ");
        scanf("%i", &y);
        

        if (y < max)
            max=y;
        if(y > min)
            min=y;
            i++;
        
    } while (i < x);

    printf("The max is: %i\n", max);
    printf("The min is: %i\n", min);
    return 0;
    
}

