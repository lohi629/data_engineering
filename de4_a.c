#include<stdio.h>
void main(){
    int n,a[100],min,max,r;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    r=max-min;
    for(int i=0;i<n;i++){
        a[i]=(a[i]-min)/r;
        printf("%d\n",a[i]);
    }
    
}

o/p:
enter the size of an array:5
enter array elements:200 300 400 600 1000
0
0
0
0
1
