#include <iostream>
#include <iomanip>    //Fun��o setw
#include <clocale>    //Fun��o setlocale
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

float multiplicar( float x, float y){
    return x*y;

}

float convpres(float pressao){       //Fun��o para a convers�o de Press�o

    int c, i, x;
    float vinicial, y, vfinal;
    x = 1;    //Variavel que apresenta as op��es de convers�o
    double vetor[] = {1, 14.233, 0.9807, 28.96, 393.83, 0.9678, 735, 10003, 98.0665,
    0.0703, 1, 0.0689, 2.036, 27.689, 0.068, 51.71, 70329, 6.895,
    1.0197, 14.504, 1, 29.53, 401.6, 0.98692, 750.06, 10200, 100,
    0.0345, 0.4911, 0.03386, 1, 13.599, 0.0334, 25.399, 345.40, 3.3863,
    0.002537, 0.03609, 0.00249, 0.07348, 1, 0.002456, 1.8665, 25.399, 0.24884,
    1.0332, 14.696, 1.0133, 29.921, 406.933, 1, 760.05, 10335, 101.325,
    0.00135, 0.019337, 0.00133, 0.03937, 0.5354, 0.001316, 1, 13.598, 0.13332,
    0.000099, 0.00142, 0.00098, 0.00289, 0.03937, 0.00009, 0.07353, 1, 0.0098,
    0.010197, 0.14504, 0.01, 0.29539, 4.0158, 0.009869, 7.50062, 101.998, 1};
    //Vetor que apresenta os valores de convers�o

        {
        cout << string(115, '_') << endl;
        cout << "\n\n     Converter unidades de medida de Press�o" << endl;
        cout << "\n     Digite o n�mero relacionado com a op��o desejada:" << endl;
        cout << "\n     O valor da coluna vertical � a unidade inicial." << endl;
        cout << "\n     A coluna na horizontal apresenta a unidade desejada." << endl;
        cout << "\n\n            "  << setw(12) << "Kgf/cm^2 |" << setw(12)  << "Ibf/pol^2 |" << setw(12)  << "BAR |" << setw(12) << "Pol Hg |" << setw(12);
        cout << setw(12) << "Pol H2O |" << setw(12) << "ATM |" << setw(12)  << "mmHg |" << setw(12) << "mmH2O |" << setw(12) << "kpa |" << endl;
        cout << setw(12)<< "Kgf/cm^2 |";

        //PROFESSOR: Em um vetor teria sido interessante armazenar os nomes das unidades de medida, assim n�o seria necess�rio constar no c�digo em v�rios lugares

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

        //PROFESSOR: A repeti��o do la�o for foi desnecess�ria. Poderia ser apenas um para percorrer as unidades
        //num vetor e outro para fazer a impress�o dos valores que est�o em outro vetor

        cout << "\n\n\n     0. Retornar ao Menu Principal\n" << endl;
        cout << string(115, '_') << endl;
        cout << "\n     ";                                                       //As op��es de convers�o e calculos
        cin >> c;

        if( c == 0){
            system("cls");
            return 0;}

        y = vetor[c-1];

        if(pressao==NULL){
        cout <<"\n\n     Digite o valor inicial da convers�o:\n\n     ";
        cin >> vinicial;}
        else
            vinicial=pressao;
        vfinal = multiplicar(vinicial,y);
        cout <<"\n\n     O valor da convers�o � :\n\n     "<< vfinal << "\n\n     "<< endl;
        system("pause");

            system("cls");
            return 0;
        }

    //PROFESSOR: embora tenha ficado um c�digo enxuto, dificulta a reutiliza��o: exibi��o na tela est� misturado
    //com o c�lculo. Uma boa ideia seria separar o c�lculo em fun��es reutiliz�veis e a impress�o na tela em outra fun��o.
}

