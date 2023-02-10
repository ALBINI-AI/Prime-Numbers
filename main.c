#include <stdio.h>
#include<math.h>
int main()
{
    int n1,n2,i,j,temp;
    printf("Enter the numbers to check:");
    scanf("%d %d",&n1,&n2);
    printf("The prime numbers between the given numbers are:\n");
    for(i=n1;i<=n2;i++)
    {
        if(i==1)
           continue;
        if(i==2)
        {
            printf("%d",i);
            continue;
        }
        if(i%2==0)
            continue;
        temp=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                temp=0;
                break;
            }
        }
        if(1==temp){
            printf("%d ",i);}
            
    }
    return 0;
}
