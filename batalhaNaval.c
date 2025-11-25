#include <stdio.h>
int main(){

//matriz do campo da batalha naval
    
int area [10][10] = {
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }

};

// loop que faz aparecer o primeiro navio na vertical

for (int i = 1; i < 4; i++)
{
    for (int j = 1; j < 3; j++)
    {
        area [i][2] ++;
    }
    area[i][2] ++;
}

// loop que faz o segundo navio aparecer na horizontal

for (int k = 5; k < 8; k++)
{
    for (int l = 1; l < 3; l++)
    {
        area [7][k] ++;
    }
    area[7][k] ++;
}

// amostragem de como ficou o tabuleiro do jogo

printf("   A B C D E F G H I J \n");
printf("1  %d %d %d %d %d %d %d %d %d %d \n", area[0][0], area[0][1], area[0][2], area[0][3], area[0][4], area[0][5], area[0][6], area[0][7], area[0][8], area[0][9]);
printf("2  %d %d %d %d %d %d %d %d %d %d \n", area[1][0], area[1][1], area[1][2], area[1][3], area[1][4], area[1][5], area[1][6], area[1][7], area[1][8], area[1][9]);
printf("3  %d %d %d %d %d %d %d %d %d %d \n", area[2][0], area[2][1], area[2][2], area[2][3], area[2][4], area[2][5], area[2][6], area[2][7], area[2][8], area[2][9]);
printf("4  %d %d %d %d %d %d %d %d %d %d \n", area[3][0], area[3][1], area[3][2], area[3][3], area[3][4], area[3][5], area[3][6], area[3][7], area[3][8], area[3][9]);
printf("5  %d %d %d %d %d %d %d %d %d %d \n", area[4][0], area[4][1], area[4][2], area[4][3], area[4][4], area[4][5], area[4][6], area[4][7], area[4][8], area[4][9]);
printf("6  %d %d %d %d %d %d %d %d %d %d \n", area[5][0], area[5][1], area[5][2], area[5][3], area[5][4], area[5][5], area[5][6], area[5][7], area[5][8], area[5][9]);
printf("7  %d %d %d %d %d %d %d %d %d %d \n", area[6][0], area[6][1], area[6][2], area[6][3], area[6][4], area[6][5], area[6][6], area[6][7], area[6][8], area[6][9]);
printf("8  %d %d %d %d %d %d %d %d %d %d \n", area[7][0], area[7][1], area[7][2], area[7][3], area[7][4], area[7][5], area[7][6], area[7][7], area[7][8], area[7][9]);
printf("9  %d %d %d %d %d %d %d %d %d %d \n", area[8][0], area[8][1], area[8][2], area[8][3], area[8][4], area[8][5], area[8][6], area[8][7], area[8][8], area[8][9]);
printf("10 %d %d %d %d %d %d %d %d %d %d \n", area[9][0], area[9][1], area[9][2], area[9][3], area[9][4], area[9][5], area[9][6], area[9][7], area[9][8], area[9][9]);
   
return 0;
}
