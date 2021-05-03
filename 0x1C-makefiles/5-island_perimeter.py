def island_perimeter(grid):
    d = 0
    perimeter = 0
    height = len(grid) - 1
    length = len(grid[0]) - 1
    sides = 0  # the number of sides touching water
    for row in grid:
        c = 0  # the element of grid [sub][elem]
        for val in row:  # itterates thu grid[0]
            if val == 1:  # goes until 1 is found
                sides = 4  # plot with 4 sides
                if c != length:  # will check if end of row
                    if grid[d][c + 1] == 1:  # checks next number in row
                        sides -= 1  # land touching land
                if c != 0:  # not he first elem of grid row
                    if grid[d][c - 1] == 1:  # chk for first element == 1
                        sides -= 1  # land touching land
                if d != height:  # d is not last row in order to check next row
                    if grid[d + 1][c] == 1:  # comp d == c in next row
                        sides -= 1  # land touching land
                if d != 0:  # chk prev row and if last row chk prev row
                    if grid[d - 1][c] == 1:  # comp d == c in prev row
                        sides -= 1  # land touching land
                perimeter += sides
            c += 1
        d += 1
    return perimeter
