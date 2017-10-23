//Exercício
//Implementar uma calculadora usando ponteiro

void lerValor(int * intPointer){
     scanf("%i", intPointer);
}

void somar(int * pa, int * pb, int * pResult) {
     *pResult = *pa + *pb;
}

int main(){
    int a;
    int b;
    int resultado;
    lerValor(&a);
    lerValor(&b);
    somar(&a, &b, &resultado);
    printf("Resultado: %i\n", resultado);
    system("pause");
}
