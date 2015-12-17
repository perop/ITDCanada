//
//  main.c
//  C Practice4
//
//  Created by TakahashiMai on 2015-11-24.
//  Copyright © 2015 TakahashiMai. All rights reserved.
//

#include <stdio.h>


//
//int main(int argc, const char * argv[]) {
//    
//   // 配列のソートの仕方
//    
//    int i;
//    int x[5];
//    int num;
//    int j;
//    
//
//    for (i=0; i<5; i++) {
//        printf("Please enter number: ");
//        scanf("%i", &x[i]);
//    }
//    
//    for(j=0; j<4; j++){
//    for (i=0; i<4; i++) {
//        
//        if(x[i] > x[i+1]){
//            num = x[i];
//            x[i] = x[i+1];
//            x[i+1] = num;
//        }
//        }
//    }
//    
//    for (i=0; i<5; i++){
//    printf("x[%i] is %i\n",i,x[i]);
//    }
//    
//    return 0;
//}
//


//Implement Prime Number


int main(int argc, const char * argv[]) {
    int i, num, flag;
    
    printf("The number is ");
    scanf("%i", &num);
    
    for ( i=2; i<num; i++ ) {
        if( num%i == 0 ){
            flag= 1;
            break;
        }
    }
    
    if( flag==0 )
        printf("%i is Prime.\n", num);
    else
        printf("%i is Non-Prime.\n", num);
    
    
    return 0;
}














