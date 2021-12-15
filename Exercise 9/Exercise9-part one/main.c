/*
 * Programmer: Shayan Mansornia     Date:12/12/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 */
#include <stdio.h>
typedef struct {
    int day;
    int month;
    int year;
} date_t;

typedef struct {
    double tank_capacity;
    double fuel_level;
} tank_t;

typedef struct {
    char make[20];
    char model[20];
    int odometer;
    date_t manufacture;
    date_t purchase;
    tank_t tank;
} auto_t;

int scan_date(FILE *input, date_t *date);
int scan_tank(FILE *input, tank_t *tank);
int scan_auto(FILE *input, auto_t *automobile);
void print_date(date_t *date);
void print_tank(tank_t *tank);
void print_auto(auto_t *automobile);

int
main(void)
{
    FILE *input;
    auto_t automobile;
    int input_status;

    input = fopen("C:\\automobile.txt", "r");

    input_status = scan_auto(input, &automobile);
    while (input_status != 0) {
        print_auto(&automobile);
        input_status = scan_auto(input, &automobile);
    }

    fclose(input);

    return (0);
}

int
scan_date(FILE *input, date_t *date)
{
    int input_status;

    input_status = fscanf(input, "%d%d%d", &date->day, &date->month,
                          &date->year);

    return (input_status == 3);
}

int
scan_tank(FILE *input, tank_t *tank)
{
    int input_status;

    input_status = fscanf(input, "%lf%lf", &tank->tank_capacity,
                          &tank->fuel_level);

    return (input_status == 2);
}

int
scan_auto(FILE *input, auto_t *automobile)
{
    int input_status;

    input_status = fscanf(input, "%s%s%d", automobile->make,
                          automobile->model, &automobile->odometer);

    input_status = (input_status == 3);

    input_status &= scan_date(input, &automobile->manufacture);
    input_status &= scan_date(input, &automobile->purchase);
    input_status &= scan_tank(input, &automobile->tank);

    return (input_status);
}


void
print_date(date_t *date)
{
    printf("%d/%d/%d\n", date->day, date->month, date->year);
}


void
print_tank(tank_t *tank)
{
    printf("  Tank capacity: %.2f L\n", tank->tank_capacity);
    printf("  Current fuel level: %.2f L\n", tank->fuel_level);
}

void
print_auto(auto_t *automobile)
{
    printf("\nBrand and model: %s %s\n", automobile->make, automobile->model);
    printf("Odometer reading: %d\n", automobile->odometer);
    printf("Manufacture date: ");
    print_date(&automobile->manufacture);
    printf("Purchase date: ");
    print_date(&automobile->purchase);
    printf("Gas tank:\n");
    print_tank(&automobile->tank);
    printf("\n");
}