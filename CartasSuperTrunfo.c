#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Dados da primeira cidade

    char state_01;
    char city_code_01[5];
    char city_name_01[20];
    unsigned long int population_01 = 0;
    float area_01 = 0.0;
    float pib_01 = 0.0;
    int number_of_tourist_attractions_01 = 0;
    float population_density_01 = 0.0;
    float gdp_per_percapit_01 = 0.0;

    // Dados da segunda cidade
    char state_02;
    char city_code_02[5];
    char city_name_02[20];
    unsigned long int population_02 = 0;
    float area_02 = 0;
    float pib_02 = 0;
    int number_of_tourist_attractions_02 = 0;
    float population_density_02 = 0.0;
    float gdp_per_percapit_02 = 0.0;

    // Leitura dos dados da primeira cidade
    printf("---------------------------------------\n");
    printf("= Digite os dados da primeira cidade =\n");
    printf("Digite o estado da cidade:");
    scanf(" %c", &state_01);
    printf("Digite o código da cidade:");
    scanf("%s", city_code_01);
    printf("Digite o nome da cidade:");
    scanf("%s", city_name_01);
    printf("Digite a população da cidade:");
    scanf("%lu", &population_01);
    printf("Digite a area da cidade:");
    scanf("%f", &area_01);
    printf("Digite o pib da cidade:");
    scanf("%f", &pib_01);
    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%i", &number_of_tourist_attractions_01);


    // Leitura dos dados da segunda cidade
    printf("---------------------------------------\n");
    printf("= Digite os dados da segunda cidade =\n");
    printf("Digite o estado da cidade:");
    scanf(" %c", &state_02);
    printf("Digite o código da cidade:");
    scanf("%s", city_code_02);
    printf("Digite o nome da cidade:");
    scanf("%s", city_name_02);
    printf("Digite a população da cidade:");
    scanf("%lu", &population_02);
    printf("Digite a area da cidade:");
    scanf("%f", &area_02);
    printf("Digite o pib da cidade:");
    scanf("%f", &pib_02);
    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%i", &number_of_tourist_attractions_02);


    // Calculando valores de Densidade Populacional e PIB per Capita da primeira cidade
    population_density_01 = (float) population_01 / area_01;
    gdp_per_percapit_01 = pib_01 / (float) population_01;

    // Calculando valores de Densidade Populacional e PIB per Capita da segunda cidade
    population_density_02 = (float) population_02 / area_02;
    gdp_per_percapit_02 = pib_02 / (float) population_02;


    // Exibindo informaçãoes da primeira cidade
    printf("---------------------------------------\n");
    printf("Exibindo dados da cidade código [%s]\n", city_code_01);
    printf("\tEstado: %c\n", state_01);
    printf("\tNome: %s\n", city_name_01);
    printf("\tPopulação: %lu\n", population_01);
    printf("\tArea: %.2f\n", area_01);
    printf("\tPIB: %.2f\n", pib_01);
    printf("\tNúmero de pontos turisticos: %i\n", number_of_tourist_attractions_01);
    printf("\tDensidade Populacional: %.2f\n", population_density_01);
    printf("\tPIB per Capita: %.2f\n", gdp_per_percapit_01);

    
    // Exibindo informaçãoes da segunda cidade
    printf("-------------\n");
    printf("Exibindo dados da cidade código [%s]\n", city_code_02);
    printf("\tEstado: %c\n", state_02);
    printf("\tNome: %s\n", city_name_02);
    printf("\tPopulação: %lu\n", population_02);
    printf("\tArea: %.2f\n", area_02);
    printf("\tPIB: %.2f\n", pib_02);
    printf("\tNúmero de pontos turisticos: %i\n", number_of_tourist_attractions_02);
    printf("\tDensidade Populacional: %.2f\n", population_density_02);
    printf("\tPIB per Capita: %.2f\n", gdp_per_percapit_02);


    printf("-------------\n");
    printf("Comparação de Cartas:\n");

    printf("\tPopulação:");
    printf("A Carta venceu: (%i)\n", population_01 > population_02);

    printf("\tArea:");
    printf("A Carta venceu: (%i)\n", area_01 > area_02);

    printf("\tPIB:");
    printf("A Carta venceu: (%i)\n", pib_01 > pib_02);

    printf("\tNúmero de pontos turisticos:");
    printf("A Carta venceu: (%i)\n", number_of_tourist_attractions_01 > number_of_tourist_attractions_02);

    printf("\tDensidade Populacional:");
    printf("A Carta venceu: (%i)\n", population_density_01 < population_density_02);

    printf("\tPIB per Capita:");
    printf("A Carta venceu: (%i)\n", gdp_per_percapit_01 > gdp_per_percapit_02);

    double superpower_01 = population_01 + area_01 + pib_01 + number_of_tourist_attractions_01 + (1/population_density_01) + gdp_per_percapit_01;
    double superpower_02 = population_01 + area_01 + pib_01 + number_of_tourist_attractions_01 + (1/population_density_01) + gdp_per_percapit_01;
    printf("\tSuperpoder:");
    printf("A Carta venceu: (%i)\n", superpower_01 > superpower_02);


    return 0;
}
