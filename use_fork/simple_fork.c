#include <unistd.h>
#include <stdio.h>


main()
{
    pid_t pro_id;
    int i;

    printf("SIMPLE_FORK:before fork (father pid=%d)\n", getpid());
    pro_id=fork();
    if(pro_id==0) // Child process
    {
        printf("SIMPLE_FORK: Hello world from child %d (pid=%d)\n",i, getpid());
    }
    else if(pro_id > 0) // parent process
    {
        printf("SIMPLE_FORK: Hello world from parent %d (pid=%d)\n", i, getpid());
    }
    else
       printf("fork failure\n");

    printf("PRES ang CHAR to  continue... \n");
    getchar();
}


