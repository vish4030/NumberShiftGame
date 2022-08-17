

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


// prototype declaration
char rule();
void numSiftGame(int);
void display(int []);



int main()
{
    int chance=10;
    numSiftGame(chance);
    getch();
    return 0;

}

// function for number shifting
void numSiftGame(int chance)
{
    int a[16] = {1,3,4,2,5,8,7,6,' ',9,11,12,10,14,15,13};
    int empt=0,i;
    char opt,movedir,ch;
    opt = rule();
     system("cls");
    printf("chances left--> %d\n",chance);
    display(a);

    while(chance >0)
    {

        if(opt == 'e' || opt == 'E')
        {
          chance =0;
          system("cls");
          printf("game ended");
        }
          
        else
        {
            for(i=0; i<16;i++)
              {
                  if(a[i]== 32)
                   empt = i;
            
              }
            ch = getch();
            if(ch == -32 )
            movedir = getch();
              system("cls");

    
                if(movedir== 'K'){ 
                       if( empt >1){
                        a[empt] = a[empt-1];
                        a[empt-1] = ' ';
                        chance--;
                       }
                        printf("\nchances left--> %d\n",chance); 
                        display(a);
                }
                 else if(movedir== 'H'){
                       if(empt>=4){ 
                        a[empt] = a[empt-4];
                        a[empt-4] = ' ';
                        chance--;
                       }
                        printf("\nchances left--> %d\n",chance); 
                        display(a);
                }
                 else if(movedir== 'M'){ 
                       if(empt!=15)
                       {
                        a[empt] = a[empt+1];
                        a[empt+1] = ' ';
                        chance--; 
                       }
                        printf("\nchances left--> %d\n",chance); 
                        display(a);
                }
                 else if(movedir== 'P'){ 
                    if(empt <12) {
                        a[empt] = a[empt+4];
                        a[empt+4] = ' ';
                        chance--; 
                    }
                        printf("\nchances left--> %d\n",chance); 
                        display(a);
                } 
                else
                chance =0;
           }
        
        }  
    
    if(chance == 0 &&( opt != 'e' && opt != 'E')){
      system("cls");
      printf("\nYOU LOSE GAME, TRY NEXT TIME");
    }
    
    
}



// function rule demonstration
char rule()
{
    int i;
    char begin;
    printf("\t\tRULE OF THIS GAME\n");
    
    printf("1. You can only move one step at a time by arrow key\n");
    printf("Move Up    :  by Up arrow key\n");
    printf("Move Down  :  by Down arrow key\n");
    printf("Move Right :  by Right arrow key\n"); 
    printf("Move Left  :  by left arrow key\n\n");
    printf("2. You can move number at empty position only\n");

    printf("3. For each vaild move : your total move will decrease by 1\n");
    printf("4. Winning situation : number in a 4*4 matrix should be in order from 1 to 15.\n\n");

    printf("\t\tWinning Situation\n");

    printf("----------------");
    printf("\n|"); 

    for(i=1; i<=4; i++)
       printf("%d  |",i);
    printf("\n|"); 

    for(i=5; i<=8; i++)
       printf("%d  |",i);
    printf("\n|");

    printf("%d  |",i);
    for(i=10; i<=12; i++)
       printf("%d |",i);
    printf("\n|");

    for(i=13; i<=15; i++)
       printf("%d |",i);

    printf("   |");   
    
    printf("\n"); 
    printf("----------------\n");

    printf("you can exit the game any time by pressing 'E' or 'e'\n\n");
    printf("So try to win in minimum no of move\n");

    printf("\t\tHappy gamming, Good Luck\n\n");

    printf("Enter any key to start....");
    fflush(stdin);
    scanf("%c",&begin);
    return begin;
    system("cls");
}



// function for display the resultant 4*4 matrix
void display(int arr[])
{
    int i;
    printf("-------------------");
    printf("\n|"); 

    for(i=0; i<4; i++)
    {
          if(arr[i]==' ')
             printf("%c   |",arr[i]);
          else
             printf("%d   |",arr[i]);
    }
    printf("\n|");  
        
    for(i=4; i<8; i++)
    {
          if(arr[i]==' ')
             printf("%c   |",arr[i]);
          else
             printf("%d   |",arr[i]);
    }
    printf("\n|"); 
        
    for(i=8; i<10; i++)
    {
          if(arr[i]==' ')
             printf("%c   |",arr[i]);
          else
             printf("%d   |",arr[i]);
    } 

    for(i=10; i<12; i++)
    {
          if(arr[i]==' ')
             printf("%c  |",arr[i]);
          else
             printf("%d  |",arr[i]);
    }
    printf("\n|"); 
        
    for(i=12; i<16; i++)
    {
          if(arr[i]==' ')
             printf("%c  |",arr[i]);
          else
             printf("%d  |",arr[i]);
    }
    printf("\n");  

    printf("------------------ ");
    printf("\n");  



}