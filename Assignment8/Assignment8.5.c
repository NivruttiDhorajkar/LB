// Write a program which accept number from user and 
// display its table in reverse.

// Input : 2
// Output : 20  18  16  14  12  10  8   6   4   2 

// Input : 5
// Output : 50  45  40  35  30  25  20  15  10  5

// Input : -5
// Output : 50  45  40  35  30  25  20  15  10  5

#include<stdio.h>

void ReverseTable(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    int iCnt=0;

    for(iCnt=10; iCnt > 0; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    ReverseTable(iValue);

    return 0;
}