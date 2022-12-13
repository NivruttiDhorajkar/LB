/*
Write a program which accept string from user and count 
number of capital charcters.

Input : "Marvellous Multi OS"
Output : 4

*/

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str !='\0')
    {
       if((*str>='A') && (*str <= 'Z'))
       {
            iCnt++;
       }
        str++;
    }
    return iCnt;
}

int main()
{
    char ch[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",ch);

    iRet = CountCapital(ch);
    printf("Capital letter in a string is :%d",iRet);

    return 0;
}