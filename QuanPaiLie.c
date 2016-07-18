//
//  main.c
//  SummerPractice
//
//  Created by 易静远 on 7/18/16.
//  Copyright © 2016 易静远. All rights reserved.
//  全排列实现多种不重复的数字。

#include<stdio.h>

void Permutation(char* pStr, char* pBegin);

void permutation(char* pStr)
{
    Permutation(pStr, pStr);
}

void Permutation(char* pStr, char* pBegin)
{
    if(!pStr || !pBegin)
        return;
    
    if(*pBegin == '\0')
    {
        printf("%s\n", pStr);
    }
    else
    {
        for(char* pCh = pBegin; *pCh != '\0'; ++ pCh)
        {
            // swap pCh and pBegin
            char temp = *pCh;
            *pCh = *pBegin;
            *pBegin = temp;
            
            Permutation(pStr, pBegin + 1);
            // restore pCh and pBegin
            temp = *pCh;
            *pCh = *pBegin;
            *pBegin = temp;
        }
    }
}

int main()
{
    char str1[] ={'1','2','3','\0'};
    char str2[] ={'1','2','4','\0'};
    char str3[] ={'1','3','4','\0'};
    char str4[] ={'2','3','4','\0'};
    permutation(str1);
    permutation(str2);
    permutation(str3);
    permutation(str4);
    getchar();
    return 0;
}