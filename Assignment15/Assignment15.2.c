// Accept N numbers from user and return difference between
// frequency of even numbers and odd numbers.

// Input : N : 7
//          Elements : 85   66  3   80  93  88  90  
// Output : 1   (4-3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenFRequency=0;
    int iOddFrequency=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenFRequency++;
        }
        else
        {
            iOddFrequency++;
        }
    }
    return iEvenFRequency-iOddFrequency;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter how many element u want:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("unable to allocate the memory:\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter %d element:\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iSize);
    printf("Difference between frequency of even and odd numbers:%d\n",iRet);

    free(ptr);

    return 0;
}