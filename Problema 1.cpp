#include <iostream>
#include <string>

int main(int argc, char** argv)
{
  // Si hay argumentos vamos a procesar
    if (argc > 1) {
        // Obtenemos el string de la palabra
        std::string palabra(argv[1]);
        int aux = int(palabra[0]); // Conversión char a ASCII
        int contador = 0;
        for(int i=0;i<palabra.length();i++)
        {
            if(aux!=palabra[i]){
                std::cout << static_cast<char>(aux) << contador; // Se imprime la conversion ASCII a char y contador
                contador = 1;
                aux = palabra[i];
            }
            else if(i == (palabra.length()-1)){
                std::cout << static_cast<char>(aux) << contador+1;  // Se imprime la conversion ASCII a char y contador + 1 (incluir letra final)  
            }
            else{
                contador+=1;
            }
        }
        return 0;
    } else {
        // Retonamos error y mostramos mensaje en la salida de error
        std::cerr << std::endl << "No hay argumentos suficientes para " << argv[0] << std::endl;
        return 1;
    }
}