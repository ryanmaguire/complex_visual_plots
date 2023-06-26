# Compiling
The files are written in go without any dependences (other than the
standard library). You can build with `go` or `gccgo`. For example:
```
gccgo -O3 cvp.go z_cubed_minus_one.go -o test.out
```
Similarly:
```
go build cvp.go z_cubed_minus_one.go
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
