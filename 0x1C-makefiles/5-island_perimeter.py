#!/usr/bin/python3
""" Module for island_perimeter calculation"""


def island_perimeter(grid):
    """ Function that returns the perimeter of island represented in grid """
    perimeter = 0

    if grid:
        for a in range(len(grid)):
            for b in range(len(grid[0])):
                if grid[a][b] == 1:
                    perimeter = perimeter + 1
        perimeter = (perimeter * 2) + 2

    return perimeter
