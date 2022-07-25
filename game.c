 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SPS();
void TicTac();
 int main()
    {
            int ch;
            
        while(1)
    	{
    	printf("1.STONE ,PAPER AND SCISSORS \n");

        printf("2.TIC-TAC TOE \n");

        printf("3.Quit \n");

        printf("Enter your choice : ");
        
	scanf("%d",&ch);
    	        switch (ch)

        {

            case 1:

            SPS();

            break;

            case 2:

            TicTac();

            break;

            case 3:

            exit(1);

            default:

void SPS();
{
    int R=1;
    int P=2;
    int S=3;
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;
    srand(time(NULL));
    printf("TO WIN THIS GAME YOU HAVE ONLY 5 CHANCE");
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");

    for(i=0;i<5;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
            int computer=rand()%3+1;
            printf("computer's choice:%d\n",computer);
            if(choice==1){
                if(computer==1){
                    printf("Draw\n");
                }
                if(computer==2){
                    printf("Computer Wins!\n");
                    Cscore= Cscore + 1;
                }
                if(computer==3){
                    printf("Player Wins\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(choice==2){
                    if(computer==2){
                        printf("Draw\n");
                    }
                    if(computer==3){
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;
                    }
                    if(computer==1){
                        printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
                }
                else if(choice==3){
                    if(computer==3){
                        printf("Draw\n");
                    }
                    if(computer==2){
                        printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
                    if(computer==1){
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;

                    }
                }
        else{
            printf("Wrong Answer\n");
        }

            }
            if(Cscore > Pscore ){
                printf("Computer wins %d to %d\n",Cscore,Pscore);
            }
            else if(Cscore < Pscore ){
                printf("Player wins %d to %d\n",Pscore,Cscore);
            }
           else if(Cscore = Pscore ){
                printf("No winner it is a draw!\n");
            }



    return 0;
}

void TicTac();
{
char matrix[3][3];                   /* the tic tac toe matrix */       
char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);
int main(void)
{
char done;
printf("This is the game of Tic Tac Toe.\n");
printf("You will be playing  against the computer.\n");
done = ' ';
init_matrix();
do{
disp_matrix();
get_player_move();
done = check();                                                               /* see if winner */
if(done!= ' ') break;                                                       /* winner!*/
get_computer_move();
done = check();                                      /* see if winner */
} while(done== ' ');
if(done=='X') 
printf("*****************************************You won******************************************\n");
else printf("**************************************** I won ****************************************\n");
disp_matrix();                                          /* show final positions */
return 0;
}

/* Initialize the matrix. */

void init_matrix(void)
{
int i, j;
for(i=0; i<3; i++)
for(j=0; j<3; j++) matrix[i][j] = ' ';
}

/* Get a player's move. */

void get_player_move(void)
{
int x, y;
printf("***********************************WELCOME IN TIC-TAC TOE GAME****************************************\n");
printf("Enter X,Y coordinates for your move: ");
scanf("%d%*c%d", &x, &y);
x--; y--;
if(matrix[x][y]!= ' '){
printf("Invalid move, try again.\n");
get_player_move();
}
else matrix[x][y] = 'X';
}

/* Get a move from the computer. */

void get_computer_move(void)
{
int i, j;
for(i=0; i<3; i++){
for(j=0; j<3; j++)
if(matrix[i][j]==' ') break;
if(matrix[i][j]==' ') break;
}
if(i*j==9) {
printf("draw\n");
exit(0);
}
else
matrix[i][j] = 'O';
}

/* Display the matrix on the screen. */

void disp_matrix(void)
{
int t;
for(t=0; t<3; t++) {
printf(" %c | %c | %c ",matrix[t][0],
matrix[t][1], matrix [t][2]);
if(t!=2) printf("\n---|---|---\n");
}
printf("\n");
}

/* See if there is a winner. */

char check(void)
{
int i;
for(i=0; i<3; i++)                                                    /* check rows */
if(matrix[i][0]==matrix[i][1] &&
matrix[i][0]==matrix[i][2]) return matrix[i][0];
for(i=0; i<3; i++)                                                   /* check columns */
if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i])
    return matrix[0][i];
/* test diagonals */
if(matrix[0][0]==matrix[1][1] &&
matrix[1][1]==matrix[2][2])
return matrix[0][0];
if(matrix[0][2]==matrix[1][1] &&
matrix[1][1]==matrix[2][0])
return matrix[0][2];
return ' ';
}
}
