#include <stdio.h>

int main()
{
    char labName[50];
    int computers, devices, tools;
    float computerCost, deviceCost, softwareCost;
    float totalComputerCost, totalNetworkCost, totalInvestment;

    printf("Enter lab name: ");
    scanf("%s", labName);

    printf("Enter number of computers: ");
    scanf("%d", &computers);

    printf("Enter number of network devices: ");
    scanf("%d", &devices);

    printf("Enter number of security tools: ");
    scanf("%d", &tools);

    printf("Enter cost per computer: ");
    scanf("%f", &computerCost);

    printf("Enter cost per network device: ");
    scanf("%f", &deviceCost);

    printf("Enter annual software cost: ");
    scanf("%f", &softwareCost);

    totalComputerCost = computers * computerCost;
    totalNetworkCost = devices * deviceCost;
    totalInvestment = totalComputerCost + totalNetworkCost + softwareCost;

    printf("\n========================================\n");
    printf("CYBERSECURITY LAB REPORT\n");
    printf("========================================\n");

    printf("Lab Name : %s\n", labName);
    printf("Computers : %d\n", computers);
    printf("Network Devices : %d\n", devices);
    printf("Security Tools : %d\n", tools);
    printf("Computer Cost : %.2f\n", totalComputerCost);
    printf("Network Device Cost : %.2f\n", totalNetworkCost);
    printf("Software Cost : %.2f\n", softwareCost);

    printf("----------------------------------------\n");
    printf("Total Lab Investment : %.2f\n", totalInvestment);
    printf("----------------------------------------\n");
    printf("========================================\n");

    return 0;
}