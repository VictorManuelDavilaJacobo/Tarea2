#include <stdio.h>


    int main()
{

    int promedio;
    char cal1,cal2,cal3;
    int A,B,C;


    printf("\n              Coloca la primer calificación con letra 1\n");
    scanf("%c",&cal1);


    printf("\n              Coloca la segunda calificacion con letra 2\n");
    fflush(stdin);
    scanf("%c",&cal2);

    printf("\n              Coloca la tercer calificacion con letra 3\n");
    fflush(stdin);
    scanf("%c",&cal3);

    //Calificacion 1

    if (cal1=='A'||cal1=='a')
    {
        A=10;
    }

    else if (cal1=='B'||cal1=='b')

    {
        A=9;
    }

    else if (cal1=='C'||cal1=='c')

    {
        A=8;

    }
    else if (cal1=='D'||cal1=='d')

    {
        A=7;

    }
    else if (cal1=='E'||cal1=='e')

    {
        A=6;

    }
    else

    {
        A=5;
    }

    //Calificacion 2


    if (cal2=='A'||cal2=='a')
    {
        B=10;
    }
    else if (cal2=='B'||cal2=='b')
    {
        B=9;
    }
    else if (cal2=='C'||cal2=='c')
    {
        B=8;
    }
    else if (cal2=='D'||cal2=='d')
    {
        B=7;
    }
    else if (cal2=='E'||cal2=='e')
    {
        B=6;
    }
    else
    {
        B=5;
    }

    //Calificacion 3


     if (cal3=='A'||cal3=='a')
    {
        C=10;
    }
    else if (cal3=='B'||cal3=='b')
    {
        C=9;
    }
    else if (cal3=='C'||cal3=='c')
    {
        C=8;
    }
    else if (cal3=='D'||cal3=='d')
    {
        C=7;
    }
    else if (cal3=='E'||cal3=='e')
    {
        C=6;
    }
    else
    {
        C=5;
    }



    promedio= (A+B+C)/3;
    printf("\n Este es tu promedio:,%d\n\a",promedio);

    if (promedio==10)

    {
        printf("\n          Muchas Felicidades usted aprobo con calificacion Autonoma;)\a\n");
    }

    else if (promedio==9)

    {
        printf("\n          Muy bien usted aprobo con calificacion Destacada:)\a\n ");
    }

    else if (promedio==8)

    {
        printf("\n          Usted a aprobado con stisfactorio, necesitas estudiar mas\a\n");
    }

    else if (promedio<8)

    {
        printf("\n          Lo lamento ha Reprobado\n");
    }





    return 0;
}