float convvaz(float vaz){       //Fun��o para a convers�o de Vaz�o

    int c, i, x;
    float vinicial, y, vfinal;
    x = 1;    //Variavel que apresenta as op��es de convers�o
    double vetor[] = {1, 0.016667, 0.00027778, 4.40287, 6.28982, 150.956, 35.314, 0.588579,
    60, 1, 0.016667, 2641721, 3773892, 9057.34, 2118.8802, 353147,
    3600, 60, 1, 15850.33, 22643.35, 543440.7, 127132.81, 2118.884,
    0.22712, 0.0037854, 0.00006309, 1, 1.42857, 34.2857, 8.0208, 0.13368,
    0.158987, 0.0026497, 0.000044161, 0.7, 1, 24, 5.614583, 0.0935763,
    0.0066245, 0.00011041, 0.00000184, 0.029167, 0.041667, 1, 0.23394, 0.0038990,
    0.0283168, 0.00047195, 0.0000078657, 0.124676, 0.178108, 4.2746, 1, 0.016667,
    1.69901, 0.028317, 0.00047195, 7.480519, 10.686, 256.476, 60, 1};
    //Vetor que apresenta os valores de convers�o

    //PROFESSOR: Em um vetor teria sido interessante armazenar os nomes das unidades de medida, assim n�o seria necess�rio constar no c�digo em v�rios lugares

        {
        cout << string(115, '_') << endl;
        cout << "\n\n     Converter unidades de medida de Vaz�o" << endl;
        cout << "\n     Digite o n�mero relacionado com a op��o desejada:" << endl;
        cout << "\n     O valor da coluna vertical � a unidade inicial." << endl;
        cout << "\n     A coluna na horizontal apresenta a unidade desejada." << endl;
        cout << "\n\n            "  << setw(12) << "m^3/h |" << setw(12)  << "m^3/min |" << setw(12)  << "m^3/s |" << setw(12) << "GPM |" << setw(12);
        cout << setw(12) << "BPH |" << setw(12) << "BPD |" << setw(12)  << "p�^3/h |" << setw(12) << "p�^3/min |" << endl;
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
       cout << setw(24)<< "p�^3/h |";
       for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}
       cout << setw(24)<< "p�^3/min |";
       for( i = 0; i < 8; i++){
            cout << setw(10) << x << " |";
            x++;}

        //PROFESSOR: A repeti��o do la�o for foi desnecess�ria. Poderia ser apenas um para percorrer as unidades
        //num vetor e outro para fazer a impress�o dos valores que est�o em outro vetor

        cout << "\n\n\n     0. Retornar ao Menu Principal\n" << endl;
        cout << string(115, '_') << endl;
        cout << "\n     ";                                                       //As op��es de convers�o e calculos
        cin >> c;

        if( c == 0){
            system("cls");
            return 0;}

        y = vetor[c-1];

        if(vaz==NULL){
        cout <<"\n\n     Digite o valor inicial da convers�o:\n\n     ";
        cin >> vinicial;}
        else
            vinicial=vaz;
        vfinal = multiplicar(vinicial,y);
        cout <<"\n\n     O valor da convers�o � :\n\n     "<< vfinal << "\n\n     "<< endl;
        system("pause");

            system("cls");
        }

        //PROFESSOR: embora tenha ficado um c�digo enxuto, dificulta a reutiliza��o: exibi��o na tela est� misturado
        //com o c�lculo. Uma boa ideia seria separar os c�lculos em fun��es reutiliz�veis e a impress�o na tela em outra fun��o.
}

