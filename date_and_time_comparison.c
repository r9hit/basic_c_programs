#include <stdio.h>
#include <string.h>

// created a structure for storing a date in dd/mm/yyyy format 
typedef struct date{
    int dnum, month, year;
} date;

// created a a structure for storing time in hh/mm/ss format 
typedef struct time{
    int sec, min, hours;
} time;

int main(){
    date d[2];
    // date d1,d2;
    date *ptr1 = &d[0], *ptr2 = &d[1];
    time t[2];
    time *pt1 = &t[0], *pt2 = &t[1];
    // time t1,t2;

    for (int i = 0; i < 2; i++)
    {
        printf("Enter %d date in dd/mm/yyyy foramt : \n", i + 1);

        printf("Enter date : ");
        scanf("%d", &d[i].dnum);

        printf("Enter month : ");
        scanf("%d", &d[i].month);

        printf("Enter year : ");
        scanf("%d", &d[i].year);

        printf("Enter time for date %d in format hh/mm/ss : \n", i + 1);
        printf("Enter hours : ");
        scanf("%d", &t[i].hours);

        printf("Enter minutes : ");
        scanf("%d", &t[i].min);

        printf("Enter secs : ");
        scanf("%d", &t[i].sec);
    }
        
        // printed both dates using for loop
        for (int i = 0; i < 2; i++)
        {
            printf(" Date %d :  %d/%d/%d [%d:%d:%d] \n", i+1,d[i].dnum, d[i].month, d[i].year, t[i].hours, t[i].min, t[i].sec);
        }

        // compare both date and time one by one
        if (d[1].year > d[0].year)
        {
            printf("Date 2nd is greater than date 1st");
        }
        if (d[1].month < d[0].month)
        {
            printf("Date 2nd is greater than date 1st");
        }
        if (d[1].dnum < d[0].dnum)
        {
            printf("Date 2nd is greater than date 1st");
        }
        if (d[0].dnum > d[1].dnum)
        {
            printf("Date 1st is greater than date 2nd");
        }
        if (pt2->hours > pt1->hours)
        {
            printf("Date 2nd is greater than date 1st");
        }
        if (pt2->min > pt1->min)
        {
            printf("Date 2nd is greater than date 1st");
        }
        if (pt2->sec > pt1->sec)
        {
            printf("Date 2nd is greater than date 1st");
        }
        else if (pt1->sec > pt2->sec)
        {
            printf("Date 1st is greater than date 2nd");
        }
        else
        {
            printf("both dates are equal");
        }
        return 0;
    }