#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int m = 10;
    int i,j;


    //***************************     1     **********************************
    float **array_1 = (float**)calloc(n ,sizeof(float*));
    array_1[0] = (float*)calloc(n*m, sizeof(float));
    for (i = 1 ; i < n ; i++)
    {
        array_1[i] =  array_1[0] + i*m;
    }

    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < m ; j++)
        {
            array_1[i][j] = i;
            printf("%lf ", array_1[i][j]);
        }
        printf("\n");
    }
    //////////////////////////////////////////////////////////////////////////


    //***************************     2      **********************************
    float **array_2 = (float**)calloc(n ,sizeof(float*));
    for(i = 0 ; i < n ; i++)
    {
        array_2[i] = (float*)calloc(m, sizeof(float));
    }

    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < m ; j++)
        {
            array_2[i][j] = i;
            printf("%lf ", array_2[i][j]);
        }
        printf("\n");
    }

    //////////////////////////////////////////////////////////////////////////

    return 0;
}
