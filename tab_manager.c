#include <stdio.h>

int main(void){
    FILE *fptr;
    char title[50];
    int categories;
    printf("How many categories?....");
    scanf("%i",&categories);

    fptr = fopen("Tabs.txt","w");
    for(int i = 0;i<categories;i++){
        printf("Name of category: ");
        scanf("%s",&title);
        fprintf(fptr,"%s\n>",title);
    };
    fclose(fptr);
};
