/*
 * pricerange_initialize.c
 *
 * Code generation for function 'pricerange_initialize'
 *
 * C source code generated on: Wed Aug 06 09:22:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "pricerange.h"
#include "pricerange_initialize.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar;

/* Function Definitions */
void pricerange_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (pricerange_initialize.c) */
