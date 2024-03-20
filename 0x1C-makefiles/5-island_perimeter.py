#!/usr/bin/python3
""" Island perimeter"""

def island_perimeter(grid):
    """returns island perimeter"""
    edge = 0
    sizes = 0
    width = len(grid[0])
    height = len(grid)

    for x in range(height):
        for k in range(width):
            if grid[x][k] == 1:
                sizes += 1
                if (k > 0 and grid[x][k - 1] == 1):
                    edge += 1
                if (x > 0 and grid[x - 1][k] == 1):
                    edge += 1
    return sizes * 4 - edge * 2
