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
 *      Creates a complex plot for the function z^3 - 1.                      *
 ******************************************************************************
 *  Author: Ryan Maguire                                                      *
 *  Date:   2023/04/11                                                        *
 ******************************************************************************/

package main

/*  Function to be plotted, z^3 - 1.                                          */
func f(z complex128) complex128 {
    return z*z*z - 1.0
}

/*  Plot the function into a PPM file.                                        */
func main() {
    ComplexPlot(f, ColorWheelFromComplex, "z_cubed_minus_one.ppm")
}
