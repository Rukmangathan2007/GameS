#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
int main(){
    printf("--------------------------------------------\n");
    printf("+++++++++++++GUESS THE NUMBER+++++++++++++++\n");
    printf("--------------------------------------------\n");
    printf("\n1 | C --> correct number and correct position\n");
    printf("2 | R --> correct number and WRONG position\n");
    printf("3 | W --> WRONG number\n");
    srand(time(0));
    int n=5;
    char key[6];
    for(int i=0;i<n;i++){
        int temp=rand()%10;
        key[i]=temp+'0';
    }
    key[n]='\0';
    int count=0;
    while(count<=6){
        
        char user[6];
        scanf("%s",user);
        if(strcmp(key,user)==0){printf("you won...");return 0;}
        for(int i=0;i<n;i++){
            int f=0;
            if(key[i]==user[i]){
                printf("C");
            }
            else{
                for(int j=0;j<n;j++){
                    if(user[i]==key[j]){
                        printf("R");
                        f=1;
                        break;
                    }
                }
                if(f==0)printf("W");
            }
            
        }
        printf("\n");
        count++;
    }
    printf("Better Luck Next time \n The Number Is %s",key);
}