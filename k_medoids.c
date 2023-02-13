#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
void main(){
    int a[20][20]={{2,10},{2,5},{8,4},{5,8},{7,5},{6,4},{1,2},{4,9}};
    int n=8,k=2;
    //INT_MAX=infinite
    int min=INT_MAX,x,y;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            for(int p=0;p<n;p++){
                if((abs(a[p][0]-a[i][0])+abs(a[p][1]-a[i][1]))<(abs(a[p][0]-a[j][0])+abs(a[p][1]-a[j][1]))){
                    sum=sum+(abs(a[p][0]-a[i][0])+abs(a[p][1]-a[i][1]));
                }
                else{
                    sum=sum+(abs(a[p][0]-a[j][0])+abs(a[p][1]-a[j][1]));
                }
            }
            if(sum<min && sum!=0){
                min=sum;
                x=i;
                y=j;
            }
        }
    }
    int l1[50][50],l2[50][50],c=0,count=0;
    for(int i=0;i<n;i++){
        if((abs(a[i][0]-a[x][0])+abs(a[i][1]-a[x][1]))<(abs(a[i][0]-a[y][0])+abs(a[i][1]-a[y][1]))){
            l1[c][0]=a[i][0];
            l1[c][1]=a[i][1];
            c++;
        }
        else{
            l2[count][0]=a[i][0];
            l2[count][1]=a[i][1];
            count++;
        }
    }
    for(int i=0;i<c;i++){
        printf("%d %d\n",l1[i][0],l1[i][1]);
    }
    printf("second cluster:");
    for(int i=0;i<count;i++){
        printf("%d %d\n",l2[i][0],l2[i][1]);
    }
    
}
