#include <iostream>
#include <iomanip>    //Função setw
#include <clocale>    //Função setlocale
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

float multiplicar( float x, float y){
    return x*y;

}

float convpres(float pressao){       //Função para a conversão de Pressão

    int c, i, x;
    float vinicial, y, vfinal;
    x = 1;    //Variavel que apresenta as opções de conversão
    double vetor[] = {1, 14.233, 0.9807, 28.96, 393.83, 0.9678, 735, 10003, 98.0665,
    0.0703, 1, 0.0689, 2.036, 27.689, 0.068, 51.71, 70329, 6.895,
    1.0197, 14.504, 1, 29.53, 401.6, 0.98692, 750.06, 10200, 100,
    0.0345, 0.4911, 0.03386, 1, 13.599, 0.0334, 25.399, 345.40, 3.3863,
    0.002537, 0.03609, 0.00249, 0.07348, 1, 0.002456, 1.8665, 25.399, 0.24884,
    1.0332, 14.696, 1.0133, 29.921, 406.933, 1, 760.05, 10335, 101.325,
    0.00135, 0.019337, 0.00133, 0.03937, 0.5354, 0.001316, 1, 13.598, 0.13332,
    0.000099, 0.00142, 0.00098, 0.00289, 0.03937, 0.00009, 0.07353, 1, 0.0098,
    0.010197, 0.14504, 0.01, 0.29539, 4.0158, 0.009869, 7.50062, 101.998, 1};
    //Vetor que apresenta os valores de conversão

        {
        cout << string(115, '_') << endl;
        cout << "\n\n     Converter unidades de medida de Pressão" << endl;
        cout << "\n     Digite o número relacionado com a opção desejada:" << endl;
        cout << "\n     O valor da coluna vertical é a unidade inicial." << endl;
        cout << "\n     A coluna na horizontal apresenta a unidade desejada." << endl;
        cout << "\n\n            "  << setw(12) << "Kgf/cm^2 |" << setw(12)  << "Ibf/pol^2 |" << setw(12)  << "BAR |" << setw(12) << "Pol Hg |" << setw(12);
        cout << setw(12) << "Pol H2O |" << setw(12) << "ATM |" << setw(12)  << "mmHg |" << setw(12) << "mmH2O |" << setw(12) << "kpa |" << endl;
        cout << setw(12)<< "Kgf/cm^2 |";

        //PROFESSOR: Em um vetor teria sido interessante armazenar os nomes das unidades de medida, assim não seria necessário constar no código em vários lugares

        x = 1;
       for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(12)<< "Ibf/pol^2 |";
       for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(12)<< "BAR |";
       for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(12)<< "Pol Hg |";
       for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(12)<< "Pol H2O |";
        for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(12)<< "ATM |";
       for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(12)<< "mmHg |";
       for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(12)<< "mmH2O |";
       for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(12)<< "kpa |";
       for( i = 0; i < 9; i++){
            cout << setw(10) << x << " |";
            x++;}

        //PROFESSOR: A repetição do laço for foi desnecessária. Poderia ser apenas um para percorrer as unidades
        //num vetor e outro para fazer a impressão dos valores que estão em outro vetor

        cout << "\n\n\n     0. Retornar ao Menu Principal\n" << endl;
        cout << string(115, '_') << endl;
        cout << "\n     ";                                                       //As opções de conversão e calculos
        cin >> c;

        if( c == 0){
            system("cls");
            return 0;}

        y = vetor[c-1];

        if(pressao==NULL){
        cout <<"\n\n     Digite o valor inicial da conversão:\n\n     ";
        cin >> vinicial;}
        else
            vinicial=pressao;
        vfinal = multiplicar(vinicial,y);
        cout <<"\n\n     O valor da conversão é :\n\n     "<< vfinal << "\n\n     "<< endl;
        system("pause");

            system("cls");
            return 0;
        }

    //PROFESSOR: embora tenha ficado um código enxuto, dificulta a reutilização: exibição na tela está misturado
    //com o cálculo. Uma boa ideia seria separar o cálculo em funções reutilizáveis e a impressão na tela em outra função.
}

