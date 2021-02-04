#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void encrypt();
void decrypt();

int main(){
    int choice;
    while(1){
        printf("\nMENU: \n1. Encryption 2. Decryption 3. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                encrypt();
                break;
            case 2:
                decrypt();
                break;
            case 3:
		printf("Exited successfully\n");
                exit(0);
            default:
                printf("Invalid choice\n");

        }
    }
    return 0;
}