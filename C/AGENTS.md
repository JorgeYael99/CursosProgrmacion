# ╔══════════════════════════════════════════════════╗
# ║   ⚠️  NO TOCAR EL CÓDIGO HASTA QUE YO LO INDIQUE  ║
# ║   O QUE OPENCODE SUGIERA QUE DEBERÍA CAMBIARSE    ║
# ╚══════════════════════════════════════════════════╝

# learn_C — AGENTS.md

## Entorno
- WSL + VS Code, compilación cruzada Windows→Linux. **No ejecutar `gcc`/`clang` desde PowerShell nativo**; usar terminal WSL o la tarea VS Code.
- Compilador: `gcc` (tarea VS Code usa `/usr/bin/gcc -g file.c -o file`). `clang` también disponible en WSL.
- Debug: GDB vía VS Code (F5, lanza preLaunchTask "gcc build active file").

## Proyecto
- Repositorio de aprendizaje de C siguiendo https://www.w3schools.com/c/index.php
- Cada `archivo.c` compila a un binario homónimo (Linux ELF, sin extensión).
- Sin Makefile, sin gestor de paquetes, sin tests, sin CI.
- Código con comentarios bilingües (principalmente español, inglés en ejemplos).
- No hay separación src/include ni estructura de proyecto más allá de archivos planos.
- **Ejercicios**: todos los archivos de práctica y repaso van en `ejercicios/` (raíz del repo), organizados por tema.

## Comandos
```bash
# Compilar y ejecutar un archivo
gcc -g archivo.c -o archivo && ./archivo

# Compilar con clang (alternativa)
clang -g archivo.c -o archivo && ./archivo

# Compilar con todos los warnings
gcc -Wall -Wextra -pedantic -g archivo.c -o archivo
```

## Archivos en C_Tutorial/
| Archivo | Tema W3Schools | Estado |
|---|---|---|
| `03_02_01_hola_mundo.c` | C Intro, Get Started, Syntax, Output | Completado |
| `04_variables.c` | C Variables | Completado |
| `05_dataTypes.c` | C Data Types | Completado |
| `06_typeConversion.c` | C Type Conversion | Completado |
| `07_constants.c` | C Constants | Completado |
| `08_operadores.c` | C Operators | Completado |
| `directivas.c` | C Constants (`#define`) | Completado |
| `ejemploVariables.c` | C Variables (repaso) | Completado |
| `x.c` | C Variables (repaso) | Completado |
| `Ejemplos_C/tiposDatos_Variables_conversion.c` | Data Types & Variables (repaso) | Completado |

## Temas vistos (W3Schools)
Cubiertos completamente:
- C Intro, Get Started, Syntax (statements, code challenge)
- C Output (Print Text, New Lines, code challenge)
- C Comments
- C Variables (Create, Format Specifiers, Change Values, Multiple, Names, Real-Life Examples, code challenge)
- C Data Types (Data Types, Characters, Numbers, Decimal Precision, Memory Size, Real-Life Example, Extended Types, code challenge)
- C Type Conversion (Implicit, Explicit)
- C Constants (const, #define)
- C Operators (Arithmetic, Assignment, Compound Assignment, Bitwise Assignment)

Próximo tema (W3Schools): **C Booleans** → `09_booleans.c`

## Convenciones
- Nombrar binarios igual que el `.c` (sin extensión). VS Code tasks.json ya lo hace automáticamente.
- Usar `printf` con format specifiers correctos (`%d`, `%f`, `%lf`, `%c`, `%s`, `%zu`, `%u`, `%ld`, `%lld`, `%lu`, `%llu`, `%Lf`).
- `sizeof` devuelve `size_t`, formatear con `%zu`.
- Literales `float` usar sufijo `f` (ej: `3.14f`), `double` no necesita sufijo.
- `unsigned long long` literales: sufijo `ULL`.
- Cuando un agente cree o modifique código, debe mantener los comentarios en español explicativos que el usuario ya usa como apuntes de estudio.
