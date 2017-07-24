#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("ERROR: You need at least one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int j = 1;

    for (j = 1; j < argc; j++) {
        int i = 0;
        char letter;
        char *word = argv[j];

        for (i = 0; letter = word[i], letter != '\0'; i++) {
            if (letter > 64 && letter < 91) {
                letter += 32;
            }

            switch (letter) {
                case 'a':
                    printf("%d: 'a'\n", i);
                    break;

                case 'e':
                    printf("%d: 'e'\n", i);
                    break;

                case 'i':
                    printf("%d: 'i'\n", i);
                    break;

                case 'o':
                    printf("%d: 'o'\n", i);
                    break;

                case 'u':
                    printf("%d: 'u'\n", i);
                    break;

                case 'y':
                    if (i > 2) {
                        // it's only sometimes Y
                        printf("%d: 'y'\n", i);
                        break;
                    }

                default:
                    printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }

    return 0;
}
