/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CARRE_H_RPCGEN
#define _CARRE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define CARRE_PROG 0x21000000
#define CARRE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define CALNULL 0
extern  void * calnull_1(void *, CLIENT *);
extern  void * calnull_1_svc(void *, struct svc_req *);
#define CAR 1
extern  int * car_1(int *, CLIENT *);
extern  int * car_1_svc(int *, struct svc_req *);
#define RAC 2
extern  double * rac_1(int *, CLIENT *);
extern  double * rac_1_svc(int *, struct svc_req *);
extern int carre_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define CALNULL 0
extern  void * calnull_1();
extern  void * calnull_1_svc();
#define CAR 1
extern  int * car_1();
extern  int * car_1_svc();
#define RAC 2
extern  double * rac_1();
extern  double * rac_1_svc();
extern int carre_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CARRE_H_RPCGEN */
