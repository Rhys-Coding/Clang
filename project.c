#include <stdio.h>

int main ()
{
    int n, i, result = 0;

        printf("Enter the number of integer you want to add : ");
            scanf("%d", &n);

                if (n <= 0) {
                        printf("Please enter the positive integer\n");
                                return 0;
                                    }

                                        for(i = 1; i <= n; i++) {
                                                int sum;
                                                        printf("Enter integer %d : ", i);
                                                                scanf("%d", &sum);
                                                                        result += sum;
                                                                            }
                                                                                printf("Sum of %d integers is %d", n, result);

                                                                                    return 0;
                                                                                    }