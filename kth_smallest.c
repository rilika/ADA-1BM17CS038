#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],n,i,k,j,temp,s=a[0];
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("enter the value of k");
    scanf("%d",&k);
    for(i=0;i<k-1;i++)
    { 
        printf("%d",a[i]);
    }
    return 0;
}
