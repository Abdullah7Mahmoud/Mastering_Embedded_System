/*
 * EX5_C_Program_To_check_whether_character_is_alphabet_or_not.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c", &c);

    if ((c == 'a' && c <= 'z') || (c =='A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}


