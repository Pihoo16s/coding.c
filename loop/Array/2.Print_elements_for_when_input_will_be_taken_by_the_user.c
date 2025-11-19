// when input will be taken by the user

#include<stdio.h>
int main()
{
int i=0 ,a[10];                          // a[10]={2,4,6,8,10,12,14,16,18,20} --> input will not be taken by the user as value is already asigned
printf("enter a element in array: ");
for(i=0;i<=9;i++){
    scanf("%d",& a[i]);
}
for(i=0;i<=9;i++){
    printf("%d",a[i]);
}
return 0;
}