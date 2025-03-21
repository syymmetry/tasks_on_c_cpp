#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Until_the_end() {

    char **words = NULL;
    char word[20];
    int memory = 10;
    int count = 0;
    
    words = ((char**)malloc(memory * sizeof(char*)));
    if (words == NULL) {
        printf("Ошибка выделения памяти\n");
        return;
    }


    while (1) {
        scanf("%s", word);

        if (strcmp(word, "КОНЕЦ") == 0) {
            break;
        }

        if (count >= memory) {
            memory *= 2;
            words = (char**)realloc(words, memory * sizeof(char*));
            if (words == NULL) {
                printf("Ошибка выделения памяти\n");
                return;
            }
        }

        words[count] = (char*)malloc((strlen(word) + 1) * sizeof(char));
        if (words[count] == NULL) {
            printf("ОШибка выделения памяти\n");
            return;
        }

        strcpy(words[count], word);
        count++;

    }

    printf("Введённые слова: \n");
    for (int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }

    for (int i = 0; i < count; i++) {
        free(words[i]);
    }
    free(words);
}

int main() {
    Until_the_end();
    return 0;
}




/*
The program takes a sequence of words as input, with each word on a separate line.
The end of the sequence is marked by the word "КОНЕЦ" (without quotes).
The word "КОНЕЦ" it self is not part of the sequence and only signifies its termination.
Write a program that outputs the members of this sequence
*/