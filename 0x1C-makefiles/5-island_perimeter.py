#!/usr/bin/python3
""" technical interview preparation """


def island_perimeter(grid):
    """ technical interview preparation """
    perimeter = 0
    pos = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                if not j or not grid[i][j-1]:
                    perimeter += 1
                if not i or not grid[i-1][j]:
                    perimeter += 1
                if j == n - 1 or not grid[i][j+1]:
                    perimeter += 1
                if i == m - 1 or not grid[i+1][j]:
                    perimeter += 1
    return perimeter
