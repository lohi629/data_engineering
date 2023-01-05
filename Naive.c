#include<stdio.h>
#include<string.h>
void main(){
    char age[20][20]={"youth","youth","mid","old","old","old","mid","youth","youth","old","youth","mid","mid","old"};
    char income[20][20]={"high","high","high","medium","low","low","low","medium","low","medium","medium","medium","high","medium"};
    char student[20][20]={"no","no","no","no","yes","yes","yes","no","yes","yes","yes","no","yes","no"};
    char cred_rat[20][20]={"fair","exe","fair","fair","fair","exe","exe","fair","fair","fair","exe","exe","fair","exe"};
    char buy_com[20][20]={"no","no","yes","yes","yes","no","yes","no","yes","yes","yes","yes","yes","no"};
   char test_age[20],test_income[20],test_student[20],test_cred[20];
   printf("enter age,income,student,credit\n");
   scanf("%s\n%s\n%s\n%s",test_age,test_income,test_student,test_cred);
    float y=0,n=0;
    for(int i=0;i<14;i++){
        if(strcmp(buy_com[i],"yes")==0){
            y=y+1;
        }
        else{
            n=n+1;
        }
    }
    float py=y/14.0;
    float pn=n/14.0;
    float ay=0,an=0,iy=0,in=0,sy=0,sn=0,cy=0,cn=0;
  for(int i=0;i<14;i++){
      if(strcmp(age[i],test_age)==0 && strcmp(buy_com[i],"yes")==0){
          ay=ay+1;
      }
      if(strcmp(age[i],test_age)==0 && strcmp(buy_com[i],"no")==0){
          an=an+1;
      }
      if(strcmp(income[i],test_income)==0 && strcmp(buy_com[i],"yes")==0){
          iy=iy+1;
      }
      if(strcmp(income[i],test_income)==0 && strcmp(buy_com[i],"no")==0){
          in=in+1;
      }
      if(strcmp(student[i],test_student)==0 && strcmp(buy_com[i],"yes")==0){
          sy=sy+1;
      }
      if(strcmp(student[i],test_student)==0 && strcmp(buy_com[i],"no")==0){
          sn=sn+1;
      }
      if(strcmp(cred_rat[i],test_cred)==0 && strcmp(buy_com[i],"yes")==0){
          cy=cy+1;
      }
      if(strcmp(cred_rat[i],test_cred)==0 && strcmp(buy_com[i],"no")==0){
          cn=cn+1;
      }
      }
      float pay=ay/y;
      float pan=an/n;
      float piy=iy/y;
      float pin=in/n;
      float psy=sy/y;
      float psn=sn/n;
      float pcy=cy/y;
      float pcn=cn/n;
    float pxy=pay*piy*psy*pcy;
    float pxn=pan*pin*psn*pcn;
    printf("cond prob for x:%f\n cond prob for y:%f\n",pxy,pxn);
    float ppy=pxy*py;
    float ppn=pxn*pn;
    printf("posterior prob for yes:%f\n",ppy);
     printf("posterior prob for no:%f\n",ppn);
    if(ppy>ppn){
        printf("x classifies to yes");
    }
    else{
        printf("x classifies to no");
    }
    
}


o/p:
enter age,income,student,credit
youth
medium
yes
fair
cond prob for x:0.043896
 cond prob for y:0.019200
posterior prob for yes:0.028219
posterior prob for no:0.006857
x classifies to yes
