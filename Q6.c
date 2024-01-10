
# include <stdio.h>

int main(){

    int p, r, t, interest;

    printf("Enter the principal: ");
    scanf("%d", &p);

    printf("\nEnter the rate: ");
    scanf("%d", &r);

    printf("\nEnter the time: ");
    scanf("%d", &t);

    interest=p*r*t/100;
    printf("\nThe Simple interest is %d", interest);

    return 0;

}
