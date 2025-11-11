# Build Instructions

## v0.0.1-alpha

1. Have NASM & GCC installed on your linux flavor of choice. ***this will not work on windows.***

    - GCC Is for later builds that will use C.

2. Install QEMU
3. Clone this repo into your local system with the following command

    - `git clone https://github.com/penne-not-pasta/penny-dos.git`
    
4. After cloning go into the following directory => `/penny-dos`
5. Afer entering the directory please run the following commands.

    - `make all`
    - This will make the `.bin` file in the `/build` folder.

6. run `qemu-system-x86_64 build/kernel.bin` in the terminal