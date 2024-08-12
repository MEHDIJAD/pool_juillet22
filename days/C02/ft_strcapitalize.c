#include <stdio.h>

char *ft_strcapitalize(char *str) {
    int i = 0;
    int is_start_of_word = 1;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) {
            if (is_start_of_word && (str[i] >= 'a' && str[i] <= 'z')) {
                str[i] -= 32;  // Convert to uppercase
            } else if (!is_start_of_word && (str[i] >= 'A' && str[i] <= 'Z')) {
                str[i] += 32;  // Convert to lowercase
            }
            is_start_of_word = 0; // The word has started
        } else {
            is_start_of_word = 1; // New word starts after this non-alphanumeric character
        }
        i++;
    }

    return str;
}

int main() {
    char str[] = " salut, coMment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}
