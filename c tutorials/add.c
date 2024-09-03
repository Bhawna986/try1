#include<stdio.h>
int main(){
    int n;
    printf("enter length: ");
    scanf("%d",&n);
    char name[n];
    int sum=0;
    printf("enter : ");
    scanf("%s",name);
    for(int i=0;i<=n;i++){
    if(name[i] >= 'a' && name[i] <='z'){
        sum = (name[i]-96) + sum;
    }
    }
    for(int j=0;j<1;j++){
        printf("%d",sum);
    }
    return 0;
}