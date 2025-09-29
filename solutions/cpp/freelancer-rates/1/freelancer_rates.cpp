// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    double daily_rate = 8.0 * hourly_rate;
    return daily_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    double apply_discount;
    apply_discount = before_discount - before_discount * discount * 0.01;
    return apply_discount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    double monthly_rate;
    monthly_rate = apply_discount(daily_rate(hourly_rate) * 22.0, discount);
    int fin_monthly_rate;
    fin_monthly_rate = monthly_rate * 10;
    fin_monthly_rate = fin_monthly_rate / 10;
    int x = monthly_rate * 10;
    if (x % 10 != 0){
        fin_monthly_rate += 1;
    }
    return fin_monthly_rate;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double days_in_budget;
    days_in_budget = budget / (monthly_rate(hourly_rate, discount) / 22);
    int fin_days_in_budget;
    fin_days_in_budget = days_in_budget * 10;
    fin_days_in_budget = fin_days_in_budget / 10;
    return fin_days_in_budget;
}
