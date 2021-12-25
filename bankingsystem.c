#include<stdio.h>
#include<stdlib.h>

int list();
void last();
void deposite();
void transfer();
void withdraw();
void checkDetail();
int TotalAmount=1000,Amount,Amo,Tr,TotalDeposite=0,TotalWith=0,TotalTr=0;
int Acc;
char a[50];
void main()
{
    printf("\nEnter your name: ");
    fgets(a, 50, stdin);
    printf("\nEnter your account number: ");
    scanf("%d",&Acc);
    while (1)
    {
        
    switch (list())
    {
      case 1:
      deposite();
      TotalDeposite+=Amount;
      break;
      case 2:
      withdraw();
      if(Amo<=TotalAmount)
      TotalWith+=Amo;
      break;
        
      case 3:
      transfer();
      if(Tr<=TotalAmount)
      TotalTr+=Tr;
      break;
       
      case 4:
      checkDetail();
      break;
        
      case 5:
         
         last();
         getchar();
         exit(0);//terminate the program at will.    
      default:
        printf("\nInvalid choice:");
        break;
    }
    getchar();
    }
    getchar();

}
int list()
{

    int ch;
    printf("\n1. Diposite Amount: ");
    printf("\n2. Withdraw Amount: ");
    printf("\n3. Transfer Amount: ");
    printf("\n4. Check Amount: ");
    printf("\n5. Exit: ");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    return(ch);

}
void deposite()
{
    printf("\nEnter the amount you want to deposite: ");
    scanf("%d",&Amount);
    TotalAmount+=Amount;
}
void withdraw()
{
    printf("\nEnter the amount you wish to withdraw: ");
    scanf("%d",&Amo);
    if(Amo<=TotalAmount)
    TotalAmount-=Amo;
    else
    printf("\nLess amount hence withdraw not possible");
}
void transfer()
{
    printf("\nEnter the amount you want to transfer: ");
    scanf("%d",&Tr);
    if(Tr<=TotalAmount)
    TotalAmount-=Tr;
    else
    printf("\nLess amount hence transfer not possible: ");
}
void checkDetail()
{
    printf("\nTotal Amount=%d",TotalAmount);
    printf("\nTotal Diposited Amount=%d",TotalDeposite);
    printf("\nTotal Withdrawn Amount=%d",TotalWith);
    printf("\nTotal Transferred Amount=%d",TotalTr);
} 
void last()
{
    printf("\n******************************\n");
    printf("\nYour Name=%s",a);
    printf("\nAccount Number=%d",Acc);
    printf("\nTotal Amount=%d",TotalAmount);
    printf("\nTotal Diposited Amount=%d",TotalDeposite);
    printf("\nTotal Withdrawn Amount=%d",TotalWith);
    printf("\nTotal Transferred Amount=%d",TotalTr);
} 