float convvaz(float vaz){       //Função para a conversão de Vazão

    int c, i, x;
    float vinicial, y, vfinal;
    x = 1;    //Variavel que apresenta as opções de conversão
    double vetor[] = {1, 0.016667, 0.00027778, 4.40287, 6.28982, 150.956, 35.314, 0.588579,
    60, 1, 0.016667, 2641721, 3773892, 9057.34, 2118.8802, 353147,
    3600, 60, 1, 15850.33, 22643.35, 543440.7, 127132.81, 2118.884,
    0.22712, 0.0037854, 0.00006309, 1, 1.42857, 34.2857, 8.0208, 0.13368,
    0.158987, 0.0026497, 0.000044161, 0.7, 1, 24, 5.614583, 0.0935763,
    0.0066245, 0.00011041, 0.00000184, 0.029167, 0.041667, 1, 0.23394, 0.0038990,
    0.0283168, 0.00047195, 0.0000078657, 0.124676, 0.178108, 4.2746, 1, 0.016667,
    1.69901, 0.028317, 0.00047195, 7.480519, 10.686, 256.476, 60, 1};
    //Vetor que apresenta os valores de conversão

    //PROFESSOR: Em um vetor teria sido interessante armazenar os nomes das unidades de medida, assim não seria necessário constar no código em vários lugares

        {
        cout << string(115, '_') << endl;
        cout << "\n\n     Converter unidades de medida de Vazão" << endl;
        cout << "\n     Digite o número relacionado com a opção desejada:" << endl;
        cout << "\n     O valor da coluna vertical é a unidade inicial." << endl;
        cout << "\n     A coluna na horizontal apresenta a unidade desejada." << endl;
        cout << "\n\n            "  << setw(12) << "m^3/h |" << setw(12)  << "m^3/min |" << setw(12)  << "m^3/s |" << setw(12) << "GPM |" << setw(12);
        cout << setw(12) << "BPH |" << setw(12) << "BPD |" << setw(12)  << "pé^3/h |" << setw(12) << "pé^3/min |" << endl;
        cout << setw(12)<< "m^3/h |";
        x = 1;
        for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(24)<< "m^3/min |";
       for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(24)<< "m^3/s |";
       for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(24)<< "GPM |";
       for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(24)<< "BPH |";
        for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(24)<< "BPD |";
       for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(24)<< "pé^3/h |";
       for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(24)<< "pé^3/min |";
       for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}

        //PROFESSOR: A repetição do laço for foi desnecessária. Poderia ser apenas um para percorrer as unidades
        //num vetor e outro para fazer a impressão dos valores que estão em outro vetor

        cout << "\n\n\n     0. Retornar ao Menu Principal\n" << endl;
        cout << string(115, '_') << endl;
        cout << "\n     ";                                                       //As opções de conversão e calculos
        cin >> c;

        if( c == 0){
            system("cls");
            return 0;}

        y = vetor[c-1];

        if(vaz==NULL){
        cout <<"\n\n     Digite o valor inicial da conversão:\n\n     ";
        cin >> vinicial;}
        else
            vinicial=vaz;
        vfinal = multiplicar(vinicial,y);
        cout <<"\n\n     O valor da conversão é :\n\n     "<< vfinal << "\n\n     "<< endl;
        system("pause");

            system("cls");
        }

        //PROFESSOR: embora tenha ficado um código enxuto, dificulta a reutilização: exibição na tela está misturado
        //com o cálculo. Uma boa ideia seria separar os cálculos em funções reutilizáveis e a impressão na tela em outra função.
}

float CalPress(int verificar){ //Função para cálculo da pressão estática

    float pressao, forca, area;
    int i;
    cout << string(115, '_') << endl;
    cout << "\n\n";
    cout << "     Digite o valor da força exercida: " << endl;
    cout << "\n     ";
    cin >> forca;
    cout << "\n     Forneça o valor da área em que a força irá atuar: " << endl;
    cout << "\n     ";
    cin >> area;

    pressao = forca/area;

    //PROFESSOR: Para favorecer a reutilização, uma boa ideia seria separar o cálculo da pressão em uma função reutilizável e a impressão na tela em outra função.
    //Além disso, há uma questão de validação aqui: se o usuário digitar uma área 0, vai dar erro de divisão por zero. Deveria validar a entrada.

    cout <<"\n     O valor da pressão é: \n\n     " << pressao << endl;

    if( verificar == 10){
        return pressao;
    }

    cout << "\n     Deseja converter o valor da Pressão? " << endl;
    cout << "\n     1. SIM \n\n     0. NÃO" << endl;
    cout << "\n     ";
    cin >> i;

    //PROFESSOR: Parabéns pela ideia, achei bacana a feature de permitir converter a saída. Muito útil!

    switch(i){

case 1:
    system("cls");
    convpres(pressao);
    break;

case 0:
    system("cls");
    break;
    }
}

