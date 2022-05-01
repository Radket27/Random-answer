#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int losowa(){
    srand(time(NULL));
    int liczba = rand() % 5;
    return liczba;
}

char* nazwa(int liczba){
    char* przepowiednia;
    switch(liczba){
        case 0:
        przepowiednia = "Yes";
        break;
        case 1:
        przepowiednia = "No";
        break;
        case 2:
        przepowiednia = "Maybe";
        break;
        case 3:
        przepowiednia = "Try again";
        break;
        case 4:
        przepowiednia = "You need to look deeper";
        break;
    }
    return przepowiednia;

}

int zart(int czas){
    printf("Your data are analysing\n");
    sleep(czas);
    printf("Is almost done\n");
    sleep(czas);
    printf("Answer is almost done\n");
    sleep(czas);
    return 0;
}


int main(){
    char* pytanie = (char*) malloc(sizeof(char)*256);
    printf("Write your question ('_' use this symbol if you have more then 1 word in your question):\n");
    scanf("%s",pytanie);
    printf("Now I'm looking for answer: %s\n",pytanie);
    int a1 = losowa();

    zart(a1);

    char* los = nazwa(a1);
    printf("The answer is: %s\n",los);

    return 0;
}
