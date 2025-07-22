# Terminal Calculator (C++)

This is a simple terminal-based calculator built with C++. It performs basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Features

- Basic arithmetic: +, -, *, /
- Terminal-based input and output
- Simple and beginner-friendly structure
- Easy to extend with more operations or features

## Getting Started

### Prerequisites

You need a C++ compiler installed on your system:

- On Linux (Ubuntu/Debian): `sudo apt install g++`
- On Windows: Install MinGW or use an IDE like Code::Blocks or Visual Studio
- On macOS: Install Xcode Command Line Tools with `xcode-select --install`

### Compilation

Open a terminal in the project directory and run:

```
g++ -o calculator calculator.cpp
```

This will generate an executable named `calculator`.

### Usage

To run the calculator:

```
./calculator
```

(On Windows, run `calculator.exe` instead.)

### Example

```
Enter first number: 8
Enter operator (+, -, *, /): *
Enter second number: 5
Result: 40
```

## File Structure

- `calculator.cpp` - Main source file
- `README.md` - Project documentation

## Contributing

Feel free to fork the repository and submit pull requests for improvements or new features.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
