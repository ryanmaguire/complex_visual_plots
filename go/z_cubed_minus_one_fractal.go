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
 *      Creates a complex plot for the Newton iteration of z^3 - 1.           *
 ******************************************************************************
 *  Author: Ryan Maguire                                                      *
 *  Date:   2023/04/15                                                        *
 ******************************************************************************/

package main

/*  The Newton iteration is z - f(z)/f'(z). Compute this for f(z) = z^3 - 1.  */
func newton(z complex128) complex128 {
    return z - (z*z*z - 1.0)/(3.0*z*z)
}

/*  Create a plot of the first 3 iterations of Newton's method.               */
func main() {

    /*  Name of the output PPM file.                                          */
    var name string = "z_cubed_minus_one_three_iters.ppm"

    /*  The number of iterations to perform.                                  */
    var iters uint32 = 3

    /*  Plot the results.                                                     */
    IterPlot(newton, iters, ColorWheelFromComplex, name)
}
