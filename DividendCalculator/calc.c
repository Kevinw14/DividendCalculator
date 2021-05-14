//
//  calc.c
//  DividendCalculator
//
//  Created by Kevin Wood on 5/10/21.
//

#include <stdio.h>

void investment_to_dividends(void);
void dividends_to_investment(void);

int main()
{
    printf("Which would you like to do?\n");
    printf("1. How much will I get back annually in dividends, if I invest x amount?\n");
    printf("2. How much do I have to invest to get back x in dividends annually?\n");

    int answer;
    scanf("%d", &answer);

    if (answer == 1)
    {
        investment_to_dividends();
    }
    else if (answer == 2)
    {
        dividends_to_investment();
    }
}

void investment_to_dividends(void)
{
    float investment;
    float price_per_share;
    float amount_of_shares;
    float dividend_yield;
    float annual_dividend;
    float annual_return_in_dividends;

    printf("How much would you like to invest?\n");
    scanf("%f", &investment);
    printf("What is the price per share?\n");
    scanf("%f", &price_per_share);
    printf("What is the current dividend yield?\n");
    scanf("%f", &dividend_yield);
    dividend_yield = dividend_yield / 100;

    amount_of_shares = investment / price_per_share;
    annual_dividend = price_per_share * dividend_yield;
    annual_return_in_dividends = amount_of_shares * annual_dividend;

    printf("If you invest $%.2f you will get back $%.2f in dividends annually\n", investment, annual_return_in_dividends);
}

void dividends_to_investment(void)
{
    float annual_return_in_dividends;
    float price_per_share;
    float amount_of_shares;
    float annual_dividend;
    float dividend_yield;
    float investment;

    printf("How much would you like to make in dividends?\n");
    scanf("%f", &annual_return_in_dividends);
    printf("What is the price per share?\n");
    scanf("%f", &price_per_share);
    printf("What is the current dividend yield?\n");
    scanf("%f", &dividend_yield);
    dividend_yield = dividend_yield / 100;

    annual_dividend = price_per_share * dividend_yield;
    amount_of_shares = annual_return_in_dividends / annual_dividend;
    investment = amount_of_shares * price_per_share;
    printf("You will have to invest $%.2f to get back $%2.f in dividends annually\n", investment, annual_return_in_dividends);
}
