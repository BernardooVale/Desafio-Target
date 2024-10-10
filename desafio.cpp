#include <iostream>
#include<string>

int questao1() {

    int indice = 13, soma = 0;

    for (int k = 0; k < indice; k++) 
        soma += k;

    return soma;
}

bool fibonacci(int num) {

    int total = 0, aux1 = 0, aux2 = 1;

    while (num > total) {
        total = aux1 + aux2;
        aux1 = aux2;
        aux2 = total;
    }
    return num == total;
}

void fat() {

    float sp = 67836.43, mg = 29229.88, rj = 36678.66, es = 27165.48, outros = 19849.53;
    float total = sp + mg + rj + es + outros;

    std::cout << "Percentural SP: " << (sp / total) * 100 << "%" << std::endl;
    std::cout << "Percentural RJ: " << (rj / total) * 100 << "%" << std::endl;
    std::cout << "Percentural MG: " << (mg / total) * 100 << "%" << std::endl;
    std::cout << "Percentural ES: " << (es / total) * 100 << "%" << std::endl;
    std::cout << "Percentural Outros: " << (outros / total) * 100 << "%" << std::endl;
}

void reverte() {

    std::string exemplo = "palindromo";
    char temp;

    std::cout << "String original: " << exemplo << std::endl;

    int posFim = exemplo.length() - 1;
    for (int i = 0; i < exemplo.length() / 2; i++) {
        temp = exemplo[i];
        exemplo[i] = exemplo[posFim];
        exemplo[posFim] = temp;
        posFim--;
    }

    std::cout << "String invertida: " << exemplo << std::endl;
}

int main(){
    
    int num = 0;

    //Questao 1
    std::cout << "Questao 1: " << questao1() << std::endl << std::endl;

    //Questao 2
    std::cout << "Questao 2: " << std::endl;
    std::cout << "Digite um numero para saber se pertence a Fibonacci" << std::endl;
    std::cin >> num;
    std::cout << (fibonacci(num) ? "Pertence" : "Nao pertence") << std::endl << std::endl;

    //Questao 3 esta no arquivo em Phyton, ja que c++ nao possui suporte para JSON nem XML e eu nao acho nescessario que se intale uma biblioteca apenas para isso
    std::cout << "Questao 3: Ver arquivo questao3.py" << std::endl << std::endl;

    //Questao 4
    std::cout << "Questao 4:" << std::endl;
    fat();
    std::cout << std::endl;

    //Questao 5
    std::cout << "Questao 5:" << std::endl;
    reverte();

    return 0;
}