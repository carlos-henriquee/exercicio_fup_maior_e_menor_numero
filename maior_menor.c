#include <stdio.h>

int main() {
    float num1, num2, num3, maior, menor;
    
    printf("Digite o primeiro numero:");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero:");
    scanf("%f", &num2);
    
    printf("Digite o terceiro numero:");
    scanf("%f", &num3);
    
    if(num1==num2 || num2 == num3 || num1==num3){
        printf("Numeros invalidos");
    }else{
        
        if(num1>num2) {
            if(num1>num3) {
                maior = num1;
                if(num2>num3) {
                    menor = num3;
                }else{
                    menor = num2;
                }
            }
        }else{
            if(num2>num3) {
                maior = num2;
                if(num1>num3){
                    menor = num3;
                }else{
                    menor = num1;
                }
            }else{
                maior = num3;
                menor = num1;
            }
        }
        
        printf("Maior: %.2f\nMenor: %.2f", maior, menor);
    }
    
    return 0;
}
