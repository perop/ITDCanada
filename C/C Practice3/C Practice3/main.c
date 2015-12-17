//
//  main.c
//  C Practice3
//
//  Created by TakahashiMai on 2015-11-23.
//  Copyright © 2015 TakahashiMai. All rights reserved.
//

#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//
//    int g[10];
//    int i;
//    int sum = 0 ;
//
//    g[0] = 20; // 10まではない、0から9までの10個
//    g[1] = 13;
//    g[2] = 11;
//    g[3] = 45;
//    g[4] = 35; // in this array we have totaly 10 elements from 0 to 9.
//    g[5] = 32;
//    g[6] = 6;
//    g[7] = 8;
//    g[8] = 43;
//    g[9] = 21;
// 

////    printf("%i\n", g[6]);
////    printf("%i\n", g[5]+g[2]+g[8]);
////    g[6] = g[4] * g[3];
//      printf("%i\n",g[6]);
//
//    if (g[5] > 10)
//        printf("g[5] is equal to: %i\n", g[5]);

//繰り返してみよう
//    for (i = 0 ; i < 10 ; i++ )
//        printf("g[%i] is equal to %i\n", g[i]);
//        sum = sum + g[i];

//    sum = g[0] + g[1] + g[2] + g[3] + g[4] + g[5] + g[6] + g[7] + g[8] + g[9];
//  
//    sum = 0;
//    sum = sum + g[0];
//    sum = sum + g[1];
//    sum = sum + g[2];
//    sum = sum + g[3];
//    sum = sum + g[4];
//
//    
//    printf("The total value is: %i \n", sum);
//    printf("average is %i\n", sum /i);
//
//    
//
//    return 0;
//
//}



// This code checks weather an input alphabet is a vowel (a,e,i,o,u)


int main(int argc, const char * argv[]) {
    

    char letter;

    printf("Please enter the letter: \n");
    scanf("%c", &letter);
//
//    switch (letter) {
//        case 'a':
//        case 'e':
//        case 'i':
//        case 'u':
//        case 'o':
//        case 'A':
//        case 'E':
//        case 'I':
//        case 'U':
//        case 'O':
//            printf("You typed %c.\n",letter);
//            printf("This letter is a vowel.\n");
//            break;
//        default:
//            printf("You put %c.\n", letter);
//            printf("This letter is not a vowel.\n");
//            break;
//    }
//    
    
    if (letter == 'a' || letter == 'e'|| letter == 'i'|| letter == 'u'||  letter == 'o'|| letter ==  'A'|| letter ==  'E'|| letter ==  'I'|| letter ==  'U'|| letter ==  'O') {
        printf("This letter is a vowel.\n");
    }
   
    else
        printf("This letter is not a vowel.\n");
    
    return 0;
    


}




