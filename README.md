# 1872E_DataStructureFan
Este repositorio contiene la solución al problema "1872E – Data Structure Fan" en Codeforces. El problema trata Agustín, un gran aficionado a la estructura de datos, el cual ha decidido implementar un juego que consiste en la modificación de un string y un vector. Dicho programa se basa en un juego de posiciones entre el mismo string que solo posee valores de 0 o 1; y un vector de que contiene valores enteros, donde acorde a las distintas consultas que vaya realizando el usuario, se debe modificar algunos valores del string o calcular el XOR entre algunos valores específicos del vector. 

Las consultas se realizan de la siguiente manera, en caso de que el usuario inserte un 1, el programa debe solicitar dos valores adicionales, los cuales serán los límites superior e inferior, y servirán para modificar el string en dichas posiciones, cambiando los valores por su opuesto (si es 1 pasa a 0 y viceversa). Si el usuario decide ingresar un valor de 2, el usuario adicionalmente deberá proporcionar también un valor de 0 o 1. Dependiendo de este último valor, el programa calculará el XOR de los valores en el vector cuyas posiciones coinciden con el valor dado dentro del string.

Para tal efecto, la solución se basa en la implementación de dos colas (queues), que permiten clasificar los elementos del vector según su valor y su posición. Una vez clasificados los valores en las dos colas, se procede a calcular el valor del XOR correspondiente según la consulta solicitada.

Video YouTube: https://youtu.be/5N8ndkZRBGs
