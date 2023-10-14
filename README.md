# Table of Contents
1. [Complex Visual Plots](#cvp)
2. [Benchmarks](#benchmarks)
3. [License](#license)

# Complex Visual Plots <a name="cvp"></a>
This project contains files for visualizing complex functions. Given such
a function $f:\mathbb{C}\rightarrow\mathbb{C}$ we can paint the point
$z\in\mathbb{C}$ by giving it a color corresponding to the argument
$\textrm{Arg}\big(f(z)\big)$ and the intensity given by the modulus
$|f(z)|$. For a function like $f(z)=z^{3}-1$ we get the following.

![Z Cubed Minus One](https://math.dartmouth.edu/~rmaguire/assets/z_cubed_minus_one.png "Z Cubed Minus One")

There are also routines to iteratively compute functions over and over. This
can help visual how Newton fractals occur. The polynomial $f(z)=z^{3}-1$ has
Newton perturbation given by
$$p(z)=z-\frac{f(z)}{f'(z)}=z-\frac{z^{3}-1}{3z^2}=\frac{2z^{3}+1}{3z^{2}}$$
By defining $p_{0}(z)=p(z)$ and $p_{n+1}(z)=p(p_{n}(z))$ we can see how
Newton fractals form (which correspond to $p_{\infty}$). Three iterations
yield the following plot.

![Z Cubed Minus One Three Iters](https://math.dartmouth.edu/~rmaguire/assets/z_cubed_minus_one_three_iters.png "Z Cubed Minus One Three Iters")

Lastly, the Mandelbrot set can be described by the recursive definition
$w_{0}=z$, $w_{n+1}=w_{n}^{2}+z$. Performing a finite number of iterations can
help us see how the Mandelbrot set starts to form. Six iterations yields the
following image.

![Mandelbrot Six Iters](https://math.dartmouth.edu/~rmaguire/assets/mandelbrot_six_iters.png "Mandelbrot Six Iters")

# Benchmarks
| Language               | Implementation | Time (s) | Flags              | Version                                  |
| ---------------------- | -------------- | -------- | ------------------ | ---------------------------------------- |
| C                      | gcc            |    0.061 | -O3 -flto          | gcc (Debian 10.2.1-6) 10.2.1 20210110    |
| C                      | clang          |    0.061 | -O3 -flto          | Debian clang version 11.0.1-2            |
| C++                    | g++            |    0.087 | -O3 -flto          | g++ (Debian 10.2.1-6) 10.2.1 20210110    |
| C++                    | clang++        |    0.105 | -O3 -flto          | Debian clang version 11.0.1-2            |
| C                      | pcc            |    0.146 | -O2                | Portable C Compiler 1.2.0.DEVEL 20200630 |
| C                      | tcc            |    0.186 |                    | tcc version 0.9.27                       |
| Go                     | golang         |    1.364 |                    | go 1.15.15                               |
| Go                     | gccgo          |    1.645 | -O3 -flto          | gccgo (Debian 10.2.1-6) 10.2.1 20210110  |

# License
    complex_visual_plots is free software: you can redistribute it and/or
    modify it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    complex_visual_plots is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with complex_visual_plots.  If not, see <https://www.gnu.org/licenses/>.
