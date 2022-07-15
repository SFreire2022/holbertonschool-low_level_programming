#!/usr/bin/python3
""" Module for island_perimeter calculation"""


def island_perimeter(grid):
    """ Function that returns the perimeter of island represented in grid """
    perimeter = 0

    if grid:
        for y in range(len(grid)):
            for x in range(len(grid[0])):
                if grid[y][x] == 1:
                    if (y - 1) == -1 or grid[y - 1][x] == 0:
                        perimeter += 1
                    if (y + 1) == len(grid) or grid[y + 1][x] == 0:
                        perimeter += 1
                    if (x - 1) == -1 or grid[y][x - 1] == 0:
                        perimeter += 1
                    if (x + 1) == len(grid[0]) or grid[y][x + 1] == 0:
                        perimeter += 1

    return perimeter
