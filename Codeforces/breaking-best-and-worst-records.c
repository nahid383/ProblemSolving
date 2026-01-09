#include<stdio.h>
#include<string.h>
#include<math.h>
void input(int n)
{
    int max;
    int array[n];
     for(int i=0; i<n; i++)
    {
    scanf("%d",&array[i]);
    }
     for(int i=0; i<n; i++)
    {
    max = array[i];
    break;
    }
     
     int best = 0;
     int worst = 0;
     for(int i=0; i<n; i++)
     {
      
        if(array[i]>max){
 max=array[i];
        best++;
        }
       
        else if(array[i]<array[0]){
            array[0]=array[i];
        worst++;
        }
        
     }
     printf("%d %d",best, worst);
}

int main()
{
 int n;
 scanf("%d",&n);
 
  input(n);

  return 0;
}