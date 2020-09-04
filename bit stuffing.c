#include<stdio.h>
int main(){
    int flag[] ={0,1,1,1,1,1,1,0};
    int n;
    //printf("enter number of  bits");
    scanf("%d", &n);
    int bits[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &bits[i]);
    }
    for(int i = 0; i < 8; i++){
        printf("%d", flag[i]);
        
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(bits[i] == 1){
            cnt++;
        }
        else{
            cnt = 0;
        }
        printf("%d",bits[i]);
        if(cnt == 5){
            printf("0");
            cnt = 0;
        }
    }
    for(int i =0; i < 8; i++){
        printf("%d", flag[i]);
        
    }
    return 0;
}