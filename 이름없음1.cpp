#include <stdio.h>
int main(){
    int case1;
    scanf("%d",&case1);
    
    int i,j;
    int result[case1][8];
    int okmax[case1];
    int nomax[case1];
    int oksum[case1];
    int nosum[case1];
    
    for(i=0;i<case1;i++){
        for(j=0;j<8;j++){
            scanf("%d",&result[i][j]);
        }
        okmax[i],nomax[i],oksum[i],nosum[i] = 0;
        for(j=0;j<4;j++){
            oksum[i]=oksum[i]+result[i][j];
            if(okmax[i] < result[i][j]){
                okmax[i] = result[i][j];
            }
        }
        for(j=4;j<8;j++){
            nosum[i]=nosum[i] + result[i][j];
            if(nomax[i] < result[i][j]){
                nomax[i] = result[i][j];
            }
        }
    }
    
    for(i=0;i<case1;i++){
        if(oksum[i] > nosum[i] && okmax[i] < nomax[i]){
            printf("S\n");
        }else if(okmax[i] > nomax[i] && oksum[i] < nosum[i]){
            printf("I\n");
        }else{
            printf("R\n");
        }
    }
}
