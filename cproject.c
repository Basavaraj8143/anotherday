#include <stdio.h>

int main()
{
    float meter, centimeter, kilometer, inr, doller, euro, kelvin, celcius, farenheat, n;
    int res, choice;

    printf("enter the conversion of unit \n");
    printf("1:temperature\n 2:currency\n 3:length\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\t\t\t*\n");
        printf("enter the value of parameter");
        scanf("%f", &n);
        printf("\t\t\t*\n");
        printf("1:Convert celcius to farenheat\n 2:convert farenheat to celcius\n 3:convert kelvin to celcius\n 4:convert celcius to kelvin\n 5:convert farenheat to kelvin\n 6:convert kelvin to farenheat");
        scanf("%d", &choice);
        printf("\t\t\t*\n");

        switch (choice)
        {
        case 1:
            res = (n * (9.0 / 5)) + 32;
            printf("%f celcius in farenheat is %f ", n, res);
            break;
        case 2:
            res = (n - 32) * (5.0 / 9);
            printf("%f farenheat in celcius is %f", n, res);
            break;
        case 3:
            res = n - 273.15;
            printf("%f kelvin in celcius is %f", n, res);
            break;
        case 4:
            res = n + 273.15;
            printf("%f celcious in kelvin is %f", n, res);
            break;
        case 5:
            res = (((n - 32) * 5) / 9) + 273.15;
            printf("%f farenheat in celcius is %f", n, res);
            break;
        case 6:
            res = ((n - 273.15) * 1.8) + 32;
            printf("%f in farenheat is %f", n, res);
            break;
        default:
            printf("invalid option ");
        }
        break;

    case 2:
        printf("\t\t\t*\n");
        printf("enter the value of parameter");
        scanf("%f", &n);
        printf("\t\t\t*\n");
        printf("1:Convert inr to doller\n 2:convert doller to inr\n 3:convert inr to euro\n 4:convert euro to inr\n 5:convert euro to doller\n 6:convert doller to euro");
        scanf("%d", &choice);
        printf("\t\t\t*\n");

        switch (choice)
        {
        case 1:
            res = (n * 83.29);
            printf("%f inr in doller is %f ", n, res);
            break;
        case 2:
            res = (n / 83.29);
            printf("%f doller in inr is %f", n, res);
            break;
        case 3:
            res = (n * 0.011);
            printf("%f inr in euro is %f ", n, res);
            break;
        case 4:
            res = (n / 0.011);
            printf("%f euro in inr is %f", n, res);
            break;
        case 5:
            res = (n / 1.09);
            printf("%f euro in doller is %f", n, res);
            break;
        case 6:
            res = (n * 1.09);
            printf("%f doller in euro is %f", n, res);
            break;
        default:
            printf("invalid option");
            break;
        }
        break;

    case 3:
        printf("\t\t\t*\n");
        printf("enter the value of parameter");
        scanf("%f", &n);
        printf("\t\t\t*\n");
        printf("1:convert meter to centimeter\n 2:convert centimeter to meter\n 3:convert centimeter to kilometer\n 4:convert kilometer to centimeter\n 5:convert meter to kilometer \n6:convert kilometer to meter");
        scanf("%d", &choice);
        printf("\t\t\t*\n");

        switch (choice)
        {
        case 1:
            res = n / 0.01;
            printf("%f meter in centimeter is %f", n, res);
            break;
        case 2:
            res = n * 0.01;
            printf("%f centimeter in meter is %f", n, res);
            break;
        case 3:
            res = n * 0.00001;
            printf("%f centimeter in kilometer is %f", n, res);
            break;
        case 4:
            res = n / 0.00001;
            printf("%f kilometer  in centimeter is %f", n, res);
            break;
        case 5:
            res = n / 1000;
            printf("%f meter in kilometer is %f", n, res);
            break;
        case 6:
            res = n * 1000;
            printf("%f kilometer in meter is %f", n, res);
            break;
        default:
            printf("invalid choice");
            break;
        }
     default:
        printf("invalid choice");
        break;
    }
    return 0;
}