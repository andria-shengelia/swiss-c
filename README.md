# Ultimate toolkit

Simple command-line C utility providing four small tools: a calculator, a temperature converter, a random number generator, and an integer counter.

**Contents**
- **Source:** [main.c](main.c)
- **Binary:** [bin/main](bin/main) (if you compiled it)

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
- **Prerequisite:** a C compiler such as `gcc`.
- **Compile:**


```bash
gcc main.c -o bin/main && bin/main
```


Follow the on-screen menu to pick a tool.

**Notes & Assumptions**
- The program uses `system("clear")` on non-Windows systems to clear the terminal.
- Random numbers use the C library `rand()`.

**Coming Improvements**
- Add input validation to handle non-numeric input and divide-by-zero cases.
- Add a `Makefile` for easier build: `make build`, `make run`, `make clean`.
- Add history to calculator and other tools.

**Where to look in the code**
- Main entry and menu logic: [main.c](main.c)
- Helper functions: calculator, temperature, random_num, counter are all in [main.c](main.c)

**License**
- MIT License you can read more in License file.

**Contributing**
- Contact me or request pull. :)















