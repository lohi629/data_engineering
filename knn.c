#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
    int height[100]={158,158,158,160,160,163,163,160,163,165,165,165,168,168,168,170,170,170};
    int weight[100]={58,59,63,59,60,60,61,64,64,61,62,65,62,63,66,63,64,68};
    char ts[100]={'m','m','m','m','m','m','m','l','l','l','l','l','l','l','l','l','l','l'};
    int h,w;
    printf("enter height and weight to classify:");
    scanf("%d%d",&h,&w);
    int a[100],b[100],k=0,l=0;
    for(int i=0;i<18;i++){
        a[i]=abs(height[i]-h)+abs(weight[i]-w);
        b[i]=a[i];
    }
    for(int i=0;i<18;i++){
        for(int j=i+1;j<18;j++){
            if(a[i]>a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<18;i++){
        if(b[i]==a[0]){
            printf("%c",ts[i]);
            break;
        }
    }
}
