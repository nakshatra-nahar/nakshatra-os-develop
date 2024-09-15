# Nakshatra Operating System (OS)
============================

![Nakshatra OS](https://github.com/wichtounet/nakshatra-os/wiki/images/nakshatra-vesa.png)

**Nakshatra** is a 64-bit operating system designed primarily for learning and experimentation. Created from scratch, it demonstrates the complexities of OS development and covers key concepts such as multiprocessing, device drivers, and file system management. While the project is ongoing and always evolving, it currently supports a range of features necessary for a functional and modern OS.

## Key Features
---------------
- **64-bit Architecture**: Designed exclusively for x86_64 architecture.
- **Preemptive Multiprocessing**: Multitasking support with process scheduling.
- **Native Applications in C++**: Write applications directly in C++ with a system library, loaded via ELF format.
- **Driver Support**:  
  - Keyboard and Mouse drivers.
  - ATA driver with read/write functionality.
  - Realtek 8139 network driver for basic networking (WIP).
  - Full ACPI support using ACPICA.
  - HPET/RTC/PIT drivers for timekeeping.
- **File System Support**: FAT32 file system with read and write capabilities.
- **PCI Support**: Basic PCI device detection and management.
- **Multi-Stage Booting**: With FAT32 support.
  
## Motivation
------------
### Why Build an OS?
Building an operating system is one of the most challenging yet rewarding projects a developer can undertake. The primary reasons for developing Nakshatra OS are:

1. **Fun**: OS development offers a wide range of technical challenges that are engaging and enjoyable.
2. **Learning**: It's a unique opportunity to dive deep into low-level programming, hardware interaction, and the core principles that make modern computers work.

I originally began this journey after growing bored with compiler development. I wanted to work on something more complex and decided on OS development as the next frontier. The experience has taught me many new skills, offering insights into the internals of systems programming, and giving me a sense of accomplishment in crafting my very own operating system.

This project is purely a hobby. I have no commercial intentions. Once the fun stops, I’ll simply move on to another project!

## How It Was Built
--------------------
### The Journey
Writing an OS from scratch is a long and difficult process, and as you go deeper, finding detailed resources becomes more challenging. The more complex your OS gets, the less information is readily available.

Some of the key resources I used during the project include:

- **[The osdev.org Wiki](http://wiki.osdev.org/Main_Page)**: An invaluable resource for OS development topics.
- **[The osdev.org Forum](http://forum.osdev.org/index.php)**: A community of skilled developers offering help on specific issues.
- **[Broken nakshatran Series](http://www.brokennakshatran.com/Resources/OSDevIndex.html)**: A great series of tutorials covering different aspects of OS development.
- **[James Molloy Series](https://web.archive.org/web/20160301082842/http://www.jamesmolloy.co.uk/tutorial_html/index.html)**: A less comprehensive tutorial series, but useful for starting points.
- **Intel 64 and IA-32 Architectures Software Developer's Manual**: Primarily the *System Programming - Part 1* section. While it's a dense read, it provides essential information on handling paging and interrupts, among other things.

### Disappointing Books
In terms of books, I found many lacking in practical guidance for OS development. They often focus on explaining the theory behind operating systems rather than showing how to build one. Here are a few books I’ve read:

- **Modern Operating Systems by Andrew S. Tanenbaum (3rd ed.)**: A solid book that covers most concepts but doesn't delve deep into practical details for developers, especially around networking.
- **Operating Systems: Design and Implementation by Andrew S. Tanenbaum**: Primarily focused on MINIX, which may not be useful unless you're interested in that specific OS. The book is full of code, but the structure is difficult to follow.

While these books are helpful for understanding operating systems in general, they don’t offer much when it comes to building one from scratch. I hope the books I receive in the future will be more helpful.

## Building Nakshatra OS
------------------------

### Prerequisites
Nakshatra OS uses Git submodules, so ensure you use the `--recursive` flag when cloning the repository.

```bash
git clone --recursive https://github.com/wichtounet/nakshatra-os.git
```

### Build Instructions
Detailed build instructions are available on the [Nakshatra OS Wiki](https://github.com/wichtounet/nakshatra-os/wiki/Build).

To build the OS, follow the steps outlined in the Wiki, which will guide you through setting up your environment and compiling the project.

### Example Build Commands
Here’s a summary of the build process:
```bash
mkdir build
cd build
cmake ..
make
```

## License
--------
Nakshatra OS is distributed under the MIT License. You can find the details in the [LICENSE](https://opensource.org/license/mit) file.