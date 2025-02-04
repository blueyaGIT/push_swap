<p align="center">
  <img src="https://github.com/blueyaGIT/blueyaGIT/blob/master/42_badges/push_swapn.png?raw=true" alt="push_swap"/>
</p>

<p align="center">
  Score: <i>WIP/100</i><br>
  Finished: <i>??.??.2025</i><br>
</p>

###

`push_swap` is a sorting algorithm project that sorts a stack of integers with a limited set of operations. The objective is to sort the numbers using the fewest possible moves. This project is part of the 42 School curriculum.

## Usage

To use `push_swap`, clone the repository in the root of your project using one of the following commands:

#### SSH
```bash
git clone git@github.com:blueyaGIT/push_swap.git
```
#### HTTPS
```bash
git clone https://github.com/blueyaGIT/push_swap.git
```
#### GitHub CLI
```bash
gh repo clone blueyaGIT/push_swap
```
This will create a directory called `push_swap/`. Enter it with the command:

```bash
cd push_swap
```

### Compiling

To compile the program, run:

```bash
make
```

This will generate the `push_swap` executable.

### Running the Program

Execute the program with a list of integers:

```bash
./push_swap 4 67 3 87 23
```

The program will output a sequence of operations to sort the numbers.

## Operations

The following operations are used to manipulate the stacks:

- `sa` - Swap the first two elements of stack `A`.
- `sb` - Swap the first two elements of stack `B`.
- `ss` - Swap the first two elements of both stacks.
- `pa` - Push the top element from stack `B` to stack `A`.
- `pb` - Push the top element from stack `A` to stack `B`.
- `ra` - Rotate stack `A` upwards.
- `rb` - Rotate stack `B` upwards.
- `rr` - Rotate both stacks upwards.
- `rra` - Reverse rotate stack `A`.
- `rrb` - Reverse rotate stack `B`.
- `rrr` - Reverse rotate both stacks.

## Notes

- The program only accepts integer values.
- Duplicate numbers are not allowed.
- The stack is sorted using an efficient combination of operations.

For more details, refer to the project documentation or the `42` subject PDF.