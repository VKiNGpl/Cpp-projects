/*
 * Checks to see whether the specified player identified by mark
 * ('X' or 'O') has won the game. To reduce the number of special
 * cases, this implementation uses the helper function CheckLine.
 */

bool CheckForWin(Grid<char>& board, char mark)
{
    for (int i = 0; i < 3; i++)
    {
        if (CheckLine(board, mark, i, 0, 0, 1)) return true;
        if (CheckLine(board, mark, 0, i, 1, 0)) return true;
    }
    if (CheckLine(board, mark, 0, 0, 1, 1)) return true;
    return CheckLine(board, mark, 2, 0, -1, 1);
}

/*
 * Checks a line extending across the board in some direction. The
 * starting coordinates are given by the row and col parameters.
 * The direction of motion is specified by dRow and dCol, which
 * show how to adjust the row and col values on each cycle. For
 * rows, dRow is always 0; for columns, dCol is 0. For diagonals,
 * these values will be +1 or -1 depending on the direction.
 */

bool CheckLine(Grid<char>& board, char mark, int row, int col, int dRow, int dCol)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[row][col] != mark) return false;
        row += dRow;
        col += dCol;
    }
    return true;
}
