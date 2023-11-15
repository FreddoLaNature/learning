/********************************************************************/
/*                             main.c                               */
/*                                                                  */
/* version : 1.1                                                    */
/* date    : 13/11/2023                                             */
/* Author  : Frédéric COLLI                                         */
/*           frederic.colli@outlook.fr                              */
/********************************************************************/

#include "../headers/main.h"

int main( int argc, char **argv, char **envp)
{
	int i;

	printf("Hello Wolrd!\n");
	
	printf("Hey, this is the first modification of this file.\n");
	
	printf("Hi, this is the modification writed in the v1.1 branch.\n");
	
	/* Loop modified for show the # parameters */

	for(i = 0; i < argc; i++)
	{
		printf(" i = %i \n argv[%i] = %s \n",i,i,argv[i]);
	}
	
	for(i = 0; envp[i] != NULL;i++)
	{
		printf("index %i : ENVP[%i] = %s\n",i,i,envp[i]);
	}

	printf("This is the last version of this file, no majors modifications but just a cleanent about some unsused var and code.\n");

	return true;
}

