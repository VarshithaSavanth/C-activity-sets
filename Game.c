#include<stdio.h>
int N = 3;

void showBoard(int board[3][3])
{
  int i,j;
  for (i=0 ; i<N ; i++)
  {
    for (j=0 ; j<N ; j++)
    {
      printf("%d", board[i][j]);
    }
    printf("\n");
  }
}

void initializeBoard(int board[3][3])
{
  int i,j;
  for (i=0 ; i<N ; i++)
  {
    for (j=0 ; j<N ; j++)
    {
      board[i][j] = 0;
    }
  }
}


int playMove(int board[3][3], int player)
{
  int x, y, validMove = 1;
  printf("Move for the Player : %d\n", player);
  printf("Input x coordinate\n");
  scanf("%d", &x);
  printf("Input y coordinate\n");
  scanf("%d", &y);
  if((x >= 0 && x < N) && (y >= 0 && y < N) && board[x][y] == 0)
  {
    board[x][y] = player;
    showBoard(board);
  }
  else
  {
    validMove = 0;
  }
  return validMove;
  }

int checkWin(int board[3][3], int player)
{
  int i, j;
  int playerWon = 0;
  for (i=0 ; i<N ; i++)
  {
    if((board[i][0] == player && board[i][1] == player && board[i][2] == player) || (board[0][i] == player && board[1][i] == player && board[2][i] == player))
    {
      playerWon = 1;
    }
  }

  if((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][1] == player && board[2][0] == player))
  {
    playerWon =1;
  }
  return playerWon;
}

int main()
{
  int N = 3;
  int board[3][3];
  showBoard(board);
  int Player1 = 1;
  int Player2 = 2;
  int player = Player1;
  int winningPlayer = 0;
  winningPlayer = checkWin(board, Player2);
  //printf("Winner : %d", winningPlayer);
  //playMove(board, player);
  //showBoard(board);
  while ( !(checkWin(board, Player1) || checkWin(board, Player2)))
  {
    playMove(board, player);
    if(player==Player1)
    {
      player = Player2;
    }
    else
    {
      player = Player1;
    }
  }
  
  return 0;
}