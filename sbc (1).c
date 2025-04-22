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
    long totalShare = calculate(tma, pps , Bro);
    long moneyLeftOver = calculate_left(tma, pps, totalShare, Bro);

    // printing the total number of share you can buy
    printf("totalShare: %ld\n", totalShare);
    printf("MoneyLeftOver: %ld\n", moneyLeftOver);
}
// calculating Total money available / Price per share
long calculate(double tma, double pps , double Bro)
{
    double USM = tma - Bro;

    if(tma < pps)
    {
        return 0;
    }

    return (long)tma / pps;
}
// To calculate the money left over
double calculate_left(double tma, double pps, long shares, double Bro)
{
    double total_cost = (shares * pps) + Bro;
    return tma - total_cost;
}
