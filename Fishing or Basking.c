//
//  main.c
//  FishingAndBaking
//
//  Created by 易静远 on 7/18/16.
//  Copyright © 2016 易静远. All rights reserved.
//

#include<stdio.h>

struct date{
    
    int year;
    
    int month;
    
    int day;
    
};
int days(struct date day);//计算给定日期与1990/01/01的天数差别

int main()

{
    
    struct date today;
    struct date temp;
    
    int yearday,year,day;
    
    printf("输入 年/月/日:\n");
    
    scanf("%d/%d/%d",&today.year,&today.month,&today.day);
    
    temp.month=12;
    
    temp.day=31;
    
    for(yearday=0,year=1990;year<today.year;year++)
        
    {
        
        temp.year=year;
        
        yearday+=days(temp);     //计算给定日期与1990/01/01的天数差别
        
    }
    
    yearday+=days(today);       //累加得到总天数
    
    day=yearday%5;
    if(day>0&&day<4)
        printf("彼日其渔也。\n");
    
    else
        printf("彼日其曝其网也。\n");
    return 0;
    
}

int days(struct date day)

{
    //分别存储闰年与平年各月份的日期数目
    static int days_data[2][13]=
    
    {
        {0,31,28,31,30,31,30,31,31,30,31,30,31,},
        
        {0,31,29,31,30,31,30,31,31,30,31,30,31,},
        
    };
    
    int i,lp;
    
    lp=((day.year%4==0) && (day.year%100!=0)) || (day.year%400==0);
    
    /*判定year为闰年还是平年，lp=0为平年，非0为闰年*/
    
    for(i=1;i<day.month;i++)            /*计算本年中自1月1日起的天数*/
        
        day.day+=*days_data[lp];
    
    return day.day;
    
}

