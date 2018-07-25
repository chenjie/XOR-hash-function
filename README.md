# XOR-hash-function
A simple C program that is capable of computing and comparing hash values based on bitwise XOR.

## Getting Started

### Prerequisites

* GCC
* Terminal (in Unix) OR PowerShell (in Windows)

### Download source code and compile
The following instructions are presented in macOS:
```
# Change to HOME directory
$ cd ~

# Clone this repo and 'cd' into it
$ git clone https://github.com/jellycsc/XOR-hash-function.git
$ cd XOR-hash-function/

# Let's start
$ make
gcc -Wall -std=c99 -c compute_hash.c
gcc -Wall -std=c99 -c hash_functions.c
gcc -Wall -std=c99 -o compute_hash compute_hash.o hash_functions.o
```

### Usage
```
Usage: compute_hash BLOCK_SIZE [ COMPARISON_HASH ]
```

### Examples
Standard input:
```
$ ./compute_hash 3
Please enter the input, use [ctrl+d] to terminate: i love u^D
^D
The hash is 26 23 3 
```

Input from the result of another program's output:
```
$ echo "i love u" | ./compute_hash 3
Please enter the input, use [ctrl+d] to terminate: 
The hash is 26 23 3 
```

Compare the hash result with the third argument:
```
$ echo "i love u" | ./compute_hash 3 262344
Please enter the input, use [ctrl+d] to terminate: 
The hash is 26 23 3 
Comparing to 26 23 44 
The first index that differs is 2.
```

## Authors

| Name             | GitHub                                     | Email
| ---------------- | ------------------------------------------ | -------------------------
| Chenjie Ni       | [jellycsc](https://github.com/jellycsc)    | nichenjie2013@gmail.com

## Thoughts and future improvements

* Since this is a rather simple beginner's project, no further improvements will be made.

## Contributing to this project

1. Fork it ( https://github.com/jellycsc/XOR-hash-function/fork )
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -m 'Add some feature'`)
4. Push to your feature branch (`git push origin my-new-feature`)
5. Create a new Pull Request

Details are described [here](https://git-scm.com/book/en/v2/GitHub-Contributing-to-a-Project).

## Bug Reporting
Please log bugs under [Issues](https://github.com/jellycsc/XOR-hash-function/issues) tab on Github.  
OR you can shoot an email to <nichenjie2013@gmail.com>

## License
This project is licensed under GNU General Public License v3.0 - see [LICENSE](LICENSE) file for more details.
