# 📚 Aprendizaje de Rust – Guía Tutoría Dual

> **Referencia principal:** *The Rust Programming Language* (edición en español) – <https://book.rustlang-es.org/>

---

## 🎯 Metodología de Enseñanza

| Paso | Descripción | 👦 Explicación para Primaria | 🎓 Explicación para Universitario |
|------|-------------|------------------------------|-----------------------------------|
| **1. Identifica el problema fundamental** | ¿Qué queremos aprender y por qué? | Imagina que queremos construir una casa fuerte sin que se caiga. | Necesitamos un lenguaje que garantice seguridad de memoria y concurrencia sin datos corruptos. |
| **2. Analiza la necesidad del concepto** | ¿Por qué Rust tiene esas características? | En la cocina, usar una cuchara adecuada evita que la sopa se derrame. | El modelo de ownership, borrowing y lifetimes previene *dangling pointers* y *data races*. |
| **3. Desarrolla la solución gradualmente** | Paso a paso, construimos el conocimiento. | Primero aprendemos a mezclar harina y agua, luego a hornear. | Empezamos con `cargo new`, luego `let`, `mut`, `fn`, `struct`, `enum`, y avanzamos a *traits* y *async*. |
| **4. Muestra la evolución del pensamiento** | De idea simple a concepto avanzado. | De jugar con bloques a diseñar una ciudad completa. | De variables simples a sistemas de tipos avanzados y patrones de concurrencia. |

---

## 📖 Estructura del Material

```
[CAPTURA DEL LIBRO O TEXTO DE ESTUDIO]

[EXPLICACIÓN SEGÚN METODOLOGÍA]
```

A continuación se muestra un ejemplo de cómo organizar cada tema del libro siguiendo la metodología.

---

## 🛠️ Tema de Ejemplo: Ownership (Propiedad)

### 📄 Captura del Libro

> *“Cada valor en Rust tiene un único propietario. Cuando el propietario sale del alcance, el valor se libera automáticamente.”* – Capítulo 4, Sección *Ownership*.

### 👦 Explicación para Primaria  

- **Analogía:** Piensa en un juguete que solo un niño puede tener al mismo tiempo. Cuando el niño se va a dormir, el juguete se guarda en la caja y ya no está disponible para otros niños.  
- **Por qué importa:** Evita que dos niños peleen por el mismo juguete (¡peligro de accidente!).  

### 🎓 Explicación para Universitario  

- **Concepto técnico:** Cada valor posee una *regla de ownership* que determina quién es responsable de liberar la memoria. La transferencia de ownership (`let x = y;`) invalida al `y` (move semantics), mientras que el *borrow* (`&x` o `&mut x`) permite referencias temporales sin transferencia de propiedad.  
- **Ventajas:** El compilador verifica en tiempo de compilación que no haya *use-after-free* ni *data races*, eliminando gran parte de errores de memoria comunes en C/C++.  

### ✅ Preguntas de Verificación  

1. **Primaria:** ¿Qué pasa con el juguete cuando el niño que lo tiene se va a dormir?  
2. **Universitario:** ¿Qué ocurre con la variable `y` después de ejecutar `let x = y;`? ¿Cómo se llama este comportamiento en Rust?  

---

## 📚 Temas Siguientes (Resumen)

| Capítulo | Tema | Pregunta Clave |
|----------|------|----------------|
| 2 | Variables y Mutabilidad | ¿Cuándo necesitamos `mut`? |
| 3 | Tipos de datos | ¿Cómo se representa una tupla? |
| 4 | Ownership | ¿Cómo funciona el *move* vs *clone*? |
| 5 | References & Borrowing | ¿Por qué `&mut` es exclusivo? |
| 6 | Structs y Enums | ¿Cuál es la diferencia semántica? |
| 7 | Patrón y Matching | ¿Cómo descomponer una `enum`? |
| 8 | Traits | ¿Qué es la *abstracción* en Rust? |
| 9 | Gestión de Errores | ¿Cuándo usar `Result` vs `panic!`? |
| 10 | Concurrencia | ¿Cómo asegura Rust la ausencia de *data races*? |
| 11 | Asíncrono | ¿Qué implica `async/.await` en el runtime? |

---

## 🚀 Cómo Usar este README  

1. **Lee el fragmento del libro** indicado en la columna “📄 Captura del Libro”.  
2. **Revisa ambas explicaciones** (primaria y universitaria).  
3. **Responde las preguntas de verificación** para consolidar el concepto.  
4. **Ejecuta los experimentos** sugeridos en el libro (p. ej., crear un proyecto con `cargo new`, probar move semantics).  
5. **Registra tus respuestas** en un cuaderno o documento de estudio.  

---

## 🎓 Consejos de Estudio para Universitarios  

- **Compila frecuentemente**: `cargo check` para validar rápidamente sin generar binarios.  
- **Usa `rustc --explain <código>`** para entender mensajes de error avanzados.  
- **Lee las referencias cruzadas** del libro; muchas secciones dependen unas de otras.  
- **Participa en la comunidad**: foros de Rust en español, Discord, Stack Overflow.  

---

## 👦 Tips para Niños (y docentes)

- **Juega con bloques**: construye torres usando “bloques de propiedad” y “bloques prestados”.  
- **Cocina una receta**: cada ingrediente es una variable, el chef es el *owner*.  
- **Usa fichas**: asigna una ficha a cada recurso y sólo permite que una persona la tenga a la vez.  

---

**¡Listos para aprender Rust!** 🎯✨👨‍💻
*Recuerda: la práctica constante convierte la teoría en habilidad real.*
