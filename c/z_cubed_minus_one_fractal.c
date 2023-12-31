/******************************************************************************
 *                                  LICENSE                                   *
 ******************************************************************************
 *  This file is part of complex_visual_plots.                                *
 *                                                                            *
 *  complex_visual_plots is free software: you can redistribute it and/or     *
 *  modify it under the terms of the GNU General Public License as published  *
 *  by the Free Software Foundation, either version 3 of the License, or      *
 *  (at your option) any later version.                                       *
 *                                                                            *
 *  complex_visual_plots is distributed in the hope that it will be useful    *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 *  GNU General Public License for more details.                              *
 *                                                                            *
 *  You should have received a copy of the GNU General Public License         *
 *  along with complex_visual_plots.  If not, see                             *
 *  <https://www.gnu.org/licenses/>.                                          *
 ******************************************************************************
 *  Purpose:                                                                  *
 *      Plots the function z^3 - 1.                                           *
 ******************************************************************************
 *  Author: Ryan Maguire                                                      *
 *  Date:   2023/04/21                                                        *
 ******************************************************************************/

/*  Plotting routines given here.                                             */
#include "cvp.h"

/*  The function to be plotted.                                               */
CVP_INLINE struct cvp_complex f(const struct cvp_complex *z)
{
#if 0

    /*  Alternative computation of (2z^3 + 1) / (3z^2) using real numbers.    */
    const double x2 = z->real * z->real;
    const double y2 = z->imag * z->imag;
    const double x4 = x2*x2;
    const double y4 = y2*y2;
    const double x2y2 = x2*y2;
    const double x2_y2_sq = x4 + 2.0*x2y2 + y2*y2;
    const double denom = 1.0 / (3.0 * x2_y2_sq);

    const double real = z->real*(2.0*x4 + 4.0*x2y2 + z->real + 2.0*y4) - y2;
    const double imag = 2.0*z->imag*(x2_y2_sq - z->real);
    const struct cvp_complex w = {real*denom, imag*denom};
#else

    /*  Compute (2z^3 + 1) / (3z^2) using complex functions.                  */
    const struct cvp_complex z_sq = cvp_complex_square(z);
    struct cvp_complex w = cvp_complex_multiply(&z_sq, z);
    cvp_complex_multiplyby_real(2.0, &w);
    cvp_complex_addto_real(1.0, &w);
    cvp_complex_divideby(&w, &z_sq);
    cvp_complex_multiplyby_real(1.0 / 3.0, &w);
#endif
    return w;
}

/*  Routine for plotting the function f(z) = z^3 - 1.                         */
int main(void)
{
    /*  Name of the output PPM file.                                          */
    const char *name = "z_cubed_minus_one_three_iters.ppm";

    /*  The number of iterations to perform.                                  */
    const unsigned int iters = 3U;

    /*  Create the plots.                                                     */
    cvp_iters_plot(f, iters, cvp_color_wheel_from_complex, name);
    return 0;
}
/*  End of main.                                                              */
