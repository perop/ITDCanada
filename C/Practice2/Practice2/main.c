//
//  main.c
//  Practice2
//
//  Created by TakahashiMai on 2015-11-16.
//  Copyright © 2015 TakahashiMai. All rights reserved.
//

#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    
//    int month;
//    
//    // insert code here...
//    printf("Please enter a number of month: ");
//    scanf("%d", &month);
//    
//    if (month >= 1 && month <= 12 ){
//    
//    if (month == 1)
//        printf("January\n");
//    else if (month == 2)
//        printf("Febrary\n");
//    else if (month == 3)
//        printf("Marcch\n");
//    else if (month == 4)
//        printf("April\n");
//    else if (month == 5)
//        printf("May\n");
//    else if (month == 6)
//        printf("June\n");
//    else if (month == 7)
//        printf("July\n");
//    else if (month == 8)
//        printf("August\n");
//    else if (month == 9)
//        printf("September\n");
//    else if (month == 10)
//        printf("October\n");
//    else if (month == 11)
//        printf("November\n");
//    else if (month == 12)
//        printf("December\n");
//    }
//    
//    else
//        printf("The number is not between 1 and 12. \n");
//    
//    return 0;
//}
//
//
//
//
//int main(int argc, const char * argv[]) {
//    
//    char letter;
//    
//    printf("Please enter an alphabet letter: ");
//    scanf("%c", &letter );
//   
//    if (letter == 'a')
//    printf("A\n");
//    
//    else if (letter == 'b')
//    printf("B\n");
//    
//    else if (letter == 'c')
//    printf("C\n");
//    
//    else if (letter == 'd')
//    printf("D\n");
//    
//    else if (letter == 'e')
//    printf("E\n");
//
//    else
//        printf("letter incorrect, put the letter.\n");
//    
//    return 0;
//}

//マンバーの時はシングルクオーテーションはいらないが、文字を書く時はイコールのあとに''が必要。
//さらに、その文字が一文字以上なら、ダブルクオーテーションマークにしなければならない ""。


//
//int main(){
//    
//    char letter;
//    int x;
//    
//    printf("please ebter a ketter :");
//    scanf("%c", &letter);
//    if(letter >='a' && letter <= 'z')
//    x = letter - 32;
//    
//    else if (letter >= 'A' && letter <= 'Z')
//        x = letter + 32;
//    
//    else
//        x = letter;
//    printf("the uppercase is : %c\n", x);
//    
//    return 0;
//    
//}
//


//int main(){
//    
//    int i;
//
////    printf("Hello World!\n");
////    printf("Hello World!\n");
////    printf("Hello World!\n");
////    printf("Hello World!\n");
//
//    // Loopをやってみよう！
//    
//    for ( i = 1; i  <= 10; i= i + 1 )
//        printf("Hello World!\n");
//
//}

//
//int main(){
//    
//    int x;
//    int i;

//    printf("Enter a number :");
//    scanf("%i",&x);
//    printf("You ebtered %i\n",x);
//    printf("Enter a number :");
//    scanf("%i",&x);
//    printf("You ebtered %i\n",x);
//    printf("Enter a number :");
//    scanf("%i",&x);
//    printf("You ebtered %i\n",x);
//   for ( i = 1; i  <= 10; i= i + 1 )
//    printf("Hello World!\n");
    

//    
//    for (i=1 ; i<=4 ; i=i+1){
//    printf("Enter a number (%i):", i);
//    scanf("%i", &x);
//    printf("You ebtered %i\n", x);
//    
//    }
//    
//    return 0;
//}

//
//
//int main(){
//    int num1, num2, num3, num4, num5;
//    int sum;
//    
//    printf("Please ebter a number: ");
//    scanf("%i", &num1);
//
//    printf("Please ebter a number: ");
//    scanf("%i", &num2);
//
//    printf("Please ebter a number: ");
//    scanf("%i", &num3);
//
//    printf("Please ebter a number: ");
//    scanf("%i", &num4);
//
//    printf("Please ebter a number: ");
//    scanf("%i", &num5);
//
//    sum = num1 + num2 + num3 + num4 + num5;
//    
//}
//
//
//
//
//int main(){
//    int num;
//    int sum=0;
//    int i;
//    
//    for (i = 1; i<= 4; i=i+1)
//    {
//        printf("Please ebter a number: ");
//    scanf("%i", &num);
//    sum = sum + num;
//    }
//    
//    printf("The sum of those values is : %i\n", sum);
//}

