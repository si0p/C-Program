# include<stdio.h>
int main(){
    int n=2,sum=0,a;
    printf("Enter the number upto which you want sum of even numbers:\n");
    scanf("%d",&a);
    while(n<=a)
        {
           sum=sum+n;
           n+=2;
        }
    printf("The sum of all even numbers upto %d is %d\n",a,sum);
return 0;
}