 #include <stdio.h>
#include <string.h>
void magicSq(int n)
{
    int magicSquare[n][n];
    memset(magicSquare, 0, sizeof(magicSquare));
    int i = n -1,j = n /2 ;
    for (int num = 1; num <= n * n;) {
        if (j == n && i == -1){
            j = n - 2;
            i = 0;
        }
        else {
            if (j == n)
                j = 0;
            if (i < 0)
                i = n - 1;
        }
        if (magicSquare[i][j]){
            j -= 2;
            i++;
            continue;
        }
        else
            magicSquare[i][j] = num++;
        i++;
        j--;
    }
    printf("n=%d:\nSum of ""each row %d:\n\n",n, n * (n * n + 1) / 2);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", magicSquare[i][j]);
        printf("\n");
    }
}

int main(){
    int n = 5;
    magicSq(n);
    return 0;
}