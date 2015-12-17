//
//  main.c
//  C practice
//
//  Created by TakahashiMai on 2015-11-09.
//  Copyright © 2015 TakahashiMai. All rights reserved.
//


#include <stdio.h>

//    int main(int argc, const char * argv[]) {
//
//        float mai;
//        scanf("%f" ,  &mai);
//        printf("you entered this number! %f", mai);
//        
//        
// /*エスケープシーケンス*/
//        
//    return 0;
//}
//

//int main() {
//
//    int x1; // defined an integer variable
//    int x2;
////    float x3; // defined a floating point number
////    char x4; // defined a character variable
//
//    printf("Please enter an intefer number: ");
//    scanf("%d",&x1);
//    printf("please enter another number ; ");
//    scanf("%d",&x2);
//    printf("you entered this value: %d and %d .\n\n\n", x1 , x2);
// 
//
//    return 0;
//
//}
//

//
//
//int main() {
//    
//    int x1;
//    int x2;
//    int y,z,b;
//    
//    printf("Please enter an intefer number: ");
//    scanf("%d:%d", &x1, &x2);
//    y = x1 + x2;
//    z = x1 * x2;
//    b = x1 - x2;
//          
//    printf("the sum is equal to : %d .multiplication: %i.\n\n\n", y, z);
//    
//    return 0;
//    
//}


//
//
//int main() {
//    
//    int x;
//    
//    printf("please enter a number: ");
//    scanf("%d", &x);
//    
//    if(x > 0)
//           printf("the number i positive.\n");
//   else
//       printf("The number is negative.\n");
//    
//}
//
//


int main() {
    
    int x,y;
    
    printf("please enter a number: ");
    scanf("%d", &x);
    
    y = x % 2;
    
    if (y == 0)
        printf("the number is even (divisible by 2). \n");
    
    else
        printf("the number is odd (not divisible by 2).\n");
                    
}

