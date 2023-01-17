Cosas a saber si es la primera vez que programas:

-> Variable: Es un elemento que puede ser variado durante la ejecución del programa, es decir, que no tiene porque tener siempre el mismo valor. Por ejemplo:
 
  int main (void)
      {
        int num1, num2, resultado;

        num1 = 2;
        num2 = 5;
        resultado = 2 + 5;

        return (0);
      }

En este caso,  num1, num2 y resultado son variables.ç
  
  -> Tipo de variables:
     
      -> int: Números enteros
     
      -> char: Carácter (mirar tabla ascii)
      
      -> String (Ya veras como se definen): Cadena de carácteres ("Hello", con char necesaritarias 4 varriables, con String solo una)
      
      -> float: Números con decimal
      
      -> Muchos más ...
  
  -> Estructura:
    
    tipoVariable nombreVariable;


-> Main es la función principal, es necesaria para poder ejecutar un programa, por lo que cuando vayas a probar tu código deberá estar presente
  
   -> Siempre tiene la misma estructura:
      int main (void)
      {
        //Lineas de código
        return (0);
      }

      Es importante recordar que main es una función que devuelve por convenio 0


-> A parte de main, en los programas pueden haber otras funciones
   
   -> Su estructura es la siguiente:
      
      void/ int/ char/ ... nombreFuncion (tipo nombreParametro1, tipo nombreParametro2, ...)
      {
        //Lineas de código
        return (x) //En caso de no ser tipo void
      }
    
    -> Para llamar a una función desde otra:
        nombreFuncion (valorParametro1, valorParametro2, ...);


-> Bucles: Un bucle es aquello que se repite hasta que se cumpla la condición indicada. While repetirá todo lo que se encuentre dentro de sus {}, hasta que se cumpla la condición indicada entre sus ():
   
    while (num < 10)
    {
      sol = sol + num;
      num++; // Es lo mismo que num = num + 1;
    }
  
  En este caso, sol sumara a su valor num hasta que este último llego a 10



  IMPORTANTE: En los bucles recuerda que es necesario variar el valor de la condición, en While deberás añadirlo tú, ya que no te reportará errores si se te olvida, simplemente el programa se quedará en un bucle infinito. 