#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001], s2[1001];
    scanf("%[^\n]s", s1);
    scanf("%s", s2);
    int count = 0;
    for (int i = 0; i <= strlen(s1) - strlen(s2); ++i)
    {
        int match = 1;
        for (int j = 0; j < strlen(s2); ++j)
        {
            if (s1[i + j] != s2[j])
            {
                match = 0;
                break;
            }
        }
        if (match) ++count;
    }
    printf("%d\n", count);
    return 0;
}
