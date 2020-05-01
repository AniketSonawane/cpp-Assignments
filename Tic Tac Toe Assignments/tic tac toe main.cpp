#include <iostream>
using namespace std;

char matrix[3][3]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player ='x';
int n;
void drawboard()
{
    system("cls");
    cout<<"** My Tic Toe Game**\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<< matrix[i][j]<<"|";
          
        }
    
        cout<<"\n";
         
    }
}
void Input()
{
    int a;
    cout<<"Its a "<<player<<"\t Turn"<<" Press The Number of Field in matrix\n";
    cin>>a;
    if(a==1)
    matrix[0][0]=player;
    else if(a==2)
    matrix[0][1]= player;
     else if(a==3)
    matrix[0][2]= player;
     else if(a==4)
    matrix[1][0]= player;
     else if(a==5)
    matrix[1][1]= player;
     else if(a==6)
    matrix[1][2]= player;
     else if(a==7)
    matrix[2][0]= player;
     else if(a==8)
    matrix[2][1]= player;
     else if(a==9)
    matrix[2][2]= player;
}
void Toggleplayer()
{
    
    if(player =='x')
    player='o';
    else
    player ='x';
}
char checkforwin()
{
    //for dirst player//
    if(matrix[0][0] =='x' && matrix[0][1] =='x' && matrix[0][2] =='x')
    return 'x';
    else if(matrix[1][0] =='x' && matrix[1][1] =='x' && matrix[1][2] =='x')
    return 'x';
    else if(matrix[2][0] =='x' && matrix[2][1] =='x' && matrix[2][2] =='x')
    return 'x';
    else  if(matrix[0][0] =='x' && matrix[1][0] =='x' && matrix[2][0] =='x')
    return 'x';
   else  if(matrix[0][1] =='x' && matrix[1][1] =='x' && matrix[2][1] =='x')
    return 'x';
    else if(matrix[0][2] =='x' && matrix[1][2] =='x' && matrix[2][2] =='x')
    return 'x';
    else  if(matrix[0][0] =='x' && matrix[1][1] =='x' && matrix[2][2] =='x')
    return 'x';
    else if(matrix[2][0] =='x' && matrix[1][1] =='x' && matrix[0][2] =='x')
    return 'x';
//similary for 2nd payer//
   else  if(matrix[0][0] =='o' && matrix[0][1] =='o' && matrix[0][2] =='o')
    return 'o';
    
    if(matrix[1][0] =='o' && matrix[1][1] =='o' && matrix[1][2] =='o')
    return 'o';
   else  if(matrix[2][0] =='o' && matrix[2][1] =='o' && matrix[2][2] =='o')
    return 'o';
     if(matrix[0][0] =='o' && matrix[1][0] =='o' && matrix[2][0] !='o')
    return 'o';
   else  if(matrix[0][1] =='o' && matrix[1][1] =='o' && matrix[2][1] =='o')
    return 'o';
   else  if(matrix[0][2] =='o' && matrix[1][2] =='o' && matrix[2][2] =='o')
    return 'o';
    else  if(matrix[0][0] =='o' && matrix[1][1] =='o' && matrix[2][2] =='o')
    return 'o';
   else  if(matrix[2][0] =='o' && matrix[1][1] =='o' && matrix[0][2] =='o')
    return 'o';
    
  else
    return '/';
    
}
int main()
{
   int n=0;   
    drawboard();
    while(1)
    {
        n++;
         Input();
         drawboard();
         if (checkforwin() == 'x') 
		{
			cout << "Player 1 wins!" << endl;
			break;
		}
		else if (checkforwin() == 'o')
		{
			cout << "Player 2 Wins" << endl;
			break;
		}
		else if(checkforwin()=='/'&& n ==9)
		{
		    cout<<"Its a Draw Match\n";
		    break;
		}
    	    
		
    Toggleplayer();
        
    }
   
   return 0;
}
