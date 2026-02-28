Leon Ezequiel Jara
Técnica de Educación Secundaria Número 2
Fecha: 19/12/2025

# Catálogo de Libros en Consola

¡Bienvenido al proyecto "Catálogo de Libros en Consola"! Este es un programa simple desarrollado en C para gestionar una colección de libros directamente desde la línea de comandos.

---

## Características

* **Agregar Libros**: Permite registrar nuevos libros con su título, autor y año de publicación.
* **Listar Libros**: Muestra todos los libros guardados en el catálogo.
* **Buscar Libros**: Permite encontrar libros por título o autor.
* **Interfaz de Consola**: Toda la interacción se realiza a través de comandos simples en la terminal.

---

## Tecnologías Utilizadas

* **Lenguaje de Programación**: C
* **Compilador**: GCC (MinGW recomendado para Windows)

---

## Cómo Ejecutar el Proyecto

### Prerrequisitos

* **Compilador C (GCC)**: Asegúrate de tener GCC instalado en tu sistema. Puedes verificarlo abriendo el Símbolo del Sistema (CMD) y ejecutando `gcc --version`. Si no lo tienes, puedes instalar MinGW.

### Instalación y Ejecución (desde la Consola en Windows)

1.  **Navega a la Carpeta del Proyecto**:
    Abre la carpeta `catalogo-libros-consola` en el Explorador de Archivos. En la barra de dirección superior, haz clic, escribe `cmd` y presiona Enter. Esto abrirá la consola directamente en la ubicación del proyecto.

2.  **Compila el Programa**:
    Usa el siguiente comando para compilar el código fuente. Si tienes múltiples archivos `.c`, inclúyelos todos.
    ```bash
    gcc main.c -o catalogo.exe
    ```
    (Si tienes más archivos, por ejemplo: `gcc main.c funciones.c -o catalogo.exe`)

3.  **Ejecuta la Aplicación**:
    Una vez compilado, ejecuta el programa desde la misma consola:
    ```bash
    ./catalogo.exe
    ```

### Ejecución con IDEs o Plataformas Online

* **Visual Studio Code (VS Code)**: Abre la carpeta del proyecto. Asegúrate de tener la extensión "C/C++" instalada. Usa la opción "Ejecutar y depurar" o el botón de "Play".
* **Visual Studio Community**: Crea un "Proyecto de Consola" en C, agrega tus archivos `.c` y usa el botón "Iniciar" (triángulo verde).
* **Code::Blocks / Dev-C++**: Abre tu proyecto o crea uno nuevo de consola, agrega tus archivos `.c` y usa el botón "Build and Run" (construir y ejecutar).
* **Sublime Text (con MinGW configurado)**: Abre tu archivo `.c`, ve a "Tools" > "Build System" y selecciona "C" o "C++ Single File", luego presiona `Ctrl + B`.
* **JDoodle / Replit**: Pega tu código en el editor online y usa el botón "Run".

---

## Modo de Uso

Una vez que el programa esté corriendo, verás un menú principal en la consola. Sigue las instrucciones que aparecen en pantalla para interactuar.

Ejemplos de interacción:
* Presiona `1` para agregar un nuevo libro.
* Presiona `2` para ver la lista de libros.
* Presiona `3` para buscar un libro.
* Presiona `4` para salir.

---

## Licencia

Este proyecto está bajo la Licencia MIT. Para más detalles, consulta el archivo [LICENSE](LICENSE).

---

## Contacto

Si tienes alguna pregunta o sugerencia, puedes contactar al desarrollador en:
*jaraleon037@gmail.com