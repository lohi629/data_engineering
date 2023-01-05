#include<stdio.h>
void main(){
    int item_set[10]={1,2,3,4,5};
    int n1=5;
    int n2=9;
    int sizes[10]={3,2,2,3,2,2,2,4,3};
    int list_of_items[100][100]={{1,2,5},{2,4},{2,3},{1,2,4},{1,3},{2,3},{1,3},{1,2,3,5},{1,2,3}};
    int c1[100],k=0;
    for(int p=0;p<5;p++){
        int c=0;
for(int i=0;i<n2;i++){
        for(int j=0;j<sizes[i];j++){
         if(list_of_items[i][j]==item_set[p]){
                    c++;
                    break;
                }
            }
}
if(c>=2){
    c1[k]=c;
            k++;
}

}
int c2[100],y=0,l2[100][100],z,f=0;
for(int p=0;p<5;p++){
    for(int q=p+1;q<5;q++){
        int u=0;
        for(int i=0;i<n2;i++){
            for(int j=0;j<sizes[i];j++){
                for(int r=j+1;r<sizes[i];r++){
                   
                if(list_of_items[i][j]==item_set[p]&&list_of_items[i][r]==item_set[q]){
                    u++;
                    //printf("%d\n",u);
                   
                    break;
                }
               
                }
               
            }
       
       
        }
        //printf("%d\n",u);
        if(u>=2){
            c2[y]=u;
            l2[f][0]=item_set[p];
            l2[f][1]=item_set[q];
            y++;
            f++;
           
           
        }
    }
   
   
}
int c33[100][100],k3=0,k4=0,z1=0;
for(int i=0;i<f;i++){
    for(int j=i+1;j<f;j++){
            if(l2[i][0]==l2[j][0]){
                c33[k4][0]=l2[i][0];
                c33[k4][1]=l2[i][1];
                c33[k4][2]=l2[j][1];
               
               k4++;
           
        }
     
    }
     
   
   
}
int l3[100][100],k33,c34[100],l33=0,l34=0;
for(int a=0;a<k4;a++){
    k33=0;
    for(int i=0;i<n2;i++){
       
        if(sizes[i]>=3){
           
        for(int j=0;j<sizes[i];j++){
           
            for(int k=j+1;j<sizes[i];j++){
                for(int l=j+2;l<sizes[i];l++){
                    if(c33[a][0]==list_of_items[i][j]&&c33[a][1]==list_of_items[i][k]&&c33[a][2]==list_of_items[i][l]){
                        k33++;
                        //printf("%d",k33);
                        break;
                    }
                }
            }
           
        }
       
    }
   
}
if(k33>=2){
                l3[l34][0]=c33[a][0];
                l3[l34][1]=c33[a][1];
                l3[l34][2]=c33[a][2];
                l34++;
            }
}
for(int a=0;a<l34;a++){
    for(int b=0;b<3;b++){
        printf("%d\n",l3[a][b]);
    }
}

}


