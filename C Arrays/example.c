//10 students each student has mid and fin ginal mid is %40 final is%60 and find deviation
#include <stdio.h>
#include <math.h>
int main(){
    double sdf=0.0,sdm=0.0,sdt=0.0,tg[10];
    double avgm=0.0,avgf=0.0,avgt=0.0;
    int grades[10][2];
    int i,N=10,j;
    for(i=0;i<10;i++){
        printf("%d. student midterm exam grade:",i+1);
        scanf("%d",&grades[i][0]);
        printf("%d. student final exam grade :",i+1);
        scanf("%d",&grades[i][1]);
        avgm+=grades[i][0];
        avgf+=grades[i][1];
        tg[i]=grades[i][0]*0.6+grades[i][1]*0.4;
        avgt+=tg[i];


    }
    avgm/=N;
    avgf/=N;
    avgt/=N;
    for(i=0;i<10;i++){
        sdm+=(avgm-grades[i][0])*(avgm-grades[i][0]);
        sdf+=(avgf-grades[i][1])*(avgf-grades[i][1]);
        sdt+=(avgt-tg[i])*(avgt-tg[i]);

    }
    sdm=sqrt(sdm/N);
    sdf=sqrt(sdf/N);
    sdt=sqrt(sdt/N);
printf("%5s %12s %12s %12s\n","#","Midterm","Final","Total");
for(i=0;i<10;i++){
    printf("%d. Student",i+1);
    for(j=0;j<2;j++){
        printf("%12d",grades[i][j]);
    }
    printf("%12lf\n",tg[i]);
}
printf("%5s %12lf %12lf %12lf\n","avg",avgm,avgf,avgt);
printf("%5s %12lf %12lf %12lf","sd",sdm,sdf,sdt);


}