/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "carre.h"
#include<stdio.h>


void
carre_prog_1(char *host, int arg)
{
	CLIENT *clnt;
	void  *result_1;
	char *calnull_1_arg;
	int  *result_2;
	int  car_1_arg=arg ;
	double  *result_3;
	int  rac_1_arg=arg ;

#ifndef	DEBUG
	clnt = clnt_create (host, CARRE_PROG, CARRE_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = calnull_1((void*)&calnull_1_arg, clnt);
	if (result_1 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = car_1(&car_1_arg, clnt);
        printf("le carre est = %d \n",*result_2);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = rac_1(&rac_1_arg, clnt);
        printf("la racine est = %f \n",*result_3);
	if (result_3 == (double *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 3) {
		printf ("usage: %s server_host arg\n", argv[0]);
		exit (1);
	}
	host = argv[1];
        int arg = atoi(argv[2]);
	carre_prog_1 (host,arg);
exit (0);
}
