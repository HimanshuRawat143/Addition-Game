#include<stdio.h>
int main(){
    int arr1[5], arr2[5], arr3[5], arr4[5], arr5[5],sum[5];
    printf("Enter five digits:  ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Answer is: ");
    for(int i=0; i<5; i++){
        if(i==0) sum[i] = arr1[i]+20;
        else if(i==4) sum[i] = arr1[i]-2;
        else sum[i] = arr1[i];
        printf("%d ",sum[i]);
    }
    printf("\n");
    printf("Enter your 5 digits: ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr2[i]);
    }
    printf("     My five digits: ");
    for(int i=0; i<5; i++){
        arr3[i] = 9-arr2[i];
        printf("%d ",arr3[i]);
    }
    printf("\n");
    printf("Enter your 5 digits: ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr4[i]);
    }
    printf("     My five digits: ");
    for(int i=0; i<5; i++){
        arr5[i] = 9-arr4[i];
        printf("%d ",arr5[i]);
    }
    printf("\n");
    return 0;
}