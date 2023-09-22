El readme del prove of concept de Estructura de datos. 

El repositorio cuenta con 3 archivos sin contar con el main. 

El primero es el "piezas.cpp". Este archivo tiene una funcion, llamada "crearPieza", de crear las piezas que el usuario cree que necesitará para crear su casa. Se recibe un string y una cola de strings. Al crear la pieza, esta se guarda en la cola recibida. La cola se pasa por referencia, entonces no se genera una copia.

El segundo es "partesCasa.cpp". Este tiene una funcion llamada "construirParte", en donde recibe una cola como parametro, un entero y una cola donde almacenar la parte construida. La cola es en donde se fueron almacenando las piezas creadas y el entero indica cuantos elementos hay que sacar de la cola para unirlas y crear una parte de la casa. Al crear la pieza, se guarda en la cola recibida. 

El tercero es "unirPartes.cpp". Este tiene una funcion llamado "unir", en donde recibe una cola de lista de strings, lo cual es la cola donde se almacenó las partes de la casa creada, un entero para indicar cuantas veces hacer un pop y otra cola para almacenar los pops que se hace. 

NOTA: SE DEBE INGRESAR EL ENTERO CORRECTAMENTE, SI SE CREÓ 4 PIEZAS PARA HACER UN CUARTO, SE DEBE PONER 4 EN LA FUNCION CONSTRUIR PARTE. ESTO TAMBIEN APLICA PARA LA FUNCION UNIR. 

Finalmente, construirCasa.cpp es el main. Ahi ya se crearon las colas necesarias para almacenar un tipo de dato especifico y ademas, se creó varias piezas, una parte de la casa y se juntó con la casa como ejemplo. 

# construccionPractica