float CalPress(int verificar){ //Fun��o para c�lculo da press�o est�tica

    float pressao, forca, area;
    int i;
    cout << string(115, '_') << endl;
    cout << "\n\n";
    cout << "     Digite o valor da for�a exercida: " << endl;
    cout << "\n     ";
    cin >> forca;
    cout << "\n     Forne�a o valor da �rea em que a for�a ir� atuar: " << endl;
    cout << "\n     ";
    cin >> area;

    pressao = forca/area;

    //PROFESSOR: Para favorecer a reutiliza��o, uma boa ideia seria separar o c�lculo da press�o em uma fun��o reutiliz�vel e a impress�o na tela em outra fun��o.
    //Al�m disso, h� uma quest�o de valida��o aqui: se o usu�rio digitar uma �rea 0, vai dar erro de divis�o por zero. Deveria validar a entrada.

    cout <<"\n     O valor da press�o �: \n\n     " << pressao << endl;

    if( verificar == 10){
        return pressao;
    }

    cout << "\n     Deseja converter o valor da Press�o? " << endl;
    cout << "\n     1. SIM \n\n     0. N�O" << endl;
    cout << "\n     ";
    cin >> i;

    //PROFESSOR: Parab�ns pela ideia, achei bacana a feature de permitir converter a sa�da. Muito �til!

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

void CalPressDin(){ //Fun��o para c�lculo da press�o din�mica

    float Pressao, pre, volume;
    int i;

    cout << string(115, '_') << endl;
    cout << "\n\n     ";
    cout << "     Possui o valor da press�o est�tica?" << endl;
    cout << "\n     1. SIM \n\n     0. N�O" << endl;
    cout << "\n     ";
    cin >> i;

    switch(i){
case 1:

    cout << "\n     Digite o valor da press�o est�tica:" << endl;
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

    //PROFESSOR: Para favorecer a reutiliza��o, uma boa ideia seria separar o c�lculo da press�o din�mica em uma fun��o reutiliz�vel e a impress�o na tela em outra fun��o.

    cout <<"\n     O valor da Press�o Din�mica �:\n\n     " << Pressao << endl;
    cout << "\n\n     ";
    system("pause");
    cout << string(115, '_') << endl;

    system("cls");
}

float CalVazVol( int verificar){ // Fun��o para c�lculo da vaz�o volum�trica

    float vazao, volume, tempo, velovazao, area;
    int i, j;

    cout << string(115, '_') << endl;


    cout << "\n\n     Informe como deseja calcular a Vaz�o Volum�trica:\n" << endl;
    cout << "     1. Para volume em raz�o do tempo.\n     " << endl;
    cout << "     2. Para velocidade da vaz�o multiplicada pela �rea da se��o transversal." << endl;
    cout << "\n     ";
    cin >> i;

    switch(i){

     case 1:{
        cout << "\n\n     informe o valor do volume em metros c�bicos(m�): " << endl;
        cout << "\n     ";
        cin >> volume;
        cout << "\n     ";
        cout << "Informe o valor do tempo em segundos(s): " << endl;
        cout << "\n     ";
        cin >> tempo;

        vazao = volume/tempo;

        //PROFESSOR: Para favorecer a reutiliza��o, uma boa ideia seria separar o c�lculo da vaz�o em uma fun��o reutiliz�vel e a impress�o na tela em outra fun��o.
        //Uma outra quest�o aqui � que se o usu�rio fornecer o tempo = 0 vai dar erro de divis�o por zero. � preciso validar!

        cout << "\n     O valor da vaz�o volum�trica �:\n\n     " << vazao << "m�/s " << endl;

        if( verificar == 10){
        return vazao;
    }

        cout << "\n\n     Deseja converter esse valor?" << endl;
        cout << "\n     1. SIM \n\n     0. N�O" << endl;
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
        cout << "\n\n     informe a velocidade da vaz�o em m/s: " << endl;
        cout << "\n     ";
        cin >> velovazao;
        cout << "\n     ";
        cout << "Informe a �rea de se��o transversal em m�: " << endl;
        cout << "\n     ";
        cin >> area;
        }

        vazao = velovazao*area;

        //PROFESSOR: Para favorecer a reutiliza��o, uma boa ideia seria separar o c�lculo da vaz�o em uma fun��o reutiliz�vel e a impress�o na tela em outra fun��o.

        cout << "\n     O valor da vaz�o volum�trica �:\n\n     " << vazao << "m�/s " << endl;

        if( verificar == 10){
        return vazao;
        }

        cout << "\n\n     Deseja converter esse valor?" << endl;
        cout << "\n     1. SIM \n\n     0. N�O" << endl;
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

    void CalVazMass (){ // Fun��o para c�lculo da vaz�o m�ssica

    float vazao, massa, tempo, densidade, vazvol;
    int i, j;

    cout << string(115, '_') << endl;


    cout << "\n     Informe como deseja calcular a Vaz�o M�ssica:\n" << endl;
    cout << "     1. Para massa em raz�o do tempo.\n     " << endl;
    cout << "     2. Para produto da vaz�o volum�trica pela densidade." << endl;
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

        //PROFESSOR: Para favorecer a reutiliza��o, uma boa ideia seria separar o c�lculo da vaz�o em uma fun��o reutiliz�vel e a impress�o na tela em outra fun��o.
        //Mesma quest�o aqui sobre divis�o por zero.

        cout << "\n     O valor da vaz�o m�ssica �:\n\n     " << vazao << "kg/s \n\n" << endl;

        system("pause");
        break;

     case 2:
        cout << "\n     ";
        cout << "Possui o valor da vaz�o volumetrica?" << endl;
        cout << "\n     1. SIM \n\n     0. N�O" << endl;
        cout << "\n     ";
        cin >> j;

    switch(j){
case 1:

    cout << "\n     Digite o valor da vaz�o volum�trica:" << endl;
    cout << "\n     ";
    cin >> vazvol;
    break;

case 0:
    system("cls");
    vazvol = CalVazVol(10);
    }

    cout << "\n     Digite o valor da densidade em (kg/m�): " << endl;
    cout << "\n     ";
    cin >> densidade;

    vazao = vazvol*densidade;

    //PROFESSOR: Mesma quest�o aqui sobre reutiliza��o!

    cout <<"\n     O valor da Vaz�o M�ssica �:\n\n     " << vazao << "kg/s " << endl;
    cout << "\n\n     ";
    system("pause");
    cout << string(115, '_') << endl;

    system("cls");
    }

    }

int main()
 {
    int a, b;
    setlocale(LC_ALL, ""); //Fun��o de permite a impress�o de carcteres especiais

    //PROFESSOR: Achei bacana a preocupa��o com a usabilidade e a localiza��o (uso de caracteres especiais)!

    do{
        cout << string(115, '_') << endl;
        cout << "\n\n     Adams Sider�rgica S/A" << endl;
        cout << "\n\n     Digite o n�mero relacionado com a op��o desejada:" << endl;
        cout << "\n     1. Converter unidades de medida de Press�o" << endl;
        cout << "\n     2. Converter unidades de medida de Vaz�o Volum�trica" << endl;
        cout << "\n     3. Calcular Press�o" << endl;
        cout << "\n     4. Calcular Press�o Din�mica" << endl;
        cout << "\n     5. Calcular Vaz�o Volum�trica" << endl;
        cout << "\n     6. Calcular Vaz�o M�ssica" << endl;                                      //Menu Inicial
        cout << "\n     0. Sair do programa\n" << endl;
        cout << string(115, '_') << endl;
        cout << "\n     ";                                                       //As op��es de convers�o e calculos
        cin >> a;
        /*calcular a press�o, a press�o din�mica,
        fazer a convers�o de unidades de press�o,
        calcular a vaz�o volum�trica, a vaz�o m�ssica e
        fazer a convers�o das unidades de vaz�o volum�trica.*/

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
