#include <stdio.h>
#include <limits.h>
#define INF INT_MAX // INT_MAX is defined inside limits.h
int min(int a, int b) 
{
    return (a < b) ? a : b;
}
int main() 
{
    int coins[] = {2, 3, 6, 7};
    int n = sizeof(coins) / sizeof(coins[0]); // find the element no
    
    int amount = 13;
    
    int T[n + 1][amount + 1];
    
    int i, j;
    
    // Initialization
    for(i = 0; i <= n; i++) 
    {
        T[i][0] = 0;
    }
    
    for(j = 1; j <= amount; j++) 
    {
        T[0][j] = INF;
    }
    
    // Dynamic Programming table filling
    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= amount; j++) 
        {
            // Do not take current coin
            T[i][j] = T[i-1][j]; // Previous one
            
            // Take current coin if possible
            if(j >= coins[i-1] && T[i][j - coins[i-1]] != INF) // if the current amount j big enough to use this coin?
            {
                T[i][j] = min(
                    T[i][j],
                    1 + T[i][j - coins[i-1]]
                );
            }
        }
    }
    
    // Result
    if(T[n][amount] == INF)
        printf("No solution exists\n");
    else
        printf("Minimum coins required = %d\n", T[n][amount]);
        
    // Print DP Table
    printf("\nDP Table:\n");
    for(i = 0; i <= n; i++) 
    {
        for(j = 0; j <= amount; j++) 
        {
            if(T[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", T[i][j]);
        }
        printf("\n");
    }
    
    // backtracking for showing coins
    printf("\nCoins used: ");
    
    i = n;
    j = amount;
    
    while(j > 0) 
    {
        if(T[i][j] == T[i-1][j]) 
        {
            // coin not used
            i--;
        } 
        else 
        {
            // coin used
            printf("%d ", coins[i-1]);
            j = j - coins[i-1]; // left
        }
    }
    printf("\n");
    return 0;
}
