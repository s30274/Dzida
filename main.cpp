#include <iostream>
#include <cmath>

void spearComposition(int depth);
void partialComposition(long part);

int main() {
    int input;
    printf("Program służy do wypisywania z czego składa się dzida.\n");
    printf("Podaj złożoność dzidy: ");
    std::cin>>input;
    spearComposition(input);
    return 0;
}

void spearComposition(int depth) {
    sklad(12)
}

void partialComposition(long part){
    if(part>=1){
        if(part%10==1){
            printf("przeddzidzia ");
            partialComposition(part/10);
        } else if(part%10==2){
            printf("śróddzidzia ");
            partialComposition(part/10);
        } else {
            printf("zadzidzia ");
            partialComposition(part/10);
        }
    }
}

void sklad(long part){
    if(i%10==0){
        printf("\nDzida składa się z:\n");
    } else {
        if(i%10==1){
            printf("\nPrzeddzidzie ");
        }
        if(i%10==2){
            printf("\nŚróddzidzie ");
        }
        if(i%10==3){
            printf("\nZadzidzie ");
        }
        partialComposition(part/10);
        printf("dzidy składa się z:\n");
    }
    printf("- ");
    partialComposition(part*10+1);
    printf("dzidy\n");
    printf("- ");
    partialComposition(part*10+2);
    printf("dzidy\n");
    printf("- ");
    partialComposition(part*10+3);
    printf("dzidy\n");
}