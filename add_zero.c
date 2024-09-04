#include<stdio.h>
int main()
{
    int sum=0,a;
    for(int i=1;i>=0;i++)
    {
        if(a==0)
        {
            break;
        }
        else{
            printf("Enter a number: ");
            scanf("%d",&a);
            sum=sum+a;
        }
    }
    printf("Sum of entered number: %d",sum);
    
    return 0;
}