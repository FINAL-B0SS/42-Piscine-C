/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_husui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 01:22:38 by husui             #+#    #+#             */
/*   Updated: 2017/11/05 15:49:05 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BLOCK_CELL(s,b,i) (s[((b / 3) * 3) + (i / 3)][((b % 3) * 3) + (i % 3)])

int		in_square(int number, int puzzle[9][9], int row, int column)
{
	int i;
	int block;

	i = 0;
	block = ((row / 3) * 3) + (column / 3);
	while (i < 9)
	{
		if (BLOCK_CELL(puzzle, block, i) == number)
			return (1);
		i++;
	}
	return (0);
}

int		safe_to_place(int number, int puzzle[9][9], int row, int column)
{
	int i;

	i = 0;
	while (i < 9)
		if (puzzle[row][i++] == number ||
				in_square(number, puzzle, row, column))
			return (0);
	i = 0;
	while (i < 9)
		if (puzzle[i++][column] == number ||
				in_square(number, puzzle, row, column))
			return (0);
	return (1);
}

void	commit_sudoku(int sudoku[9][9], int i, int j, char c)
{
	while (i < 9)
	{
		j = -1;
		while (++j < 9)
			if (sudoku[i][j] < 1 || sudoku[i][j] > 9)
			{
				write(1, "Error\n", 6);
				return ;
			}
		i++;
	}
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = sudoku[i][j++] + '0';
			write(1, &c, 1);
			if (j < 9)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

int		sudoku_helper(int puzzle[9][9], int row, int column)
{
	int number;

	number = 1;
	if (row == 9)
		return (1);
	if (puzzle[row][column])
	{
		if ((column == 8 && sudoku_helper(puzzle, row + 1, 0)) ||
				(column < 8 && sudoku_helper(puzzle, row, column + 1)))
			return (1);
		return (0);
	}
	while (number <= 9)
	{
		if (safe_to_place(number, puzzle, row, column))
		{
			puzzle[row][column] = number;
			if ((column == 8 && sudoku_helper(puzzle, row + 1, 0)) ||
					(column < 8 && sudoku_helper(puzzle, row, column + 1)))
				return (1);
		}
		number++;
		puzzle[row][column] = 0;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int sudoku[9][9];
	int i;
	int j;

	if (argc == 10)
	{
		i = 1;
		while (i < 10)
		{
			j = 0;
			while (j < 9 && argv[i][j] != '\0')
			{
				sudoku[i - 1][j] = 0;
				if (argv[i][j] >= '1' && argv[i][j] <= '9')
					sudoku[i - 1][j] = argv[i][j] - '0';
				j++;
			}
			i++;
		}
		sudoku_helper(sudoku, 0, 0);
		commit_sudoku(sudoku, 0, 0, 0);
	}
	else
		write(1, "Error\n", 7);
	return (0);
}
