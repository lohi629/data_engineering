#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float dist(int x1,int y1,int x2,int y2){
   float d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
   return d;
}
void main(){
    float a[20][20]={{2,10},{2,5},{8,4},{5,8},{7,5},{6,4},{1,2},{4,9}};
    int n=8,k=3;
    int l1[20][20],l2[20][20],l3[20][20],c3=0,c=0,count=0;
    float m1[2],m2[2],m3[2];
    m1[0]=a[0][0];
    m1[1]=a[0][1];
    m2[0]=a[3][0];
    m2[1]=a[3][1];
    m3[0]=a[6][0];
    m3[1]=a[6][1];
    int it=1;
    
    float mean1=0,mean2=0,mean3=0,mean4=0,mean5=0,mean6=0;
    do{
        mean1= m1[0];
        mean2=m1[1];
        mean3=m2[0];
        mean4=m2[1];
        mean5=m3[0];
        mean6=m3[1];
        
        float s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
        c=0,count=0,c3=0;
        for(int i=0;i<n;i++){
            float d1=dist(a[i][0],a[i][1],m1[0],m1[1]);
            float d2=dist(a[i][0],a[i][1],m2[0],m2[1]);
            float d3=dist(a[i][0],a[i][1],m3[0],m3[1]);
            if(d1<d2 && d1<d3){
                l1[c][0]=a[i][0];
                l1[c][1]=a[i][1];
                s1=s1+l1[c][0];
                s2=s2+l1[c][1];
                c++;
                
            }
            else if(d2<d1 && d2<d3){
                l2[count][0]=a[i][0];
                l2[count][1]=a[i][1];
                s3=s3+l2[count][0];
                s4=s4+l2[count][1];
                count++;
            }
            else{
                l3[c3][0]=a[i][0];
                l3[c3][1]=a[i][1];
                 s5=s5+l3[c3][0];
                s6=s6+l3[c3][1];
                c3++;
            }
            
        }
        m1[0]=s1/c;
        m1[1]=s2/c;
       m2[0]=s3/count;
        m2[1]=s4/count;
        m3[0]=s5/c3;
        m3[1]=s6/c3;
        if(it==1)
        {
            it++;
            printf("%f %f %f %f %f %f",m1[0],m1[1],m2[0],m2[1],m3[0],m3[1]);
        }
    
       
        
    }while((m1[0]!=mean1)||(m1[1]!=mean2)||(m2[0]!=mean3)||(m2[1]!=mean4)||(m3[0]!=mean5)||(m3[1]!=mean6));
      printf("cluster 1:");
      for(int i=0;i<c;i++){
          printf("%d %d\n",l1[i][0],l1[i][1]);
      }
      printf("cluster 2:");
      for(int i=0;i<count;i++){
          printf("%d %d\n",l2[i][0],l2[i][1]);
      }
      printf("cluster 3:");
      for(int i=0;i<c3;i++){
          printf("%d %d\n",l3[i][0],l3[i][1]);
      }
    
}
