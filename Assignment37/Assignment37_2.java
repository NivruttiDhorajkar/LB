import java.util.Scanner;

/*
Write a java program which accept number of rows and number of columns 
from user and display below pattern.

Input : iRow = 4    iCol = 3
Output : 
            1   2   3
            1   2   3
            1   2   3
            1   2   3
*/

class Design
{
    public void Dispaly(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
       
        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment37_2
{
    public static void main(String a[])
    {
        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iNo2 = sobj.nextInt();

        Design dobj =  new Design();
        dobj.Dispaly(iNo1, iNo2);
    }
}




