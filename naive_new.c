#include<stdio.h>
#include<string.h>
int sum(int a[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+a[i];
    }
    return s;
}
void main(){
    char dept[20][20]={"sales","sales","sales","systems","systems","systems","systems","marketing","marketing","secretary","secretary"};
    char status[20][20]={"senior","junior","junior","junior","senior","junior","senior","senior","junior","senior","junior"};
    char age[20][20]={"31..35","26..30","31..35","21..25","31..35","26..30","41..45","36..40","31..35","46..50","26..30"};
    char sal[20][20]={"46k..50k","26k..30k","31k..35k","46k..50k","66k..70k","46k..50k","66k..70k","46k..50k","41k..45k","36k..40k","26k..30k"};
    int count[20]={30,40,40,20,5,3,3,10,4,4,6};
    int n=11;
    float tot_count=sum(count,n);
    char d[20],a[20],s[20];
    printf("enter department,age,salary values:");
    scanf("%s%s%s",d,a,s);
    //printf("%s",a);
    float sen=0.0,jun=0.0;
    for(int i=0;i<n;i++){
        if(strcmp(status[i],"senior")==0){
            sen=sen+count[i];
        }
        else{
            jun=jun+count[i];
        }
    }
    float ps=sen/tot_count;
    float pj=jun/tot_count;
    printf("%f %f",ps,pj);
    float as=0.0,aj=0.0,ds=0.0,dj=0.0,ss=0.0,sj=0.0;
    for(int i=0;i<n;i++){
      if(strcmp(age[i],a)==0 && strcmp(status[i],"senior")==0){
          as=as+count[i];
      }
     if(strcmp(age[i],a)==0 && strcmp(status[i],"junior")==0){
          aj=aj+count[i];
      }
      if(strcmp(dept[i],d)==0 && strcmp(status[i],"senior")==0){
          ds=ds+count[i];
      }
      if(strcmp(dept[i],d)==0 && strcmp(status[i],"junior")==0){
          dj=dj+count[i];
      }
      if(strcmp(sal[i],s)==0 && strcmp(status[i],"senior")==0){
          ss=ss+count[i];
      }
      if(strcmp(sal[i],s)==0 && strcmp(status[i],"junior")==0){
          sj=sj+count[i];
      }
    }
   float pas=(as+1.0)/(sen+6.0);
    float paj=(aj+1.0)/(jun+6.0);
    float pds=ds/sen;
    float pdj=dj/jun;
    float pss=ss/sen;
    float psj=sj/jun;
    float pxs=pas*pds*pss;
    float pxj=paj*pdj*psj;
    printf("cond prob for x:%f\n cond prob for y:%f\n",pxs,pxj);
    float pps=pxs*ps;
    float ppj=pxj*pj;
    printf("posterior prob for senior:%f\n",pps);
     printf("posterior prob for junior:%f\n",ppj);
    if(pps>ppj){
        printf("x classifies to senior");
    }
    else{
        printf("x classifies to junior");
    }
    
}
      
    
