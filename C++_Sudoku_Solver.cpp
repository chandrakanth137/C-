#include<iostream>

//Credits: CK

using namespace std;

bool solver(int sudo[9][9]);
bool validate(int grid[9][9], int r, int c, int n);
int print(int sudoku[9][9]);
bool find_empty(int sudo[9][9], int& i, int& j);

int row = 9;
int col = 9;

bool solver(int sudo[9][9])
{
    int r, c;

    if (find_empty(sudo, r, c) == false)
    {
        return true;
    }

    for (int n = 1; n < 10; n++)
    {
        if (validate(sudo, r, c, n) == true)
        {
            sudo[r][c] = n;

            if (solver(sudo))
            {
                return true;
            }

            sudo[r][c] = 0;
        }
    }

    return false;
}

bool validate(int grid[9][9], int r, int c, int n)
{
    for (int z = 0; z < 9; z++)
    {
        if (grid[r][z] == n)
        {
            return false;
        }
    }

    for (int z = 0; z < 9; z++)
    {
        if (grid[z][c] == n)
        {
            return false;
        }
    }



    if ((r >= 0 && r <= 2) && (c >= 0 && c <= 2)) //1
    {
        for (int x = 0; x < 3; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }

            }
        }
    }

    if ((r >= 0 && r <= 2) && (c >= 3 && c <= 5)) //2
    {
        for (int x = 0; x < 3; x++)
        {
            for (int y = 3; y < 6; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }

            }
        }
    }

    if ((r >= 0 && r <= 2) && (c >= 6 && c <= 8)) //3
    {
        for (int x = 0; x < 3; x++)
        {
            for (int y = 6; y < 9; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }

            }
        }
    }


    if ((r >= 3 && r <= 5) && (c >= 0 && c <= 2)) //4
    {
        for (int x = 3; x < 6; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }

            }
        }
    }


    if ((r >= 3 && r <= 5) && (c >= 3 && c <= 5)) //5
    {
        for (int x = 3; x < 6; x++)
        {
            for (int y = 3; y < 6; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }

            }
        }
    }

    if ((r >= 3 && r <= 5) && (c >= 6 && c <= 8)) //6
    {
        for (int x = 3; x < 6; x++)
        {
            for (int y = 6; y < 9; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }
            }
        }
    }


    if ((r >= 6 && r <= 8) && (c >= 0 && c <= 2)) //7
    {
        for (int x = 6; x < 9; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }

            }
        }
    }

    if ((r >= 6 && r <= 8) && (c >= 3 && c <= 5)) //8
    {
        for (int x = 6; x < 9; x++)
        {
            for (int y = 3; y < 6; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }

            }
        }
    }

    if ((r >= 6 && r <= 8) && (c >= 6 && c <= 8)) //9
    {
        for (int x = 6; x < 9; x++)
        {
            for (int y = 6; y < 9; y++)
            {
                if (grid[x][y] == n)
                {
                    return false;
                }
            }
        }
    }

    return true;
}

int print(int ans[9][9])
{
    cout << "Answer:\n";
    for (int i = 0; i < 9; i++)
    {
        cout << "\n";

        if (i == 3 || i == 6)
        {
            cout << "\n";
        }

        for (int j = 0; j < 9; j++)
        {
            cout << ans[i][j]<<" ";

            if (j == 2 || j == 5)
            {
                cout << "  ";
            }
        }
    }
    cout << "\n";
    return 0;
}

bool find_empty(int sudo[9][9], int& i, int& j)
{
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (sudo[i][j] == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int sudoku[9][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}

    };

    cout << "Question:\n";
    print(sudoku);
    cout << "\n\n\n";

    solver(sudoku);
    print(sudoku);
}
