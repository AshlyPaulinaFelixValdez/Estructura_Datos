function numerosransdom() {
    const tamaño =10;
    const arreglo = [];
    for (let i =0; i < tamaño; i++){
        arreglo.push(Math.floor(Math.random()*10)+1);
    }
    return arreglo;
}
const prompt = require("prompt-sync")();
    let numeros = prompt("Ingresa números: ").split(" ").map(Number);

    for(let i=0; i< numeros.length-1; i++){
        for(let j=0; j< numeros.length-1-i; j++){
            if(numeros[j] > numeros[j+1]){
                let temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    console.log("Ordenado: ", numeros);