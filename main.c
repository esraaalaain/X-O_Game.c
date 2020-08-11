

#include <stdio.h>
#include <conio.h>
char x ='x';
char o = 'o';
char symbol=0 ; 
int count =0;
  static int Flag=1;
int chek_symbol=1;



char locations[10] = { '0' , '1', '2', '3',
                             '4', '5', '6',
                             '7', '8', '9' };  

void board ()
    {
          printf("\n");
          printf("    ___________\n");
          printf("       |   |        \n");
          printf("     %c | %c | %c  \n",locations[1],locations[2] , locations[3]);
          printf("    ___|___|___   \n");
          printf("     %c | %c | %c    \n",locations[4],locations[5] , locations[6]);
          printf("    ___|___|___    \n");
          printf("     %c | %c | %c  \n",locations[7],locations[8] , locations[9]);
          printf("    ___|___|___  \n \n");

    }

int game_over()
{
  if ((locations[1] ==x || locations[1]==o) && (locations[2] ==x || locations[2]==o) && (locations[3] ==x || locations[3]==o)&& (locations[4] ==x || locations[4]==o) && (locations[5] ==x || locations[5]==o) &&( locations[6] ==x || locations[6]==o) && (locations[7] ==x || locations[7]==o )&& (locations[8] ==x || locations[8]==o) && (locations[9] ==x || locations[9]==o) )
{
  Flag=0;
  
  printf("\n Game over -- no winner \n");
}
}
int win()
{

// 1st row  
if (locations[1]==locations[2] && locations[2]==locations[3])
{ 
  Flag=0;
  if (locations[1]==x)
  { 
  printf("\n the x is win \n ");
   return 0;
  }
  else 
  {
      printf("\n the o is win \n ");
    return 0;
  }


}
// 2nd row
else if (locations[4]==locations[5] && locations[5]==locations[6] )
{
    Flag=0;

  if (locations[5]==x){
  printf("\n the x is win \n ");
          return 0;


}
else if (locations[5]==o)
{
      printf("\n the o is win \n ");
        return 0;


}

}
// 3rd row
else if (locations[7]==locations[8] && locations[8]==locations[9] )
{
    Flag=0;

  if (locations[9]==x){
  printf("\n the x is win \n ");
          return 0;


}
else
{
      printf("\n the o is win \n ");
              return 0;



}

}
// 1st col  1 4 7 
else if (locations[1]==locations[4] && locations[4]==locations[7])
{
    Flag=0;

  if (locations[1]==x){
  printf("\n the x is win \n ");
          return 0;


}
else
{
      printf("\n the o is win \n ");
    
    return 0;

}

}
//2nd col 2 5 8 
else if (locations[2]==locations[5] && locations[5]==locations[8] )
{
    Flag=0;

  if (locations[2]==x){
  printf("\n the x is win \n ");
          return 0;


}
else if (locations[2]==o)
{
      printf("\n the O is win \n ");
         return 0;

}

}
//3rd col 3 6 9 
else if (locations[3]==locations[6] && locations[6]==locations[9] )
{
    Flag=0;

  if (locations[6]==x){
  printf("\n the x is win \n ");
          return 0;


}
else
{
      printf("\n the o is win \n ");
        return 0;

}
}
// 1st Diameter 1 5 9 
else if (locations[1]==locations[5] && locations[5]==locations[9] )
{  
  Flag=0;
  if (locations[1]==x)
  {
  printf("\n the x is win \n ");
          return 0;

  }
else
{
      printf("\n the o is win  \n ");
          
    return 0;


}
}
// 2nd Diameter 3 5 7
else if (locations[3]==locations[5] && locations[5]==locations[7])
{
    Flag=0;

  if (locations[3]==x)
  {
  printf("\n the X is win \n ");
      return 0;

  }    
else
{
      printf("\n the O is win  \n ");
        return 0;

 }
 
}

Flag=1;
}
void intro ()
{ 
  // chek a symbol 
while ( chek_symbol )
{
 chek_symbol=0;

scanf("%c", &symbol);
if (symbol==o|| symbol==x)
{
      board();

    if (symbol== x)
  {
    printf("  User 1  %c    \n", x);
    printf("  User 2  %c    \n",o );
  }
          else if (symbol==o)
         {
         printf("  User 1   %c   \n",o);
         printf("  User 2   %c   \n" ,x );
         }

 chek_symbol =0;

}

else
    {  

       chek_symbol=1;

       printf("plz try again \n  X or O \n  ");

    }

}

}
void game()
{
  int play1;
  int play2 ;

    
        if(symbol==x || symbol==o)
        {


         if (symbol==x)
          {
            printf("   X >>  plz chose your location \n ");
            scanf("%d",&play1); 
            if (locations[play1]==x || locations[play1]==o)
              {
                printf("\n Try another location \n   ");
                scanf("%d",&play1); 
              }
                  else if (play1==1 || play1==2 || play1==3 || play1==4|| play1==5|| play1==6|| play1==7|| play1==8|| play1==9 )
                  {
                    locations[play1]=x;
                    board();
                    symbol=o;
                    win();
                  }     
                                                                 
          }
            else if(symbol==o)
            {
              printf("    O >>  plz chose your location \n ");
              scanf("%d",&play2);  
                    if (locations[play2]==x || locations[play2]==o)
                    {
                      printf("\n Try another location \n   ");
                      scanf("%d",&play2); 
                    }
              else if (play2==1 || play2==2 || play2==3 || play2==4|| play2==5|| play2==6|| play2==7|| play2==8|| play2==9 )
                {
                  locations[play2]=o;
                  board();
                  symbol=x;
                  win();
                } 
                 
                                                          
              }
                  
                                                                   


        }

      
    
    
 }


//=======================
char main ()
{
printf ("\n \n  please chose side (X or O)   \n  ");
intro();
while (Flag)
    {
      game();
    game_over();
    }
return 0;

}