void CalPressDin(){ //Função para cálculo da pressão dinâmica

    float Pressao, pre, volume;
    int i;

    cout << string(115, '_') << endl;
    cout << "\n\n     ";
    cout << "     Possui o valor da pressão estática?" << endl;
    cout << "\n     1. SIM \n\n     0. NÃO" << endl;
    cout << "\n     ";
    cin >> i;

    switch(i){
case 1:

    cout << "\n     Digite o valor da pressão estática:" << endl;
    cout << "\n     ";
    cin >> pre;
    break;

case 0:
    system("cls");
    pre = CalPress(10);

    }

    cout << "\n     Digite o valor do Volume: " << endl;
    cout << "\n     ";
    cin >> volume;

    Pressao = (pre*(pow(volume,2)))/2;

    //PROFESSOR: Para favorecer a reutilização, uma boa ideia seria separar o cálculo da pressão dinâmica em uma função reutilizável e a impressão na tela em outra função.

    cout <<"\n     O valor da Pressão Dinâmica é:\n\n     " << Pressao << endl;
    cout << "\n\n     ";
    system("pause");
    cout << string(115, '_') << endl;

    system("cls");
}

float CalVazVol( int verificar){ // Função para cálculo da vazão volumétrica

    float vazao, volume, tempo, velovazao, area;
    int i, j;

    cout << string(115, '_') << endl;


    cout << "\n\n     Informe como deseja calcular a Vazão Volumétrica:\n" << endl;
    cout << "     1. Para volume em razão do tempo.\n     " << endl;
    cout << "     2. Para velocidade da vazão multiplicada pela área da seção transversal." << endl;
    cout << "\n     ";
    cin >> i;

    switch(i){

     case 1:{
        cout << "\n\n     informe o valor do volume em metros cúbicos(m³): " << endl;
        cout << "\n     ";
        cin >> volume;
        cout << "\n     ";
        cout << "Informe o valor do tempo em segundos(s): " << endl;
        cout << "\n     ";
        cin >> tempo;

        vazao = volume/tempo;

        //PROFESSOR: Para favorecer a reutilização, uma boa ideia seria separar o cálculo da vazão em uma função reutilizável e a impressão na tela em outra função.
        //Uma outra questão aqui é que se o usuário fornecer o tempo = 0 vai dar erro de divisão por zero. É preciso validar!

        cout << "\n     O valor da vazão volumétrica é:\n\n     " << vazao << "m³/s " << endl;

        if( verificar == 10){
        return vazao;
    }

        cout << "\n\n     Deseja converter esse valor?" << endl;
        cout << "\n     1. SIM \n\n     0. NÃO" << endl;
        cout << "\n     ";
        cin >> j;

        switch(j){

case 1:
    system("cls");
    convvaz(vazao);
    break;

case 0:
    system("cls");
    break;
    }
    break;
}

case 2:{
        cout << string(115, '_') << endl;
        cout << "\n\n     informe a velocidade da vazão em m/s: " << endl;
        cout << "\n     ";
        cin >> velovazao;
        cout << "\n     ";
        cout << "Informe a área de seção transversal em m²: " << endl;
        cout << "\n     ";
        cin >> area;
        }

        vazao = velovazao*area;

        //PROFESSOR: Para favorecer a reutilização, uma boa ideia seria separar o cálculo da vazão em uma função reutilizável e a impressão na tela em outra função.

        cout << "\n     O valor da vazão volumétrica é:\n\n     " << vazao << "m³/s " << endl;

        if( verificar == 10){
        return vazao;
        }

        cout << "\n\n     Deseja converter esse valor?" << endl;
        cout << "\n     1. SIM \n\n     0. NÃO" << endl;
        cout << "\n     ";
        cin >> j;

        switch(j){

case 1:
    system("cls");
    convvaz(vazao);
    break;

case 0:
    system("cls");
    break;
    }

        cout << string(115, '_') << endl;
        system("pause");
        system("cls");
        break;
    }
}

    void CalVazMass (){ // Função para cálculo da vazão mássica

    float vazao, massa, tempo, densidade, vazvol;
    int i, j;

    cout << string(115, '_') << endl;


    cout << "\n     Informe como deseja calcular a Vazão Mássica:\n" << endl;
    cout << "     1. Para massa em razão do tempo.\n     " << endl;
    cout << "     2. Para produto da vazão volumétrica pela densidade." << endl;
    cout << "\n     ";
    cin >> i;

    switch(i){

     case 1:
        cout << "\n\n     informe o valor da massa em kilogramas(kg): " << endl;
        cout << "\n     ";
        cin >> massa;
        cout << "\n     ";
        cout << "Informe o valor do tempo em segundos(s): " << endl;
        cout << "\n     ";
        cin >> tempo;

        vazao = massa/tempo;

        //PROFESSOR: Para favorecer a reutilização, uma boa ideia seria separar o cálculo da vazão em uma função reutilizável e a impressão na tela em outra função.
        //Mesma questão aqui sobre divisão por zero.

        cout << "\n     O valor da vazão mássica é:\n\n     " << vazao << "kg/s \n\n" << endl;

        system("pause");
        break;

     case 2:
        cout << "\n     ";
        cout << "Possui o valor da vazão volumetrica?" << endl;
        cout << "\n     1. SIM \n\n     0. NÃO" << endl;
        cout << "\n     ";
        cin >> j;

    switch(j){
case 1:

    cout << "\n     Digite o valor da vazão volumétrica:" << endl;
    cout << "\n     ";
    cin >> vazvol;
    break;

case 0:
    system("cls");
    vazvol = CalVazVol(10);
    }

    cout << "\n     Digite o valor da densidade em (kg/m³): " << endl;
    cout << "\n     ";
    cin >> densidade;

    vazao = vazvol*densidade;

    //PROFESSOR: Mesma questão aqui sobre reutilização!

    cout <<"\n     O valor da Vazão Mássica é:\n\n     " << vazao << "kg/s " << endl;
    cout << "\n\n     ";
    system("pause");
    cout << string(115, '_') << endl;

    system("cls");
    }

    }

