#include <stdio.h>
#include <stdlib.h>

int main(){
    int f=1;
    int i;
    int p;
    int t;
    int N;
    long int com=0; long int cop=0;
    int* a = NULL;
    
    printf("Enter N:");
    scanf("%d", &N);
    
    a = (int*)malloc (N * sizeof(int));
    
    printf("1-best case, 2-middle case, 3-worst case");
    scanf("%d", &p);
    
    if(p==1){
        for(i=0; i<N; i++)
        a[i]=i+1;
        }
    if(p==2){
        for (int i = 0; i<N; i++)
          a[i] = rand() % 1000;
        }
    if(p==3){
        for(i=0; i<N; i++)
        a[i]=N-i;
        }
    
    
    while(f){
        f=0;
        for(int k=N-1;k>0;k--){
        for(i=0;i<k;i++){
        com++;
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                f=1;
                cop++;
            }}
        }
        
    }
    
    
    printf("number of comparisons %ld and copies %ld", com, cop);
    printf("\n");
    getchar();
    return 0;
  }
    
