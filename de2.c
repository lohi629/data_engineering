#include<stdio.h>
#include<math.h>
void main(){
    int n,x[100],s=0;
    float sum_x=0.0;
    float y[100],sum_y=0.0,xsq=0.0,ysq=0.0;
    printf("enter array size:");
    scanf("%d",&n);
    printf("enter array elements of x:");
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    printf("enter array elements of y:");
    for(int i=0;i<n;i++){
        scanf("%f",&y[i]);
    }
    for(int i=0;i<n;i++){
        s=s+(x[i]*y[i]);
        
        sum_x=sum_x+x[i];
        sum_y=sum_y+y[i];
        xsq=xsq+(x[i]*x[i]);
        ysq=ysq+(y[i]*y[i]);
    }
    printf("%d\n",s);
    float p=s/n;
    
    float xbar=sum_x/n;
    float ybar=sum_y/n;
    float xy=xbar*ybar;
    float cov=p-xy;
    float varx=(xsq/n)-(xbar*xbar);
    float vary=(ysq/n)-(ybar*ybar);
    float sigx=sqrt(varx);
    float sigy=sqrt(vary);
    float corr=cov/(sigx*sigy);
    printf("correlation is :%f\n",corr);
    printf("%f\n%f\n",sigx,sigy);
    printf("%f",cov);
    
    
}


o/p:
enter array size:18
enter array elements of x:23 23 27 27 39 41 47 49 50 52 54 54 56 57 58 58 60 61
enter array elements of y:9.5 26.5 7.8 17.8 31.4 25.9 27.4 27.2 31.2 34.6 42.5 28.8 33.4 30.2 34.1 32.9 41.2 35.7
25755
correlation is :0.806463
12.846202
8.993660
93.174194
