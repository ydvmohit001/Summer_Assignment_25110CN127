#include <stdio.h>
int main(){
    int n,i,tn,miss,s=0;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter %d element:",n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
tn=n*(n+1)/2;
miss=tn-s;
printf("missing number %d",miss);
return 0;
}