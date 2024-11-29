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
    for(int i=0; i<std::pow(3, depth-1)+1; i++) {
        if (i == 0) {
            printf("\nDzida składa się z:\n");
            printf("- ");
            partialComposition(1);
            printf("dzidy\n");
            printf("- ");
            partialComposition(2);
            printf("dzidy\n");
            printf("- ");
            partialComposition(3);
            printf("dzidy\n");
            printf("-------------------------------");
        }
        if (depth > 1 && i % 3 == 1) {
            printf("\nPrzeddzidzie ");
            partialComposition(0);
            printf("dzidy składa się z:\n");
            printf("- ");
            partialComposition(11);
            printf("dzidy\n");
            printf("- ");
            partialComposition(12);
            printf("dzidy\n");
            printf("- ");
            partialComposition(13);
            printf("dzidy\n");
        }
        if (i % 3 == 2) {
            printf("\nŚróddzidzie ");
            partialComposition(0);
            printf("dzidy składa się z:\n");
            printf("- ");
            partialComposition(21);
            printf("dzidy\n");
            printf("- ");
            partialComposition(22);
            printf("dzidy\n");
            printf("- ");
            partialComposition(23);
            printf("dzidy\n");
        }
        if (i >= 1 && i % 3 == 0) {
            printf("\nZadzidzie ");
            partialComposition(0);
            printf("dzidy składa się z:\n");
            printf("- ");
            partialComposition(31);
            printf("dzidy\n");
            printf("- ");
            partialComposition(32);
            printf("dzidy\n");
            printf("- ");
            partialComposition(33);
            printf("dzidy\n");
            printf("-------------------------------");
        }

    }
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