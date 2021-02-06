# bf-cli

![src](https://github.com/WampiFlampi/source/blob/main/bf-crop.png)

## Official Alpha Release 1.0.0
  bf-cli is a simple ncurses implementation of brainfuck for the linux cli.
  This project hopes to provide an efficient, bloat free enviroment for developing, debugging, and compiling brainfuck programs
## Building
  - ```git clone https://github.com/WampiFlampi/bf-cli```
  
  Arch Linux:
   * ```cd bf-cli```
   * ```make```
   
  Debian Based:
   * ```sudo apt-get install libncurses5 libncurses5-dev```
   * ```cd bf-cli```
   * ```make```
## Usage
  Starting:
   - ```./bin /path/to/input.bf```
    
  Quitting:
   - ```ctrl c```
    
## Coming soon

  - Single step debugging
  - Breakpoints
  > to avoid watching the entire animation, gets annoying fast
  - Light-weight compiler for finished projects
