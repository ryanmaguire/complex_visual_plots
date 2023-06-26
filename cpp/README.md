# Compiling
The files are written in C++ without any dependences (other than the
standard library). You can build with `clang++` or `g++`. For example:
```
clang++ -Weverything -O3 -flto z_cubed_minus_one.cpp -o test.out
```
Similarly:
```
g++ -Wall -Wextra -Wpedantic -O3 -flto z_cubed_minus_one.cpp -o test.out
```

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
