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
 ******************************************************************************/
#include "cvp.hpp"

static inline cvp::complex g(cvp::complex z)
{
    // return (z*z*z - 1.0) / (2.0*z*z*z);
    // return (z*z*z - 1.0) / (3.0*z*z*z);
    // return (z*z*z - 1.0) / (2.0*z*z);
    return (z*z*z - 1.0) / (3.0*z*z);
}

static inline cvp::complex f(cvp::complex z)
{
    for (int n = 0; n < 10; ++n)
        z = g(z);
    return z;
}

int main(void)
{
    const char *name = "z_cubed_minus_one_by_two_z.ppm";
    cvp::complex_plot(f, cvp::color_wheel_from_complex, name);
    return 0;
}
