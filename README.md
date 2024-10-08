# wxWidgets Desktop Application with Organized Menu Bar

## Project Overview

This project is a desktop application built using the **wxWidgets** framework, with dependencies managed via **vcpkg**. The main objective is to implement a **well-organized menu bar** with logically categorized items for improved usability and scalability. Each menu and its sub-items are handled by separate classes, resulting in clean and maintainable code.

---

## Features

- **Cross-platform GUI**: Responsive and native look-and-feel on Windows, macOS, and Linux.
- **Organized Menu Bar**: Menus such as `File`, `Edit`, `View`, and `Help` are structured for ease of navigation and extendibility.
- **vcpkg Integration**: Simplified package management for external libraries.
- **Modular Design**: Each menu item is managed in its own class, promoting a clean and scalable codebase.

---

## Getting Started

### Prerequisites

Make sure you have the following installed on your system:

- **C++ Compiler**: Ensure you have a compatible C++ compiler installed.
- **Visual Studio**: This project is developed using **Visual Studio**.
- **vcpkg**: Installed and configured for managing external libraries.

To install **vcpkg**, follow the official documentation: [vcpkg Installation](https://vcpkg.io/en/getting-started.html).

---

### Cloning the Repository

```bash
git clone https://github.com/<your-username>/<your-repository-name>.git
cd <your-repository-name>


### Installing Dependencies
1. Setup vcpkg: If you haven't already, install vcpkg on your system:
```bash
git clone https://github.com/microsoft/vcpkg
./vcpkg/bootstrap-vcpkg.bat # On Windows
./vcpkg/bootstrap-vcpkg.sh  # On macOS/Linux

2. Install wxWidgets using vcpkg:
./vcpkg/vcpkg install wxwidgets

3. Select the appropriate build configuration (Debug or Release).

4. Build and run the project by pressing F5 or selecting Build > Build Solution in the Visual Studio menu.


### Project Structure
.
├── /src/               # Source code files
│   ├── main.cpp        # Main application entry point
│   ├── menu_file.cpp   # File menu handling
│   ├── menu_edit.cpp   # Edit menu handling
│   └── ...
├── /include/           # Header files
│   ├── menu_file.h     # Header for File menu
│   ├── menu_edit.h     # Header for Edit menu
│   └── ...
├── CMakeLists.txt      # CMake configuration (if applicable)
└── README.md           # Project documentation
