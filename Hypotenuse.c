#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char InputA[100],InputB[100], InputC[100], Variables[25];
    double A, B, C;
    int I=0, J, Check;

    printf("\nWelcome to my very first project, this is a Pythagorean theorem Calculator!");
    printf("\nWhat sides of the triangle do you have? Note: Please format as A&B, or whatever 2 sides of the triangle you have  ");

    fgets(Variables,sizeof(Variables),stdin);
        Variables[strcspn(Variables, "\n")] = '\0';

        while (Variables[I]!='\0')
        {
            Check = 0;
            if(Variables[I]==' ') 
            {
                J=I;
                while(Variables[J-1]!='\0')
                {
                    Variables[J] = Variables[J+1];
                    J++;
                }
                Check = 1;
            };
            if (Check==0)
            I++;
        };

    printf("%s\n",Variables);

    if ((strcmp(Variables,"A&B") == 0) || (strcmp(Variables,"B&A") == 0))
    {
        printf("What is A? ");
            fgets(InputA,sizeof(InputA),stdin);
                A = strtod(InputA, NULL);

        printf("What is B? ");
            fgets(InputB,sizeof(InputB),stdin);
                B = strtod(InputB, NULL);

        C = sqrt(fabs((A*A)+(B*B))); //Pythagorean Theorem ()
            printf("C = %lf\n",C);

    }

    else if ((strcmp(Variables,"A&C") == 0) || (strcmp(Variables,"C&A") == 0))
    {
        printf("What is A? ");
            fgets(InputA,sizeof(InputA),stdin);
                A = strtod(InputA, NULL);

        printf("What is C? ");
            fgets(InputC,sizeof(InputC),stdin);
                C = strtod(InputC, NULL);

        B = sqrt(fabs((C*C)-(A*A)));
            printf("B = %lf\n",B);
    }

    else if ((strcmp(Variables,"B&C") == 0) || (strcmp(Variables,"C&B") == 0))
    {
        printf("What is B? ");
            fgets(InputB,sizeof(InputB),stdin);
                B = strtod(InputB, NULL);

        printf("What is C? ");
            fgets(InputC,sizeof(InputC),stdin);
                C = strtod(InputC, NULL);

         A = sqrt(fabs((C*C)-(B*B)));
            printf("A = %lf\n",A);
    }

    else {printf("Alas I have no clue what you have then");
    
    };

    return 1;
}