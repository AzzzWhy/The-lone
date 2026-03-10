#include <stdio.h>
#include <stdlib.h> // 为了使用 system() 函数运行系统命令
int main()
{
int choise;
start_mean:
printf("--------------------------------------\n");
printf("Welcome to use the simple toolbox\n");
printf("Please choose a number from 1,2,3\n");
printf("The 1 can reflect the Time now\n");
printf("The 2 can list the all of the file under the booklet\n");
printf("The 3 can log out the toolbox\n");
printf("--------------------------------------\n");
scanf("%d",&choise);
switch (choise)
{
    case 1:
    printf("Loading>>>>\n");
    system("date");
    goto start_mean;
    break;
    case 2:
    printf("Loading>>>>\n");
    system("ls");
    goto start_mean;
    case 3:
    printf("Loading>>>>\n");
    printf("Out\n");
    goto end;
}
end:
printf("--------------------");
return 0;
}