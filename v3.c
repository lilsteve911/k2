#include <stdio.h>

int main() {
    int n, brojac = 0, brojaczabrojac = 1;
    int brojac1 =1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        brojaczabrojac = 1;
        if (i % 2 != 0) {
            for (int j = 1; j <= n; j++) {
                if (j + brojac <= n) {
                    printf("%d", j + brojac);

                }
                else{
                    printf("%d", brojaczabrojac);
                    brojaczabrojac++;
                }
            }
            brojac++;
        }
        else{

            for (int j = 1; j <= n; j++) {
                if(j % 2 != 0){
                    printf("%d", brojac1);
                }
                else{
                    printf("%d", brojac1 + 1);
                }
            }
            brojac1++;
        }
        printf("\n");

    }
    return 0;
}
