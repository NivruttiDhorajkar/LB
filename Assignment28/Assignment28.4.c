/*
Write a program which return largest element
from singly linear linked list.

Input linked list : |110|->|230|->|320|->|240|
Output : 320

*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack (1)

struct node
{
    int Data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL; 
    newn->Data = No;

    if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }

}

void Display(PNODE First)
{
    printf("Elements of linked list are:\n");
    while(First != NULL)
    {
        printf("|%d|->",First->Data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

int Maximum(PNODE First)
{
    int iMax = 0;

    while(First != NULL)
    {
        if(First->Data > iMax)
        {
            iMax = First->Data;
        }
        First = First->next; 
    }
    return iMax;
    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iRet1 = 0;
    int iValue1 = 0;

    InsertFirst(&Head,110);
    InsertFirst(&Head,230);
    InsertFirst(&Head,320);
    InsertFirst(&Head,240);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in linked list are:%d\n",iRet);

    iRet1 = Maximum(Head);
    printf("Largest element in the linked list is : %d\n",iRet1);
   
    return 0;
}