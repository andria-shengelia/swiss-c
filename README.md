# Ultimate toolkit

Simple command-line C utility providing four small tools: a calculator, a temperature converter, a random number generator, and an integer counter.


**Features**
- **Calculator:** basic arithmetic (+, -, *, /, %) for two floating-point numbers.
- **Temperature converter:** convert between Celsius and Fahrenheit (menu-driven).
- **Random number generator:** prints a pseudo-random integer from `rand()`.
- **Counter:** count up or down between integer bounds.

**Installing**
- Can be installed with git.

```bash
git clone https://github.com/andria-shengelia/swiss-c.git
```

- Or use github ZIP file and extract it.

**Build**
- **Prerequisite:** a C compiler such as `gcc`, `make`
- **Compile:**


```bash
make
```
-**Compile and run:**

```bash
make run
```

Follow the on-screen menu to pick a tool.

**Notes & Assumptions**
- The program uses `system("clear")` on non-Windows systems to clear the terminal.
- Random numbers use the C library `rand()`.

**Coming Improvements**
- Add input validation to handle non-numeric input and divide-by-zero cases.

**Where to look in the code**
- Main entry and menu logic: [main.c](main.c)
- Helper functions: calculator, temperature, random_num, counter are all in [main.c](main.c)

**License**
- MIT License you can read more in License file.

**Contributing**
- Contact me or request pull. :)


## Last update.

**History**

- Added history which can be accessed with main menu.
- History is stored on log.txt file in log directory










