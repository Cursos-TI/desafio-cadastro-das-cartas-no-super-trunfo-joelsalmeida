#include <stdio.h>

// Desafio Super Trunfo - Países

int main()
{
    char stateCode;
    int cityCode;
    char cityName[50];
    int population;
    float area;
    float grossDomesticProduct;
    int numberOfTouristAttractions;

    char stateCodeTwo;
    int cityCodeTwo;
    char cityNameTwo[50];
    int populationTwo;
    float areaTwo;
    float grossDomesticProductTwo;
    int numberOfTouristAttractionsTwo;

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
    scanf("%d", &population);

    printf("Digite a área da cidade (em km², ex: 1521.11): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões, ex: 699.28): ");
    scanf("%f", &grossDomesticProduct);

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
    scanf("%d", &populationTwo);

    printf("Digite a área da cidade (em km², ex: 1521.11): ");
    scanf("%f", &areaTwo);

    printf("Digite o PIB da cidade (em bilhões, ex: 699.28): ");
    scanf("%f", &grossDomesticProductTwo);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numberOfTouristAttractionsTwo);
    printf("%s", SEPARATOR);

    // FIRST CARD OUTPUT
    printf("Carta I \n");
    printf("Estado: %c \n", stateCode);
    printf("Código: %c%d \n", stateCode, cityCode);
    printf("Nome da Cidade: %s \n", cityName);
    printf("População: %i \n", population);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", grossDomesticProduct);
    printf("Número de Pontos Turísticos: %i \n", numberOfTouristAttractions);
    printf("%s", SEPARATOR);

    // SECOND CARD OUTPUT
    printf("Carta II \n");
    printf("Estado: %c \n", stateCodeTwo);
    printf("Código: %c%d \n", stateCodeTwo, cityCodeTwo);
    printf("Nome da Cidade: %s \n", cityNameTwo);
    printf("População: %i \n", populationTwo);
    printf("Área: %.2f km² \n", areaTwo);
    printf("PIB: %.2f bilhões de reais \n", grossDomesticProductTwo);
    printf("Número de Pontos Turísticos: %i \n", numberOfTouristAttractionsTwo);
    printf("%s", SEPARATOR);

    return 0;
}
