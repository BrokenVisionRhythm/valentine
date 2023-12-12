#include<stdio.h>
#include<stdlib.h>
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"

int main(){

//I 
for(int i=0; i<9; i++)
{
    if(i==0)printf(ANSI_COLOR_YELLOW " IIIIIIIIII \n");
    else if(i>0 && i!=8)printf("     II     \n");
    else if(i==8)printf(" IIIIIIIIII \n");
}

//L
for(int i=0; i<=15; i++)
{
    if(i==0)
        {for(int g=0; g<=15; g++)printf(" ");
        printf(ANSI_COLOR_RED"   LLLLLLL     LLLLLL   \n");
        }
    else if(i==1)
        {
         for(int g=0; g<=15; g++)printf(" ");
         printf(" LLLLLLLLL   LLLLLLLLL \n");
        }
    else if(i==2)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("LLLLLLLLLLL LLLLLLLLLLL\n");
        }
    else if(i==3)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("LLLLLLLLLLLLLLLLLLLLLLL\n");
        }
    else if(i==4)
        {for(int g=0; g<=15; g++)printf(" ");
         printf(" LLLLLLLLLLLLLLLLLLLLL\n");
        }
    else if(i==5)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("  LLLLLLLLLLLLLLLLLLL\n");
        }
    else if(i==6)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("   LLLLLLLLLLLLLLLLL\n");
        }
    else if(i==7)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("    LLLLLLLLLLLLLLL\n");
        }
    else if(i==8)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("     LLLLLLLLLLLLL\n");
        }
    else if(i==9)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("      LLLLLLLLLLL\n");
        }
    else if(i==10)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("       LLLLLLLLL\n");
        }
    else if(i==11)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("        LLLLLLL\n");
        }
    else if(i==12)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("         LLLLL\n");
        }
    else if(i==13)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("          LLL\n");
        }
    else if(i==14)
        {for(int g=0; g<=15; g++)printf(" ");
         printf("           L \n");
        }
}

for(int i=0; i<9; i++)
{
if(i<6){for(int g=0; g<=37; g++)printf(" ");
        printf(ANSI_COLOR_MAGENTA "\x1b[35m""UUUU      UUUU\n");
       }
else if(i==6)
    {for(int g=0; g<=37; g++)printf(" ");
    printf(" UUU      UUU\n");
    }
else if(i==7)
    {for(int g=0; g<=37; g++)printf(" ");
    printf("  UUUUUUUUUU\n");
    }
else if(i==8)
{for(int g=0; g<=37; g++)printf(" ");
printf("   UUUUUUUU\n");
}
}

printf("\n");


return 0;
}