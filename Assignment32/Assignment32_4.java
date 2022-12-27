import java.util.Scanner;

/*
Write a java program which accept N numbers from user and 
Display such a elements which are divisible by 3 and 5.

Input : N : 6
        Elements : 85   66  3   15  93  88
Output : 15

 */

 class ArrayX
 {
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        int iCnt = 0 ;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the "+ Arr.length +" element: ");

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1) +" element:");
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        int iCnt = 0;
        System.out.println("Elements of array are : ");

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt] +"\t");
        }
        System.out.println("");
    }
 }

 class MarvellousX extends ArrayX
 {
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public void DivisibleByThreeAndFive()
    {
        int iCnt = 0;
        System.out.println("These numbers are divisible by 3 & 5 :");
        
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 == 0))
            {
                System.out.print(Arr[iCnt] +"\t");
            }
        }  
    }
 }

 class Assignment32_4
 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many elements u enterd in array:");
        int iNo1 = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iNo1);

        mobj.Accept();
        mobj.Display();

        mobj.DivisibleByThreeAndFive();
    }
 }
