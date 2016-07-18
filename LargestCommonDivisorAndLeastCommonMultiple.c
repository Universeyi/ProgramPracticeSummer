//
//  LargestCommonDivisorAndLeastCommonMultiple.c
//  SummerPractice
//
//  Created by 易静远 on 7/18/16.
//  Copyright © 2016 易静远. All rights reserved.
//

#include <stdio.h>
int main(){
    int m, n, a, b, c;
    printf("输入两个数字\n");
    scanf("%d%d", &a, &b);
    m=a;   n=b;
    while(b!=0)//辗转相处直至零
    {
        c=a%b; a=b;  b=c;
    }
    printf("最大公约数是:%d\n", a);
    printf("最小公倍数是:%d\n", m*n/a);
    return 0;
}
