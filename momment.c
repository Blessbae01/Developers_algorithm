#include <stdio.h>

int main() {
long long moment;  // moment in time (the time will be in seconds
long long gigaseconds = 1000000000;  // 10^9 seconds
    
printf("Enter a moment in time (in seconds): ");
scanf("%lld", &moment);
    
long long new_moment = moment + gigaseconds;  // calculate new moment
    
printf("The moment after a giga seconds has passed: %lld\n", new_moment);
    
return 0;
}
