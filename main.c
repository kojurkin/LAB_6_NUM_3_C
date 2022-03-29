#include <stdio.h>

int main()
{
    char c;
    FILE *input = fopen("in1.txt", "r");
    FILE *charfile = fopen("out1.txt", "w");
    FILE *numfile = fopen("out2.txt", "w");

    while (!feof(input))
    {
        fscanf(input, "%c", &c);
        if ('0' <= c && c <= '9')
        {
            fprintf(numfile, "%c ", c);
        } else if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || (c == ',') || (c == '.') || (c == ';') || (c == '-') || (c == ':') || (c == '\"') || (c == '(') || (c == ')') || (c == '!') || (c == '?') || (c == '\''))
        {
            fprintf(charfile, "%c ", c);
        }
    }
    fclose(input);
    fclose(charfile);
    fclose(numfile);
    return 0;
}
