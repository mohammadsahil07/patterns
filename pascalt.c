#include<stdio.h>
int main()   {
    int n;
    printf("please enter the number of rows  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int s=1;s<=n-i;s++){printf(" ");}
        for(int j=1;j<=i;j++){printf("%d",j);}
        for(int k=1;k<=i-1;k++){printf("%d",a);a--;}
        printf("\n");
    }
    return 0;
}