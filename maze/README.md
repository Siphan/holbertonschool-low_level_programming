# Maze Project

A game inspired by Wolfenstein3d, using ray casting.
--------------

* Author: ```Siphan Bou```
* Date: ```October 29, 2017```
* Language: ```C```
* Library: ```SDL2```
* Compiles on both ```Mac OS X``` and ```Debian/Ubuntu```


## Directory structure:
    `src`: source files
    `inc`: header files

--------------------------------------------------------


## How to start

To launch the game:
* install SDL2
* on Mac OS

```
git clone https://github.com/Siphan/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/maze/
make
./maze
```

Alternatively, if you're not using `make`, you can type the following command:
```
gcc src/*c -Wall -Werror -Wextra -pedantic -I./inc -lSDL2 -o maze `sdl2-config --libs` -lSDL2_ttf
```

* on Ubuntu


--------------------------------------------------------
## How to play

* You can quit the game in 3 manners:
    * By pressing the `esc` key
    * By x-ing out the window
    * By pressing `ctrl` + `c` in the command line 


--------------------------------------------------------
## Functions
