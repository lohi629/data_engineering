#include<stdio.h>
void apriori(int l[][],int n,int size[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<size[i];j++){
            if(l[i][j]==)
        }
    }
}
void main(){
    int l[100][100],i=0,j=0,n,s,id[100],size[100],k=0,d;
    printf("enter array size:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        printf("enter id:");
        scanf("%d",&d);
        id[i]=d;
        printf("enter size:");
        scanf("%d",&s);
        size[k]=s;
        k++;
        for(int j=0;j<s;j++){
            scanf("%d",&l[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",id[i]);
        for(j=0;j<size[i];j++){
            printf("%d\t",l[i][j]);
        }
        printf("\n");
    }
}
