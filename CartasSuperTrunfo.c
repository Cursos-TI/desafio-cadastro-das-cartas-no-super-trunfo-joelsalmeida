#include <stdio.h>

// Desafio Super Trunfo - Países

int main()
{
    char stateCode;
    int cityCode;
    char cityName[50];
    unsigned long int population;
    float area;
    double grossDomesticProduct;
    int numberOfTouristAttractions;
    float populationDensity;
    float gdpPerCapita;
    unsigned long int superPower;

    char stateCodeTwo;
    int cityCodeTwo;
    char cityNameTwo[50];
    unsigned long int populationTwo;
    float areaTwo;
    double grossDomesticProductTwo;
    int numberOfTouristAttractionsTwo;
    float populationDensityTwo;
    float gdpPerCapitaTwo;
    unsigned long int superPowerTwo;

    const char SEPARATOR[] = "\n-------------------------------------------------------\n\n";

    // FIRST CARD IPUT
    printf("CADASTRO CARTA I \n");
    printf("Digite o código do estado (ex: A, B, C): ");
    scanf(" %c", &stateCode);

    printf("Digite o código da cidade (ex: 11): ");
    scanf("%d", &cityCode);

    printf("Digite o nome da cidade: ");
    scanf(" %49s", cityName);

    printf("Digite a população da cidade (ex: 789654): ");
    scanf("%lu", &population);

    printf("Digite a área da cidade (em km², ex: 1521.11): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (ex: 699.28): ");
    scanf("%lf", &grossDomesticProduct);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numberOfTouristAttractions);
    printf("%s", SEPARATOR);

    // SECOND CARD INPUT
    printf("CADASTRO CARTA II \n");
    printf("Digite o código do estado (ex: A, B, C): ");
    scanf(" %c", &stateCodeTwo);

    printf("Digite o código da cidade (ex: 11): ");
    scanf("%d", &cityCodeTwo);

    printf("Digite o nome da cidade: ");
    scanf(" %49s", cityNameTwo);

    printf("Digite a população da cidade (ex: 789654): ");
    scanf("%lu", &populationTwo);

    printf("Digite a área da cidade (em km², ex: 1521.11): ");
    scanf("%f", &areaTwo);

    printf("Digite o PIB da cidade (ex: 699.28): ");
    scanf("%lf", &grossDomesticProductTwo);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numberOfTouristAttractionsTwo);
    printf("%s", SEPARATOR);

    // CALCULATIONS FOR POPULATION DENSITY AND GDP PER CAPITA AND SUPER POWER
    populationDensity = (float)population / area;
    populationDensityTwo = (float)populationTwo / areaTwo;
    gdpPerCapita = (float)grossDomesticProduct / population;
    gdpPerCapitaTwo = (float)grossDomesticProductTwo / populationTwo;

    float invertedPopulationDensity = 1 / populationDensity;
    float invertedPopulationDensityTwo = 1 / populationDensityTwo;
    superPower = (unsigned long int)(population + area + grossDomesticProduct + numberOfTouristAttractions + gdpPerCapita + invertedPopulationDensity);
    superPowerTwo = (unsigned long int)(populationTwo + areaTwo + grossDomesticProductTwo + numberOfTouristAttractionsTwo + gdpPerCapitaTwo + invertedPopulationDensityTwo);

    // FIRST CARD OUTPUT
    printf("Carta I \n");
    printf("Estado: %c \n", stateCode);
    printf("Código: %c%d \n", stateCode, cityCode);
    printf("Nome da Cidade: %s \n", cityName);
    printf("População: %lu \n", population);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f de reais \n", grossDomesticProduct);
    printf("Número de Pontos Turísticos: %i \n", numberOfTouristAttractions);
    printf("Densidade Populacional: %.2f hab/km² \n", populationDensity);
    printf("PIB per Capita: %.2f reais \n", gdpPerCapita);
    printf("Super Poder: %lu \n", superPower);
    printf("%s", SEPARATOR);

    // SECOND CARD OUTPUT
    printf("Carta II \n");
    printf("Estado: %c \n", stateCodeTwo);
    printf("Código: %c%d \n", stateCodeTwo, cityCodeTwo);
    printf("Nome da Cidade: %s \n", cityNameTwo);
    printf("População: %lu \n", populationTwo);
    printf("Área: %.2f km² \n", areaTwo);
    printf("PIB: %.2f de reais \n", grossDomesticProductTwo);
    printf("Número de Pontos Turísticos: %i \n", numberOfTouristAttractionsTwo);
    printf("Densidade Populacional: %.2f hab/km² \n", populationDensityTwo);
    printf("PIB per Capita: %.2f reais \n", gdpPerCapitaTwo);
    printf("Super Poder: %lu \n", superPowerTwo);
    printf("%s", SEPARATOR);

    // CARDS COMPARISON
    int populationComparison = population > populationTwo;
    int areaComparison = area > areaTwo;
    int grossDomesticProductComparison = grossDomesticProduct > grossDomesticProductTwo;
    int numberOfTouristAttractionsComparison = numberOfTouristAttractions > numberOfTouristAttractionsTwo;
    int populationDensityComparison = populationDensity < populationDensityTwo;
    int gdpPerCapitaComparison = gdpPerCapita > gdpPerCapitaTwo;
    int superPowerComparison = superPower > superPowerTwo;

    int populationWinner = populationComparison ? 1 : 2;
    int areaWinner = areaComparison ? 1 : 2;
    int gdpWinner = grossDomesticProductComparison ? 1 : 2;
    int touristAttractionsWinner = numberOfTouristAttractionsComparison ? 1 : 2;
    int populationDensityWinner = populationDensityComparison ? 1 : 2;
    int gdpPerCapitaWinner = gdpPerCapitaComparison ? 1 : 2;
    int superPowerWinner = superPowerComparison ? 1 : 2;

    // CARDS COMPARISON OUTPUT
    printf("##### COMPARAÇÃO ENTRE CARTAS ##### \n\n");
    printf("População: Carta %d venceu (%d) \n", populationWinner, populationComparison);
    printf("Área: Carta %d venceu (%d) \n", areaWinner, areaComparison);
    printf("PIB: Carta %d venceu (%d) \n", gdpWinner, grossDomesticProductComparison);
    printf("Número de Pontos Turísticos: Carta %d venceu (%d) \n", touristAttractionsWinner, numberOfTouristAttractionsComparison);
    printf("Densidade Populacional: Carta %d venceu (%d) \n", populationDensityWinner, populationDensityComparison);
    printf("PIB per Capita: Carta %d venceu (%d) \n", gdpPerCapitaWinner, gdpPerCapitaComparison);
    printf("Super Poder: Carta %d venceu (%d) \n", superPowerWinner, superPowerComparison);
    printf("%s", SEPARATOR);

    return 0;
}
