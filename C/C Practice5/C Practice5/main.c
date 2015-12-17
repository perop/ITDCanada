//
//  main.c
//  C Practice5
//
//  Created by TakahashiMai on 2015-11-25.
//  Copyright © 2015 TakahashiMai. All rights reserved.
////
//
//#include <stdio.h>
//
//
//int main(int argc, const char * argv[]) {
//    
//    int i, reminder, num,divided;
//    int array[20];
//    int ccount = 19;
//    
//    printf("Enter your number: ");
//    scanf("%i", &num);
//
//    while (num != 1) {
//        reminder = num % 2;
//        array [ccount] = reminder;
//        ccount--;
//        num = num / 2;
//        
//        
//    }
//    
//    array[ccount] = 1;
//
//    
//    for (i = ccount; i< 20 ; i++) {
//        
//        printf("%i\n", array[i]);
//    }
//    
//    return 0;
//}
//
//

//
//int main(){
//
////getstring
//    
//    char x[10];
//    int i;
//    
//    gets(x);
//    
//}
//



#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    int i, reminder, num;
    int res[100];
    int ccount = 99;
  
    
    printf("Enter a decimal number to get it converted in Hex: ");
    scanf("%i", &num);
    
    while (num >= 16) {
        reminder = num % 16;
        num = num / 16;
        res[ccount] = reminder;
        ccount = ccount -1 ;
        
    }
    
    res[ccount] = num;
    
    
    for (i = ccount ; i< 100 ; i++) {
        
        printf("%i\n", res[i]);
    }
    
    return 0;
}


