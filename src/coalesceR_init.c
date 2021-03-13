#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .C calls */
extern void SimulateCoalescentTree(void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"SimulateCoalescentTree", (DL_FUNC) &SimulateCoalescentTree, 5},
    {NULL, NULL, 0}
};

void R_init_coalesceR(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}