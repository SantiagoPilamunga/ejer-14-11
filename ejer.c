#include <stdio.h>
int main()
{
    int candidato[5] = {0};
    int voto = 999;
    printf("Ingrese el voto: ");
    scanf("%d", &voto);
    do
    {
        if ((voto > 0) && (voto <= 5))
        {
            candidato[voto - 1]++;
        }
        printf("Ingrese el voto: ");
        scanf("%d", &voto);

    } while (voto != 0);
    for (int i = 0; i < 5; i++)
    {
        printf("\ncandidato %d: %d", i + 1, candidato[i]);
    }

    return 0;
}
