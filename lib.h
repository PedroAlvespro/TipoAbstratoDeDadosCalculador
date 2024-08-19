
    //struct do tipo de dado a ser recebido
    typedef struct {
    float num1;
    float num2;
    }Dado;

    //função que chamara as outras
    void menu(int a);

    //assinatura das funcoes
     float soma(Dado * ponteiro);
     float diferenca(Dado * ponteiro);
     float divi(Dado * ponteiro);
     float mult(Dado * ponteiro);
