#include<stdio.h>

int main(){
  int matrisa[5][5]={1,2,3,4,5,3,2,5,4,1,3,4,5,2,1,5,2,1,3,4,3,4,2,1,5};
    int matrisb[5][5]={0,1,2,3,4,4,3,0,1,2,2,3,0,4,1,3,4,1,2,0,2,1,0,3,4};
      int carpmatris[5][5]={0};
       int i,j,t;
         for (i=0;i<5;i++){
     		for (j=0;j<5;j++){
	         	for (t=0;t<5;t++){
	     		carpmatris[i][j]+=matrisa[i][t]*matrisb[t][j];
	}
	}
	}
	    for (i=0;i<5;i++){
		    for (j=0;j<5;j++){
			printf("%3d",carpmatris [i][j]);
			
	}
		printf("\n");
		
	}
	}
