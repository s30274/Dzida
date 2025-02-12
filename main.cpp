#include <iostream>
#include <cmath>

void initSpearComposition(int depth);
void spearComposition(long part, int level, int depth);
std::string getPartName(int part);
std::string firstLetterCapital(long *part);
void printComposition(long part);
void printPartName(long part);
void printPartNameIfNotRoot(long part);
void printPartialComposition(long part);

int main() {
    int input;
    printf("Program służy do wypisywania z czego składa się dzida.\n");
    printf("Podaj złożoność dzidy: ");
    std::cin>>input;
    initSpearComposition(input);
    return 0;
}

void initSpearComposition(int depth) {
    spearComposition(4, 0, depth);
}

void spearComposition(long part, int level, int depth) {
    if (level>depth) {
        return;
    }

    printComposition(part);

    spearComposition(part*10+1, level+1, depth);
    spearComposition(part*10+2, level+1, depth);
    spearComposition(part*10+3, level+1, depth);
}

std::string getPartName(int part){
    switch (part) {
        case 1:
            return "przeddzidzi";
        case 2:
            return "śróddzidzi";
        case 3:
            return "zadzidzi";
        default:
            return "";
    }
}

void printComposition(long part){
    printPartName(part);
    printPartialComposition(part*10+1);
    printPartialComposition(part*10+2);
    printPartialComposition(part*10+3);
    printf("\n");
}

void printPartName(long part) {
    // check if part is just root
    if (part == 4) {
        printf("\n\nDzida składa się z:\n");
    } else {
        printPartNameIfNotRoot(part);
    }
}

void printPartNameIfNotRoot(long part) {
    printf("%se ", firstLetterCapital(&part).c_str());
    while (part != 4) {
        printf("%se ", getPartName(part%10).c_str());
        part/=10;
    }
    printf("dzidy składa się z:\n");
}

void printPartialComposition(long part) {
    printf("-");
    printf("%sa ", firstLetterCapital(&part).c_str());
    while (part != 4) {
        printf("%sa ", getPartName(part%10).c_str());
        part/=10;
    }
    printf("dzidy\n");
}

std::string firstLetterCapital(long *part) {
    std::string str = getPartName(*part%10);
    str[0] = toupper(str[0]);
    *part/=10;
    return str;
}
