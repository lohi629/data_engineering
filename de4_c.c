#include<stdio.h>
#include<math.h>
void main(){
    int n,a[100],min,max,r,c=0,k=0;
    float b[100];
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        
    }
    while(max>0){
         r=max%10;
         c=c+1;
        max=max/10;
    }
    for(int i=0;i<n;i++){
        b[k]=a[i]/pow(10,c);
        k=k+1;
    }
    for(int i=0;i<n;i++){
        printf("%f\n",b[i]);
    }
    
    
}

o/p:
enter the size of an array:5
enter array elements:200 300 400 600 1000
0.020000
0.030000
0.040000
0.060000
0.100000