int main()
 {
    int a, b;
    setlocale(LC_ALL, ""); //Função de permite a impressão de carcteres especiais

    //PROFESSOR: Achei bacana a preocupação com a usabilidade e a localização (uso de caracteres especiais)!

    do{
        cout << string(115, '_') << endl;
        cout << "\n\n     Adams Siderúrgica S/A" << endl;
        cout << "\n\n     Digite o número relacionado com a opção desejada:" << endl;
        cout << "\n     1. Converter unidades de medida de Pressão" << endl;
        cout << "\n     2. Converter unidades de medida de Vazão Volumétrica" << endl;
        cout << "\n     3. Calcular Pressão" << endl;
        cout << "\n     4. Calcular Pressão Dinâmica" << endl;
        cout << "\n     5. Calcular Vazão Volumétrica" << endl;
        cout << "\n     6. Calcular Vazão Mássica" << endl;                                      //Menu Inicial
        cout << "\n     0. Sair do programa\n" << endl;
        cout << string(115, '_') << endl;
        cout << "\n     ";                                                       //As opções de conversão e calculos
        cin >> a;
        /*calcular a pressão, a pressão dinâmica,
        fazer a conversão de unidades de pressão,
        calcular a vazão volumétrica, a vazão mássica e
        fazer a conversão das unidades de vazão volumétrica.*/

        system("cls");

        switch(a){
        case 1:
            convpres(NULL);

            break;

        case 2:
            convvaz(NULL);

            break;

        case 3:
            CalPress(NULL);

            break;

        case 4:
            CalPressDin();

            break;

        case 5:
            CalVazVol(NULL);

            break;

        case 6:
            CalVazMass();

            break;

        }

    }while( a != 0);

    return 0;
}
