#!/usr/bin/python3
"""Create a function that returns perimeter of an island described in a grid"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""

    cell_perimeter = 0
    island_perimeter = 0
    row_idx = 0

    for row in grid:
        cell_idx = 0
        for cell in row:
            if cell == 1:
                # Getting the perimeter of a cell:
                # Check the north
                if grid[row_idx - 1][cell_idx] == False:
                    cell_perimeter += 1
                # Check the east
                if row[cell_idx + 1] == False:
                    cell_perimeter += 1
                # Check the south
                if grid[row_idx + 1][cell_idx] == False:
                    cell_perimeter += 1
                # Check the west
                if row[cell_idx - 1] == False:
                    cell_perimeter += 1

            cell_idx += 1
        island_perimeter += cell_perimeter
        cell_perimeter = 0
        row_idx += 1
    return island_perimeter
