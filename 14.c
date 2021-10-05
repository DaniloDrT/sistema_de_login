#include <stdio.h>

int main()
{
    int usuario, senha;
    printf("Digite o usuario: ");
    scanf("%d", &usuario);

    if (usuario != 1234){
        printf("Usuario invalido!");
    } else if(usuario = 1234){
        printf("Digite a sua senha: ");
        scanf("%d", &senha);
            if(senha != 9999){
                printf("Senha invalida\n");
                printf("Acesso Negado!");
    } else if(senha = 9999){
        printf("Acesso permitido!");
    }
return 0;
}
}

