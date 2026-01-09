#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cards[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cards[i]);
    }
    
    int left = 0;
    int right = n - 1;
    int sereja = 0;
    int dima = 0;
    int turn = 0; 
    
    while (left <= right)
    {
        if (cards[left] >= cards[right])
        {
            if (turn == 0)
                sereja += cards[left];
            else
                dima += cards[left];
            left++;
        } else 
        {
            if (turn == 0)
                sereja += cards[right];
            else
                dima += cards[right];
            right--;
        }
        turn = 1 - turn;
    }
    
    printf("%d %d\n", sereja, dima);
    return 0;
}
