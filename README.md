Datos utilizados para la ejecucion de los gráficos.

<img width="322" height="160" alt="image" src="https://github.com/user-attachments/assets/46f572d2-9c55-4cef-a4f6-2bad2342ae3d" />

Binary Search 

<img width="838" height="606" alt="image" src="https://github.com/user-attachments/assets/df9e1f1c-92fc-4354-9c47-31d789236c39" />

Para el Binary Search, el análisis teórico indica una complejidad temporal de O(log n). Esto significa que el tiempo de búsqueda aumenta muy lentamente aunque el tamaño del arreglo crezca bastante, ya que en cada iteración se descarta aproximadamente la mitad de los elementos. En los resultados experimentales se observan algunas variaciones entre mediciones, incluso casos donde un arreglo más grande presenta un tiempo menor que uno más pequeño. Esto no contradice la teoría, porque la notación Big O representa la tendencia de crecimiento del algoritmo y no el tiempo exacto de cada ejecución. Además, al tratarse de tiempos muy pequeños, factores como la memoria caché, el procesador, otros procesos del sistema o la posición del elemento buscado pueden afectar las mediciones.						

Merge Sort

<img width="840" height="607" alt="image" src="https://github.com/user-attachments/assets/ceac211c-d915-4ef5-8f46-6611513a554c" />

"Para Merge Sort, el análisis teórico establece una complejidad temporal de O(nlog n). Esto se debe a que el algoritmo divide repetidamente el arreglo en partes más pequeñas y luego recorre los elementos para combinarlos nuevamente de forma ordenada. En el gráfico experimental se observa un aumento mucho más claro del tiempo conforme aumenta el tamaño del arreglo, lo cual es consistente con el comportamiento esperado.
En este caso se utilizó una línea de tendencia lineal únicamente como una forma de visualizar el comportamiento de los datos obtenidos y mostrar que existe una relación creciente entre el tamaño del arreglo y el tiempo de ejecución. Esta línea no pretende representar la complejidad teórica del algoritmo ni indicar que Merge Sort sea O(n). Su complejidad continúa siendo O(nlog n); simplemente, dentro del rango de tamaños analizado, los valores experimentales presentan un comportamiento que puede aproximarse bastante bien mediante una tendencia lineal."						
