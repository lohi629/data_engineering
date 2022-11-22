#include<stdio.h>
#include<stdlib.h>
void mean_fun(int a[],int n){
    int s=0,m=0;
    for(int i=0;i<n;i++){
        s=s+a[i];
    }
    m=s/n;
    printf("mean is: %d\n",m);
}
void median(int a[],int n){
    int med;
    if(n%2==0){
        med=(a[n/2]+a[n/2+1])/2;
    }
    else{
        med=a[n/2];
    }
    printf("median is %d\n",med);
    
}
void modef(int a[],int n){
    
    int c,mo,count[100],k=0;
    for(int i=0;i<n;i++){
        c=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c=c+1;
            }
        }
        count[i]=c;
    }
    int max=count[0],max_index,m_c=0,mode[100],flag=0;
   for(int i=0;i<n;i++){
        if(count[i]>max){
            max=count[i];
            m_c=m_c+1;
        }
   }
   for(int i=0;i<n;i=i+count[i]){
       if( count[i]==max){
           mode[k]=a[i];
           k=k+1;
       }
   }
       
       
       for(int i=0;i<k;i++){
           printf("%d\n",mode[i]);
       }
switch(k){
    case 0:printf("no mode");
    break;
    case 1:printf("uni modal");
    break;
    case 2:printf("bi modal");
    break;
    case 3:printf("tri modal");
    break;
    default:printf("multi modal");
    break;
}

    
}
void range(int a[],int n){
    float mid_ran;
    mid_ran=(a[n-1]+a[0])/2.0;
    printf("mid range is:%f\n",mid_ran);
}
void quartile(int a[],int n){
    int q1,q3;
    q1=a[(n+1)/4];
    q3=a[(3*(n+1))/4];
    printf(" first quartile is %d\n",q1);
    printf("third quartile is %d\n",q3);
}
void summary(int a[],int n){
    printf("summary is:");
    printf("min ele is %d\n",a[0]);
    quartile(a,n);
   median(a,n);
    printf("max ele is %d\n",a[n-1]);
    
}
void main(){
    int a[100],n,i,mean;
    printf("enter array size:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mean_fun(a,n);
    median(a,n);
    modef(a,n);
   range(a,n);
    quartile(a,n);
    summary(a,n);
}

o/p:

enter array size:25
enter elements:13 15 16 16 19 20 20 21 22 22 25 25 25 25 30 33 33 35 35 35 36 40 45 52 70
mean is: 29
median is 25
25
uni modalmid range is:41.500000
 first quartile is 20
third quartile is 35
summary is:min ele is 13
 first quartile is 20
third quartile is 35
median is 25
max ele is 70
