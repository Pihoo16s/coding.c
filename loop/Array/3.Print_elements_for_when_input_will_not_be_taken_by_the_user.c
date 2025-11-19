#include<stdio.h>
int main()
{
    int i=0,a[10]={1,2,3,4,5,6,7,8,9,0};
    printf("Enter elements in array: ");
    for(i=0;i<=9;++i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;++i){
        printf("%d",a[i]);
    }
    return 0;
}