#include<stdio.h>
void main(){
    int x[100],len_x,len_y,sum_x=0;
     float sum_y=0.0;
    float y[100];
    printf("enter size of array x:");
    scanf("%d",&len_x);
    printf("enter size of an array y:");
    scanf("%d",&len_y);
    printf("enter array x ele:");
    for(int i=0;i<len_x;i++){
        scanf("%d",&x[i]);
       
    }
    printf("enter array y ele:");
    for(int i=0;i<len_y;i++){
        scanf("%f",&y[i]);
    }
    for(int i=0;i<len_x;i++){
        sum_x=sum_x+x[i];
        sum_y=sum_y+y[i];
    }
    float xbar=sum_x/len_x;
    float ybar=sum_y/len_y;
    float xy=0.0;
    for(int i=0;i<len_x;i++){
        xy=xy+(x[i]*y[i]);
    }
    float cov=(xy/len_x)-(xbar*ybar);
    printf("%f",cov);
}
