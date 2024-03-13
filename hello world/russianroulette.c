#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){
    printf("Welcome to russion roulette\n");
    int n;
    time_t t;
    char a[0] = "";
    int bullet_pos, pos = 0;
    bool shootY = false, shootN = false;
    bool dead = false;
    char answ[10] = "";
    n = 6;

    srand((unsigned) time(&t));
    bullet_pos = (rand() % 6) + 1;

    //printf("%d\n", bullet_pos);

    do{ 
        //printf("Loop Reset");
        if(pos == bullet_pos){
                printf("You died");
                break;
        }
        
        
        printf("TOTAL SHOOTS: %d\n", pos);
        printf("Risk shoot? Y/N\n");
        scanf("%s\n", &answ);
        shootY = strcmp(answ,"Y");
        shootN = strcmp(answ,"N");

        if(shootY == 0){ 
            printf("YOUR SHOOTED\n");
            
        pos++;
        }
        else if(shootN == 0){
            printf("YOU DONT SHOOT\n");
            printf("You Give Up\nGame Ended");
            break;
        }
    }while(!dead);

    printf("\nRESULTS: \nFinal Position = %d \nBullet Position = %d", pos, bullet_pos);
    printf("\nPoints = %0.1f", ((float)bullet_pos - 1/(float)pos));

    printf("\nPress Enter to Exit: \n");
    scanf("%s ",&a);
    

    return 0;
}