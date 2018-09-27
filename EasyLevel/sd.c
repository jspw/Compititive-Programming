#include<stdio.h>

main()

{
    char ch;
    printf("Enter a letter:");
    scanf("%c", &ch);
    if( ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u' || ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) {
        printf("The letter is VOWEL\n", ch);
    }
    else {
        printf("The letter is CONSONENT\n", ch);
    }
    return 0;

}
