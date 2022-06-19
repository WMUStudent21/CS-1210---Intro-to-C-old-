// Exercise 12
#include <stdio.h>

int main() {
    int n, sign, i;
    float sum_consistent, sum_alternate, casted;
    
    printf("Enter number of terms to output harmonic and alternating harmonic series, non-positive integer will quit process: ");
    while (scanf("%d", &n) > 0) {
        sum_consistent = 0, sum_alternate = 0;

        for ( i=1 ; i<=n ; i++ ) {
            casted = (float) 1/i; // casting integer to float via explicit type conversion (source: Midterms essay)
            sum_consistent += casted;
            if (i%2==0) {
                sum_alternate -= casted;
            }
            else {
                sum_alternate += casted;
            }
        }
    printf("The sum of the %dth term of the harmonic series is %f.\n", n, sum_consistent);
	printf("The sum of the %dth term of the alternating harmonic series is %f.\n", n, sum_alternate);
	printf("Enter number of terms to output harmonic and alternating harmonic series, non-positive integer will quit process: ");
    }
    
    // Assuming n is infinite
    // First series does not converge as it is not approaching a limit, according to the p-series proof.
    // however, interestingly the output seems to converge at 15.404.
    // Alternating series converges to natural log of 2.
    return 0;
}