//
//int main(){
//    int num;
//    int sum=0;
//    int x;
//    int i;
//    
//    printf("How many time do you want to repeat?");
//    scanf("%i", &x);
//    
//    
//    for (i = 1; i<= x; i=i+1)
//    {
//        printf("Please ebter a number: ");
//        scanf("%i", &num);
//        sum = sum + num;
//    }
//    
//    printf("The sum of those values is : %i\n", sum);
//}
//
//
//
//
//
//int main(){
//    
//    int num;
//    int sum=0;
//    int x;
//    int i;
//    
//    printf("How many time do you want to repeat?");
//    scanf("%i", &x);
//    
//    if (x >=3 && x<10 ) {
//        for (i = 1; i<= x; i=i+1){
//        printf("Please enter a number: ");
//        scanf("%i", &num);
//        sum = sum + num;
//    }
//
//    printf("The sum of those values is : %i\n", sum);
//    }
//    
//    else
//        printf("You put incorrect number %i \n", x);
//
//    return 0;
//}

//
//int main(){
//    
//    int i =0;
//    int x, y, choice ;
//    
//    
//    for (;i >= 0; ) {
//        printf("Welcome to my program: ");
//        printf("--------------");
//        printf("For addition press 1:\n");
//        printf("For Multiplication press 3:\n");
//        printf("For Division press 4:\n");
//        printf("Your choice: ");
//        scanf("%i", &choice );
//        printf("please enter two numbers: ");
//        scanf("%i %i", &x, &y);
//        
//        if (choice == 1);
//        printf("The result: %i\n\n\n", x + y);
//        scanf("%i %i", &x, &y);
//        printf("The result: %i\n\n\n", x + y);
//        
//        
//        else if(choice == 2)
//        printf("The result: %i\n\n\n", x - y);
//        
//        
//        else if(choice == 3)
//            printf("The result: %i\n\n\n", x + y);
//        
//        
//        else if(choice == 4)
//            printf("The result: %i\n\n\n", )
//            
//            
//            }
//    
//    return 0;
//    
//}
//
//int main(){
//    
//    int choice =0;
//    int x, y ;
//    
//    
//    for (; choice >= 0; ) {
//        printf("Welcome to my program: ");
//        printf("--------------");
//        printf("For addition press 1:\n");
//        printf("For Substraction press 2:\n");
//        printf("For Multiplication press 3:\n");
//        printf("For Division press 4:\n");
//        printf("For Exit enter a negative number:\n");
//        printf("Your choice: ");
//
//        scanf("%i", &choice );
//        printf("please enter two numbers: ");
//        scanf("%i %i", &x, &y);
//        
//        if (choice == 1);
//        printf("The result: %i\n\n\n", x + y);
//        scanf("%i %i", &x, &y);
//        printf("The result: %i\n\n\n", x + y);
//        
//        
//        else if(choice == 2)
//            printf("The result: %i\n\n\n", x - y);
//        
//        
//        else if(choice == 3)
//            printf("The result: %i\n\n\n", x + y);
//        
//        
//        else if(choice == 4)
//            printf("The result: %i\n\n\n", )
//            
//            
//            }
//    
//    return 0;
//    
//}

//
//int main(){
//
//    int x = 1 ;
//
//    for (; x > 0;)
//    {
//        scanf("%i", &x);
//        printf("You entered: %i\n", x);
//    }
//        
//        }
//これをwhile構文で置き換えることができる
    
//
//    while ( x > 0 ) {
//        scanf("%i", &x);
//        printf("you entered: %i\n", x);
//    }
//    
//    return 0;
//
//}
//    
//
//    do {
//        printf("please enter a number: ");
//        scanf("%i", &x);
//        printf("you enterd: %i\n", x);
//    }
//
//while(x > 0);
//
//
//}



int main(){

    int month;

    printf("Please enter a number of month: ");
    scanf("%i", &month);
    
    if (month >= 1 && month <= 12)
    {
        switch (month) {
            case 1:
                printf("January\n");
                break;
            case 2:
                printf("Febrary\n");
                break;
            case 3:
                printf("March\n");
                break;
            case 4:
                printf("April\n");
                break;
            case 5:
                printf("May\n");
                break;
            case 6:
                printf("June\n");
                break;
            case 7:
                printf("July\n");
                break;
            case 8:
                printf("August\n");
                break;
            case 9:
                printf("September\n");
                break;
            case 10:
                printf("October\n");
                break;
            case 11:
                printf("November\n");
                break;
            case 12:
                printf("December\n");
                break;
        }
    }
        else
            printf("The nimber is not between 1 and 12.\n");
        
        return 0;
    
}


