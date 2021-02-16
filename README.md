# bf-cli

![src](https://github.com/WampiFlampi/source/blob/main/bf-crop.png)

## Alpha Release 1.2.0
bf-cli is a simple ncurses implementation of brainfuck for the linux cli.

This project hopes to provide an efficient, bloat free enviroment for developing, debugging, and compiling brainfuck programs

## Features
- Fully functional graphical interface
- Single Step Debugging
## Keybinds
  
| Key         | Action           |
| ----------- | -----------------|
| d           | Enter Debug Mode |
| q           | Exit Debug Mode  |

## Deps

| Distro         | Installation command              |
| -------------- | --------------------------------- |
| Ubuntu/Debian  | `apt-get install libncurses5-dev` |
| Arch Linux     | _comes by default_                |


## Building
Method 1:
```
$ git clone https://github.com/WampiFlampi/bf-cli
$ cd bf-cli
$ sudo make clean install
```
Method 2:
``` 
$ follow first 2 steps from method 1
$ g++ -lncurses main.cpp -o bin
```
for ubuntu and mint
```
$ g++ main.cpp -lncurses -o bin
```
## Usage
  Starting:
   ```
   $ bf /path/to/input.bf
   ```
   or
   ```
   $ ./bin /path/to/input.bf
   ``` 
  Quitting:
   ```
   $ ctrl-c
   ``` 
## Coming soon
  - Speed Control and other quality of life
  - Animation Extension
  - Breakpoints/input traversal
  - Light-weight compiler for finished projects
## Special Thanks
  Check out https://github.com/alexdantas/yetris, the code is really well commented and easy to understand, It has been an enormous help in developing bf-cli, thank you
