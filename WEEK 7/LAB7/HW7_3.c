// 67070503437 Phurithip Paisanworajit
#include <stdio.h>

void printConsecutiveTriangles(int numTriangles, int sizes[])
{
    int num = 1;

    for (int i = 0; i < numTriangles; i++)
    {
        int currentSize = sizes[i];

        for (int row = 1; row <= currentSize; row++)
        {

            for (int col = 1; col <= row; col++)
            {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    }
}

int main()
{
    int numTriangles;
      scanf("%d", &numTriangles);

    int sizes[numTriangles];

    for (int i = 0; i < numTriangles; i++)
    {
        scanf("%d", &sizes[i]);
    }

    printConsecutiveTriangles(numTriangles, sizes);

    return 0;
}