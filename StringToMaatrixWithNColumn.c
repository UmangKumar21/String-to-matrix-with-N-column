#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[101];
    int N;
    scanf("%s %d",&str,&N);
    int x=0;
    for(int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
        x++;
        if(x==N){
            printf("\n");
            x=0;
        }
    }
    while(x!=N && x!=0){
        printf("*");
        x++;
    }
}
