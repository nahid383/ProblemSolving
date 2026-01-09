#include<stdio.h>

void scanInput(char ch[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf(" %c", &ch[i][j]);  
        }
    }
}

int plus1(int point)
{
    point = point + 1;
    return point;
}

int plus2(int point)
{
    point = point + 2;
    return point;
}

int plus3(int point)
{
    point = point + 3;
    return point;
}

int plus4(int point)
{
    point = point + 4;
    return point;
}

int plus5(int point)
{
    point = point + 5;
    return point;
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char ch[10][10];
       
        scanInput(ch); 
        
        int point =0;
        for(int i=0; i<10; i++)
        {   
            for(int j=0; j<10; j++)
            {
                if((i==0 || i==9 || j==0 || j==9) && ch[i][j]=='X')
                {
                   point = plus1(point);
                }
                else if((i==1 || i==8 || j==1 || j==8)&&ch[i][j]=='X')
                {
                   point = plus2(point);
                }
                else if((i==2 || i==7 || j==2 || j==7)&&ch[i][j]=='X')
                {
                   point = plus3(point);
                }
                else if((i==3 || i==6 || j==3 || j==6)&&ch[i][j]=='X')
                {
                   point = plus4(point);
                }
                else if((i==4 || i==5 || j==4 || j==5)&&ch[i][j]=='X')
                {
                   point = plus5(point);
                }
            }
        }
        printf("%d\n",point);
    }
    return 0;
}