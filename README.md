# GxUltraCab.lv2
Cabinet simulator Lv2 stereo plugin

![](https://github.com/brummer10/GxUltraCab.lv2/workflows/build/badge.svg)


![GxUltraCab](https://raw.githubusercontent.com/brummer10/GxUltraCab.lv2/master/GxUltraCab.png)

## Keyboard shortcuts

|   Command       |     |   Action                      |
|-----------------|:---:|-------------------------------|
|TAB              |==   |make next controller active    |
|SHIFT+TAB        |==   |make previous controller active|
|UP or RIGHT      |==   |increase controller value      |
|DOWN or LEFT     |==   |decrease controller value      |
|HOME (pos1)      |==   |set min controller value       |
|END              |==   |set max controller value       |
|INSERT           |==   |set standard value             |

## Numpad shortcuts

|   Command       |     |   Action                      |
|-----------------|:---:|-------------------------------|
|+                |==   |make next controller active    |
|-                |==   |make previous controller active|
|UP or RIGHT      |==   |increase controller value      |
|DOWN or LEFT     |==   |decrease controller value      |
|HOME (pos1)      |==   |set min controller value       |
|END              |==   |set max controller value       |
|INSERT           |==   |set standard value             |


###### BUILD DEPENDENCY’S 

the following packages are needed to build GxUltraCab:

- libc6-dev
- libcairo2-dev
- libx11-dev
- x11proto-dev
- lv2-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2

