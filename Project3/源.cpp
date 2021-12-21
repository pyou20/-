#include <stdio.h>
#include <math.h>

void search(int n)
{
    int i, count = 0, m;
    int num = 0;
    for (m = 0; m <= n; m++)
    {
        
        for (i = 0; i <= n; i++)
        {
            if (i + 100 == m * m)
            {
                for (int j = 0; j < sqrt(i+268); j++) {
                    if (i + 268 == j *j) {
                        num++;
                        printf("%d ", i);
                        if (num % 5 == 0)
                            printf("\n");
                    }
                }
               
            }
        }
    }

}
int main()
{
    int number;
    scanf_s("%d", &number);
    search(number);
    return 0;
}

