function textoInvertido(string){
    let num_saida = ""; i = string.length -1;

    for(i; i >=0; i--){
        num_saida = num_saida + string[i];
    }

    return num_saida;

}

console.log(textoInvertido('Olá, seja bem vindo!'));