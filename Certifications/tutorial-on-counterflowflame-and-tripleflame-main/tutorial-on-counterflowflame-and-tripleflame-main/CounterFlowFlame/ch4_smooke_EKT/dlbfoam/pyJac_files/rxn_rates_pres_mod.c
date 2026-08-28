#include <math.h>
#include "header.h"
#include "rates.h"

void get_rxn_pres_mod (const double T, const double pres, const double * __restrict__ C, double * __restrict__ pres_mod) {
  // third body variable declaration
  double thd;

  double logT = log(T);
  double m = pres / (8.31446210e+03 * T);

  // reaction 4;
  pres_mod[0] = m - 0.6 * C[2] + 5.5 * C[7] - 0.25 * C[13] + 0.5 * C[14] - 0.6 * C[15];

  // reaction 16;
  pres_mod[1] = m;

  // reaction 19;
  pres_mod[2] = m;

  // reaction 21;
  pres_mod[3] = m;

  // reaction 23;
  pres_mod[4] = m - 0.6 * C[2] + 5.5 * C[7] - 0.25 * C[13] + 0.5 * C[14] - 0.6 * C[15];

  // reaction 24;
  pres_mod[5] = m - 0.6 * C[2] + 5.5 * C[7] - 0.25 * C[13] + 0.5 * C[14] - 0.6 * C[15];

} // end get_rxn_pres_mod

