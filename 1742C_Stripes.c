#include <stdio.h>

int main()
{
    long long int t;
    scanf("%lld", &t);
    while(t--)
    {
        char blank_line[2];
        fgets(blank_line, sizeof(blank_line), stdin);

        char grid[8][8];
        int i=0;
        int j=0;
        int rcnt=0;
        int bcnt=0;
        int dotcnt=0;
        char r = 'R';
        char b = 'B';
        char dot = '.';
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                scanf(" %c", &grid[i][j]);

            }
        }
        for (i = 0; i < 8; i++)
        {
            rcnt = 0;
            for (j = 0; j < 8; j++)
            {
                if (grid[i][j] == 'R')
                {
                    rcnt++;
                }
            }
            if (rcnt == 8)
            {
                printf("R\n");
                break;
            }
        }
        if (rcnt != 8)
        {
            for (j = 0; j < 8; j++)
            {
                bcnt = 0;
                for (i = 0; i < 8; i++)
                {
                    if (grid[i][j] == 'B')
                    {
                        bcnt++;
                    }
                }
                if (bcnt == 8)
                {
                    printf("B\n");
                    break;
                }
            }
        }
    }
    return 0;
}   