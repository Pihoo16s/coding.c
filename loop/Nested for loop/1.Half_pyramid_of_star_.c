#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",& rows);
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
    {
        
            printf("*");
        }
    
    printf("\n");
    }
    return 0;
}
/* first i=1 then condition(i<=1) will be checked 
then we will come to the second 'for' where j=1
and then we will check condition (j<=i) which
is true so we will go to printf("*") and a 
star will be printed , after this we will go to
second increement so now j=2 and when we 
check j<=i , this is now false as i=1 and j=2
so 2<=1 , now we will go to the second printf("\n")
and next line will be printed then we will go to 
 the second increement as j=2 the condition j<=i
 is now true as 2<=1 now we will go to printf("*")
 and a star will be printed in the next line now
 we will go to first increement so i=2 and the 
 condition i<=6 is true as 2<=2 again we will go 
 to printf("*") and a star will be printed in the 
 same line , so now their are 2 stars in the 
 second line AND THE CYCLE WILL GO ON */