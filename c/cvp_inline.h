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
 *      Provides a macro for safely inlining without assuming the user has    *
 *      C99 features. Works with C89 compilers as well.                       *
 ******************************************************************************
 *  Author: Ryan Maguire                                                      *
 *  Date:   2023/04/21                                                        *
 ******************************************************************************/

/*  Include guard to prevent including this file twice.                       */
#ifndef CVP_INLINE_H
#define CVP_INLINE_H

/*  Check the __STDC_VERSION__ macro for inline support.                      */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/*  C99 and higher have inline as a keyword. Nothing to add here.             */
#define CVP_INLINE static inline

#else
/*  Else for #if __STDC_VERSION__ >= 199901L.                                 */

/*  Otherwise we can somewhat mimic inlining with "static".                   */
#define CVP_INLINE static

#endif
/*  End of #if __STDC_VERSION__ >= 199901L.                                   */

#endif
/*  End of include guard.                                                     */
