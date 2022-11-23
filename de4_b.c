#include<stdio.h>
#include<math.h>
float mean(int a[],int n){
    int s=0;
    float m=0.0;
    for(int i=0;i<n;i++){
        s=s+a[i];
    }
    m=s/n;
    return m;
}
float sigma(int a[],int n){
    float sig=0.0,v=0.0,m;
    m=mean(a,n);
    for(int i=0;i<n;i++){
        sig=sig+((a[i]-m)*(a[i]-m));
    }
    v=sqrt(sig/n);
    return v;
}
void main(){
    int n,a[100],min,max,r;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    for(int i=0;i<n;i++){
        a[i]=(a[i]-(mean(a,n)))/sigma(a,n);
        printf("%d\n",a[i]);
    }
    
}

o/p:enter the size of an array:5
enter array elements:200 300 400 600 1000
-1
0
0
0
2
