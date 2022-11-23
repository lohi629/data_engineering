#include<stdio.h>
int mean(int arr[],int n){
    int s=0,m=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    m=s/n;
    return m;
}
void main(){
    int arr[100],n,bin,b[100],k=0,p=0;
    printf("enter array size:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter bin size:");
    scanf("%d",&bin);
    int h=n%bin;
    if(h!=0)
    {
    for(int i=0;i<(bin-h);i++)
    {
        arr[n++]=0;
    }
    }
    for(int i=0;i<n;i=i+bin){
        k=0;
        int cp=0;
        for(int j=i;j<(i+bin);j++){
            b[k]=arr[j];
            k=k+1;
        }
        cp=mean(b,bin);
       
        for(p=i;p<(i+bin);p++){
            arr[p]=cp;
            
        }
        
       
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}



o/p:
enter array size:27
Enter array elements:13 15 16 16 19 20 20 21 22 22 25 25 25 25 30 33 33 35 35 35 35 36 40 45 46 52 70
enter bin size:3
14
14
14
18
18
18
21
21
21
24
24
24
26
26
26
33
33
33
35
35
35
40
40
40
56
56
56
