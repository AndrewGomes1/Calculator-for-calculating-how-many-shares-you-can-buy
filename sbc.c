#include <cs50.h>
#include <stdio.h>

long calculate(double tma, double pph , double B);
double calculate_left(double tma, double pph, long shares, double brokerage);

int main(void)
{
    // input
    double tma = get_double("Total money available: ");
    double pps = get_double("Price per share: ");
    double Bro = get_double("Brokerage: ");

    // sending to the function
    long totalShare = calculate(tma, pps , B);
    long moneyLeftOver = calculate_left(tma, pps, totalShare, B);

    // printing the total number of share you can buy
    printf("totalShare: %ld\n", totalShare);
    printf("MoneyLeftOver: %ld\n", moneyLeftOver);
}
// calculating Total money available / Price per share
long calculate(double tma, double pps , double B)
{
    double USM = tma - B;

    if(tma < pps)
    {
        return 0;
    }

    return (long)tma / pps;
}
// To calculate the money left over
double calculate_left(double tma, double pps, long shares, double brokerage)
{
    double total_cost = (shares * pps) + brokerage;
    return tma - total_cost;
}
